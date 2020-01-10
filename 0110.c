#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n) {
	if (n < 9)
		return n;
	else
		return n % 10 + DigitSum(n / 10);
}
int main() {
	int num = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	printf("%d", DigitSum(num));
	system("pause");
}
