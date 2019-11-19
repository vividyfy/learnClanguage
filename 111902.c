#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Is_leapyear() {
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d是闰年\n",year);
	}
	else if (year % 400 == 0) {
		printf("%d是闰年\n", year);
	}
	else {
		printf("%d不是闰年\n", year);
	}
}


int main() {
	Is_leapyear();


	system("pause");
}