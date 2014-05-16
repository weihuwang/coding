#include <stdio.h>

void InsertionSort(int * arr, size_t len)
{
	if (arr == NULL)
	{
		return;
	}
	for (int i = 1; i < len; i++)
	{
		int cur = arr[i];
		int j = i - 1;
		while (arr[j] > cur && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = cur;
	}
}

int main()
{
	int arr[4] = {7, 6, 5, 4};
	InsertionSort(arr, 4);
	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
