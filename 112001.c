#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d b=%d", a, b);
	system("pause");
}