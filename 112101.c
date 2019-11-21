// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int num(int i) {
// 	int j = 0;
// 	for (i = 0; i < sqrt(i); i++) {
// 		if (i % j == 0)
// 			printf("不是素数");
// 		break;
// 	}
// 	if (j > sqrt(i)) 
// 		printf("素数");
// 	
// 	
// 	return 0;
// }
// int main() {
// 	int i = 0;
// 	printf("请输入一个正整数:");
// 	scanf("%d", &i);
// 	num(i);
// 	system("pause");
// 	return 0;
// }
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Judge(int num) {
	int i = 0;

	
		for (i = 2; i <= sqrt(num); i++) {
			if (num % i == 0) 
				printf("这个数不是素数!\n");
				break;
			
		}if (i > sqrt(num)) {
			printf("这个数是素数!\n");
		}
	
	return 0;
}

int main(){
	int num = 0;
	printf("请输入一个正整数：\n");
	scanf("%d", &num);
	Judge(num);
	system("pause");
	return 0;
}

