#include <stdio.h>
#include <stdlib.h>
int Reverse_String(char *string) {
	if (*string == '\0') {
		return 0;
	}
Reverse_String(string + 1);
printf("%c ", *string);

} 
int main() {
	char *str = "abcde";
	Reverse_String(str);
	printf("\n");
	system("pause");
}