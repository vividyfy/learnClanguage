#include <stdio.h>
#include <stdlib.h>
int strlen(char *string) {
	int count = 0;
	while (*string != '\0') {
		count++;
		string++;
	}
	return count;
}
int main() {
	char string[] = "abcd";
	int ret = strlen(string);
	printf("%d\n", ret);
	system("pause");
}