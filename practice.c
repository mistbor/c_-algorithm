#include <stdio.h>
#include <math.h>

void test04();
void test05();
void test06();
void test08();
void test09();
void test10();
void test11();
void test12();
void test13();
void test14();
void test15();
void test16();
void test17();
void test18();
void test19();
void test20();
void test21();
void test22();
void test23();
void test24();
void test25();
void test26();
void test27();
void test28();
void test29();
int fun29_1();
int fun29_2();
void test30();
void test32();
void test33();
void test35();
void test36();
void test37();

int main() {
	// test05();
	// test06();
	// test08();
	// test09();
	// test10();
	// test11();
	// test12();
	// test14();
	// test15();
	// test16();
	// test17();
	// test18();
	// test19();
	// test21();
	// test22();
	// test23();
	// test24();
	// test25();
	// test26();
	// test27();
	// test28();
	// test29();
	// test30();
	// test32();
	// test33();
	// test35();
	// test36();
	test37();
}

void test37() {
	// 对10个数进行排序。
	int arr[] = {2, 1, 4, 5, 6, 2, 9, 0, 1, 12};
	int len = sizeof(arr) / sizeof(int);
	int temp = 0;
	for (int i = 0; i < len; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
}

void test36() {
	// 求100之内的素数
	int count = 100;
	for (int i = 1; i < count; ++i)
	{
		int temp = i - 1;
		while(temp > 1) {
			if (i % temp == 0)
				break;
			temp--;
		}
		if (temp == 1)
		{
			printf("%d是质数\n", i);
		}
	}
}

void test35() {
	// 字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
	char string[] = "www.runoob.com";
	int i = 0, j = sizeof(string) / sizeof(char) - 2;
	// printf("j = %d\n", j);
	char result[j + 2];
	for (; j >= 0; j--, i++)
	{
		result[i] = string[j];
		// printf("%d: %c\n", i, result[i]);
	}
	result[i] = '\0';
	printf("%s\n", result);
}

void test33() {
	// 判断一个数字是否为质数。
	int num = 7;
	int i = num - 1;
	while(i > 1) {
		if (num % i == 0)
		{
			printf("%d不是质数\n", num);
			break;
		}
		i--;
	}
	if (i == 1)
	{
		printf("%d是质数", num);
	}
}

void test32() {
	// 删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
	char string[] = "11111011";
	char c = '0';
	
	int i, j;
	for ( i = j = 0; string[i] != '\0'; ++i)
	{
		if (string[i] != c)
		{
			string[j++] = string[i];
		}
	}
	string[j] = '\0';

	printf("%s\n", string);
}

void test30() {
	// 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
	int num = 123454321;

	int reverseNum = 0;
	int remainder = 0;

	int temp = num;
	while(temp > 0) {
		remainder = temp % 10;
		reverseNum *= 10;
		reverseNum += remainder;
		temp = (temp - remainder) / 10;
	}

	printf("reverseNum = %d\n", reverseNum);
	if (num == reverseNum)
	{
		printf("%d是回文数\n", num);
	}

}


int fun29_1(int i) {
	int remainder = 0;
	if (i != 0)
	{
		remainder = i % 10;
		printf("%d", remainder);
		i = fun29_1((i - remainder)/10);
	}
	return remainder;
}

int fun29_2(int i) {
	int count = 0;
	int remainder = 0;

	while(i > 0) {
		remainder = i % 10;
	 	i -= remainder;
	 	i /= 10;
	 	count++;
	}
	return count;
}


void test29() {
	// 给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
	int num = 12340005;
	fun29_1(num);
	printf("\n");
	printf("%d有%d位\n", num, fun29_2(num));
}

int fun28(int i) {
	int age;
	if (i == 1)
	{
		age = 10;
	} else{
		age = fun28(i - 1) + 2;
	}
	return age;
}

void test28() {
	// 有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
	// 问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。
	// 请问第五个人多大？
	int count = 6;
	for (int i = 1; i < count; ++i)
	{
		printf("第%d个人%d岁\n", i, fun28(i));
	}

}

void test27() {
	// 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
}

int fun26(int i) {
	int sum;
	if (i == 0)
	{
		sum = 1;
	} else{
		sum = i * fun26(i - 1);
	}
	return sum;
}

void test26() {
	// 利用递归方法求5!。
	int count = 6;
	for (int i = 0; i < count; ++i)
	{
		printf("%d! = %d\n", i, fun26(i));
	}
}

void test25() {
	// 求1+2!+3!+...+20!的和。
	double sum = 0;
	int count = 20;
	for (int i = 1; i <= count; ++i)
	{
		int j = i;
		double temp = 1;
		while(j > 0) {
			temp *= j;
			j--;
		}
		printf("%f\n", temp);
		sum += temp;
	}
	printf("%f\n", sum);
}

void test24() {
	// 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
	int count = 20;
	
	double upper = 2;
	double lower = 1;
	double temp = 0;
	double sum = upper / lower;
	for (int i = 2; i <= count; ++i)
	{
		temp = lower;
		lower = upper;
		upper += temp;
		sum += upper / lower;
	}
	printf("%9.6f\n", sum);
}




void test23() {

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

	int count = 7;
	for (int i = 0; i < (count + 1)/2; ++i)
	{
		for (int j = 0; j < ((count - 2 * i) / 2); ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < (count/2 - (count - 2 * i) / 2); ++j)
		{
			printf("*");
		}
		printf("*");
		for (int j = 0; j < (count/2 - (count - 2 * i) / 2); ++j)
		{
			printf("*");
		}
		for (int j = 0; j < ((count - 2 * i) / 2); ++j)
		{
			printf(" ");
		}
		printf("\n");
	}

	for (int i = count/2 - 1; i >= 0; --i)
	{
		for (int j = 0; j < ((count - 2 * i) / 2); ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < (count/2 - (count - 2 * i) / 2); ++j)
		{
			printf("*");
		}
		printf("*");
		for (int j = 0; j < (count/2 - (count - 2 * i) / 2); ++j)
		{
			printf("*");
		}
		for (int j = 0; j < ((count - 2 * i) / 2); ++j)
		{
			printf(" ");
		}
		printf("\n");
	}
}

void test22() {
	// 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
	// 已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
	char arr1[] = {'a', 'b', 'c'};
	char arr2[] = {'x', 'y', 'z'};
	char arr[3] = {};
	int len1 = sizeof(arr1) / sizeof(char);
	int len2 = sizeof(arr2) / sizeof(char);
	int flag = 0;

	for (int i = 0; i < len1; ++i)
	{
		for (int j = 0; j < len2; ++j)
		{
			if (arr1[i] == 'a' && arr2[j] == 'x')
			{
			}
			 else if (arr1[i] == 'c' && (arr2[j] == 'x' || arr2[j] == 'z'))
			{
			} else {
				for (int k = 0; k < (sizeof(arr) / sizeof(char)); ++k)
				{
					if (arr2[j] != arr[k])
					{
						flag = 1;
						arr[i] = arr2[j];
						printf("%c --- %c\n", arr1[i], arr2[j]);
						break;
					}
				}
			}
			if (flag == 1)
			{
				flag = 0;
				break;
			}
		}
	}
}

void test21() {
	// 猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
	// 以后每天早上都吃了前一天剩下 的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
	int num = 1;
	for (int i = 1; i < 10; ++i)
	{
		num = (num + 1) * 2;
	}
	printf("%d\n", num);
}

void test20() {
	// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
	double high = 100;
	int times = 10;
	double sum = 0;
	for (int i = 1; i <= times; ++i)
	{
		sum += high;
		high /= 2;
		sum += high;
	}
	sum -= high;
	printf("它在第%d次落地时,共经过%2f米,第%d次反弹%2f高\n", times, sum, times, high);
}

void test19() {
	// 一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
	for (int k = 2; k < 1000; ++k)
	{
		int num = k;
		int sum = 1;
		for (int i = 2; i < num; ++i)
		{
			if(num % i == 0) {
				sum += i;
			}
		}
		if (sum == num)
		{
			printf("num = %d\n", num);
		}
	}
}

void test18() {
	// 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
	int a = 2, num = 5;
	int sum = 0;
	int ai = 0;
	for (int i = 1; i <= num; ++i)
	{
		ai = ai * 10 + a;
		sum += ai;
	}
	printf("%d\n", sum);
}

void test17() {
	// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
	char str[] = {'1', 'a', '9', 'm', 'i', '-', ' '};
	int len = sizeof(str) / sizeof(char);
	int ens = 0, emptys = 0, digts = 0, others = 0;
	for (int i = 0; i < len; ++i)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ens++;
		} else if (str[i] >= '0' && str[i] <= '9')
		{
			digts++;
		} else if (str[i] == ' ')
		{
			emptys++;
		} else{
			others++;
		}
	}
	printf("英文字母: %d, 空格: %d, 数字: %d, 其它字符: %d\n", ens, emptys, digts, others);
}

