#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int tmp = 0;
	for (i = 0; i < 11; i++) {
		scanf("%d", &i); {
			if (i > tmp)
				tmp = i;
		}
	}

	printf("%d\n", tmp);


	system("pause");
	return 0;
}
