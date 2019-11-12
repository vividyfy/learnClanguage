#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu() {
	printf("******1.开始游戏*****\n");
	printf("******2.退出游戏*****\n");
}
void game() {
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("请输入要猜的数字:");
		scanf("%d", &input);
		if(input > random_num) {
			printf("猜大了.\n");
		}else if(input < random_num)
		{
			printf("猜小了.\n");
		}else
		{
			printf("猜对了!\n");
			break;
		}
	}
	
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));


	do
	{
		menu();
			printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			return 0;
			break;
		default:
			printf("无效数字,请重新输入!\n");
			break;
		}
	} while (input);
		return 0;
}





