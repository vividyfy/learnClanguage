#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int DigitSum(n) {
	if (n > 0) {
		return n % 10 + DigitSum(n / 10);
	}
	return 0;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", DigitSum(num));
	system("pause");
}