void test16() {
	// 输入两个正整数m和n，求其最大公约数和最小公倍数。
	int num1 = 12, num2 = 26;
	int m = num1, n = num2;
	// 最大公约数
	int min = 1, max = 1;
	for (int i = 2; i < n; ++i)
	{
		if ((m % i == 0) && (n % i == 0))
		{
			min *= i;
			m /= i;
			n /= i;
		}
	}
	max = (num1 / min) * (num2 / min) * min;
	printf("最大公约数: %d\n", min);
	printf("最小公倍数: %d\n", max);

}

void test15() {
	// 利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
	int score = 100;
	if (score >= 90)
	{
		printf("A");
	} else if (score >= 60)
	{
		printf("B");
	} else{
		printf("C");
	}
}

void test14() {
	// 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
	int num = 90;
	printf("%d = ", num);
	for (int i = 2; i <= num; ++i)
	{
		while(num % i == 0) {
			printf("%d ", i);
			num /= i;
			if (num != 1)
			{
				printf("*");
			}
		}
	}

}

void test13() {
	// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
	for (int i = 100; i < 1000; ++i)
	{
		int x = i % 10;
		int y = ((i - x) / 10) % 10;
		int z = i / 100;
		if (x * x * x + y * y * y + z * z * z == i)
		{
			printf("%d ", i);
		}
	}
}

