#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int num = Fib(n);
	printf("%d\n", num);
	system("pause");
}