#include <stdio.h>

// 冒泡排序
void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for ( i = 0; i < len - 1; ++i)
	{
		for ( j = 0; j < len - 1 - i; ++j)
		{
			if (arr[j] >= arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < len; ++k)
	{
		printf("%d ", arr[k]);
	}
}

// 选择排序
void choose_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len; ++i)
	{
		for (j = i + 1; j < len; ++j)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int k = 0; k < len; ++k)
	{
		printf("%d ", arr[k]);
	}
}

// 插入排序
void insert_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 1; i < len; ++i)
	{
		temp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > temp; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}

	for (int k = 0; k < len; ++k)
	{
		printf("%d ", arr[k]);
	}
}



int main() {
	int arr[] = {1, 4, 5, 10, 9, 2, 1, 100, 101};
	//int arr[] = {4, 10, 3, 9, 2};
	int len = (int)sizeof(arr) / sizeof(*arr);
	printf("%d\n", len);
	// bubble_sort(arr, len);
	// choose_sort(arr, len);
	insert_sort(arr, len);
	return 0;
}