// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int num(int i) {
// 	int j = 0;
// 	for (i = 0; i < sqrt(i); i++) {
// 		if (i % j == 0)
// 			printf("��������");
// 		break;
// 	}
// 	if (j > sqrt(i)) 
// 		printf("����");
// 	
// 	
// 	return 0;
// }
// int main() {
// 	int i = 0;
// 	printf("������һ��������:");
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
				printf("�������������!\n");
				break;
			
		}if (i > sqrt(num)) {
			printf("�����������!\n");
		}
	
	return 0;
}

int main(){
	int num = 0;
	printf("������һ����������\n");
	scanf("%d", &num);
	Judge(num);
	system("pause");
	return 0;
}

