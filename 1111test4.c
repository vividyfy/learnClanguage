#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k, tmp; {
		scanf("%d%d%d", &i, &j, &k);
	}
	if (i < j) {
		tmp = i;
		i = j;
		j = tmp;
   	}
	if (j < k) {
		tmp = j;
		j = k;
		k = tmp;
	}
	if (i < k) {
		tmp = i;
		i = k;
		k = tmp;
	}
	printf("%d %d %d\n", i, j, k);
	system("pause");
	return 0;
}
