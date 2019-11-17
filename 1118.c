#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a, b;
	int Sn = 0, tmp = 0;
	scanf("%d", &b);
	for (a = 0; a < 10; a++)
	{
		tmp = tmp * 10 + b;
		Sn += tmp;
	}
	printf("Sn = %d\n", Sn);
	system("pause");
}