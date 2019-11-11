#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 5, b = 6;
	printf("a=%d, b=%d\n", a, b);
	a = b - a;
	b = b - a;
	a = a + b;
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}