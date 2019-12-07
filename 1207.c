#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_ROW 3
#define MAX_COL 3
int menu() {
	printf("=================\n");
	printf("欢迎来到三子棋游戏！\n");
	printf("1.开始游戏.\n");
	printf("2.结束游戏.\n");
	printf("=================\n");
	printf("请输入您的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	for (row = 0; row < MAX_ROW; row++)
		for (col = 0; col < MAX_COL; col++)
			chessBoard[row][col] = 0;
	srand((unsigned int)time(0));
	memset(chessBoard, ' ', MAX_ROW*MAX_COL * sizeof(char));
}
void Print(char chessBoard [MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+\n");
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");
}
void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到玩家落子!");
	while (1) {
		int row = 0;
		int col = 0;
		printf("请输入您要落子位置的坐标, (row col)");
		scanf("%d %d", &row, &col);
		if (row<0 || row>=MAX_ROW || col<0 || col>=MAX_COL) {
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("当前位置已经有子了!");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}
}
void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到电脑落子了!\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = '0';
		break;
	}
}
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if(chessBoard[row][col]==' '){
				return 0;
			}
		}
	}
	return 1;
}
char check(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]){
			return chessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] !=' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	if (chessBoard[0][0] != ' ' &&chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' ' &&chessBoard[0][2] == chessBoard[1][1] && chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	if (IsFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}
void Game() {
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = '0';
	while (1) {
		Print(chessBoard);
		PlayerMove(chessBoard);
		winner = check(chessBoard); 
			if (winner != ' ') {
				break;
			}
			ComputerMove(chessBoard);
			winner = check(chessBoard); 
			if (winner != ' ') {
				break;
			}
		}
			Print(chessBoard);
			if (winner == 'X') {
				printf("恭喜你!你获胜了!\n");
			}
			else if (winner == '0') {
				printf("你输了!\n");
			}
			else {
				printf("和棋!\n");
			}
		
	
}
int main(){
    while (1) {
	int choice = menu();
	if (choice == 1) {
		Game();
	}
	else if (choice == 2) {
	printf("再见!");
		break;
	}
	else {
		printf("您的输入有误!");
	}
	}
	system("pause");
}