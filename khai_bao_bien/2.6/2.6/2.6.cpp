#include <stdio.h>

int main() {
	char symbol;
	printf("Enter a symbol: \n");
	scanf_s("%c", &symbol);
	printf("The ASCII of this symbol is: %d\n", symbol);
	int frontLetter = symbol - 1;
	int backLetter = symbol + 1;
	printf("The ASCII of the front and back symbol is: %d, %d\n", frontLetter, backLetter);
	return 0;
}