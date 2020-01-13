#include <stdio.h>
#include <stdlib.h>
void police(int A, int B, int C, int D) {
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++) {
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
			printf("Ð×ÊÖÊÇ%c\n", killer);
		}
	}
}
int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int killer = 0;
	police(A, B, C, D);
	system("pause");
	return 0;
}