#include <stdio.h>
#include <stdlib.h>
void Reserve_String(char *string) {
	if (*string == '\0') {
		return 0;
	}
	Reserve_String(string + 1);
	printf("%c", *string);
}
int main() {
	char *str = "abcde";
	Reserve_String(str);
	system("pause");
	return 0;
}