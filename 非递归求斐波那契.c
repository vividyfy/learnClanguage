#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Fib(n) {
	int num;
	int num1 = 1;
	int num2 = 2;
	if (n == 1 || n == 2) {
		num = 1;
	}
	else {
		for (int i = 3; i <= n; i++) {
			num = num1 + num2;
				num1 = num2;
				num2 = num;
		}
	}
	return num;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int num = Fib(n);
	printf("%d", num);
	system("pause");
}