void test12() {
	// 判断101到200之间的素数。
	// 将该数除以2~sqrt(该数)
	for (int i = 101; i <= 200; ++i)
	{
		for (int j = 2; j <= floor(sqrt(i)); ++j)
		{
			if (i % j == 0)
			{
				break;
			}
			if (j == floor(sqrt(i)))
			{
				printf("%d ", i);
			}
		}
	}
}

void test11() {
	// 古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
	// 序列为1,1,2,3,5...即总数为前两个数之和
	int month = 40;
	int rabbits[40] = {};

		for (int i = 0; i < month; ++i)
		{
			if (i == 0 || i == 1) {
				rabbits[i] = 1;
			} else {
				rabbits[i] = rabbits[i - 1] + rabbits[i - 2];
			}
		}
		for (int i = 0; i < month; ++i)
		{
			printf("%d\n", rabbits[i]);
		}
}

void test10() {
	// 打印楼梯，同时在楼梯上方打印两个笑脸。
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%c", 219);
		}
		printf("\n");
	}
}

void test09() {
	// 要求输出国际象棋棋盘。白格子是 %c%c
	int flag = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (flag == 0)
			{
				printf("%c", 219);
				flag = 1;
			} else{
				printf("  ");
				flag = 0;
			}
		}
		printf("\n");
		if (flag == 0)
		{
			flag = 1;
		} else {
			flag = 0;
		}
	}
}

void test08() {
	// 输出9*9口诀。
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < i + 1; ++j)
		{
			printf("%d * %d = %d   ", i, j, i * j);
		}
		printf("\n");
	}
}

void test06() {
	// 用*号输出字母C的图案。
	printf("* * *\n");
	printf("*\n");
	printf("*\n");
	printf("* * *\n");
}

void test05() {
	// 输入三个整数x,y,z，请把这三个数由小到大输出
	int k = 100, x = 9, y = 8, z = 7;
	int arr[] = {x, y, z, k};
	int temp = 0;
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
}

void test04() {
	int day, month, year, sum;
	printf("\n输入年、月、日，格式为：年，月，日（2015，12，10）\n");
	scanf("%d,%d,%d", &year, &month, &day);
	// 1, 3, 5, 7, 8, 10, 12 有31天
	// 4, 6, 9, 11 有30天
	// 闰年2月有29天，非闰年2月有28天
	// 闰年的计算：年份能被4整除但是不能被100整除
	switch(month) {
		case 1: sum = 0;break;
		case 2: sum = 31;break;
		case 3: sum = 59; break;
		case 4: sum = 90; break;
		case 5: sum = 120; break;
		case 6: sum = 151; break;
		case 7: sum = 181; break;
		case 8: sum = 212; break;
		case 9: sum = 243; break;
		case 10: sum = 273; break;
		case 11: sum = 304; break;
		case 12: sum = 334; break;
	}
	if (month < 2)
	{
		sum += day;
	} else {
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			// 闰年2月29天
			sum += 1 + day;

		} else {
			// 非闰年2月28天
			sum += day;
		}
	}
	printf("这是这一年的第%d天\n", sum);
}