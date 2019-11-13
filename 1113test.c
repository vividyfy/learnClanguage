#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int password = 1044;
	int key, i;
	for (i = 1; i < 4; i++) {
		scanf("%d", &key);
		if (key == password)
			printf("µÇÂ¼³É¹¦!\n");
		else if (key != password){ 
			printf("ÃÜÂë´íÎó!\n");
			if(i==3)
				printf("µÇÂ¼Ê§°Ü!\n");
		}
	}
	system("pause");
	return 0;
}