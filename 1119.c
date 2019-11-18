#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	char str;
	printf("ÇëÊäÈë×Ö·û:");
	scanf("%c", &str);
	int str1 = "a";
	int str2 = "A";
	if (str >= 97 && str <= 122) {
		int str1 = str - 32;
		printf("%c\n", str1);
	}
	else if (str <= 90 && str >= 65) {
		int str2 = str + 32;
		printf("%c\n", str2);
	}
	system("pause");
}
