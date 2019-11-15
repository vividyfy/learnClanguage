#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Binarysearch(int arr[], int size, int toFind) {
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;
	while (left <= right) {
		if (arr[mid] <= toFind) {
			left = mid + 1;
		}
		else if (arr[mid] > toFind) {
			right = mid - 1;
		}
		else if (arr[mid] = toFind) {
			toFind = arr[mid];
		}
		break;
	}
	while (left >= right)
		break;
	return -1;
}

int main() {
	int arr[12] = { 0,1,2,3,4,9,10,25,27,28,32,33 };
	int n;
	printf("请输入要找的数:");
	scanf("%d", &n);
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = Binarysearch(arr, size, n);
	if (ret == -1) {
		printf("-1\n");
	}
	else {
		printf("找到了\n");
	}
	system("pause");
}
