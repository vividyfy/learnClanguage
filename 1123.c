#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int power(int n, int m) {
	if (m <= 0)
		return 1;
	else
		return n * power(n, m - 1);	
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int ret = power(n, m);
	printf("%d\n", ret);
	system("pause");
}
