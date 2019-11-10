#include <stdio.h>
#include <math.h>
int main() {
	int a = 4, b = 5;
	printf("a = %d, b = %d\n", a, b);
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}
