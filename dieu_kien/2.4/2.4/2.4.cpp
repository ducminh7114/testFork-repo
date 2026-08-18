#include <stdio.h>
#include <math.h> 

int main() {
	int a, b;
	printf("Pls input two numbers a and b: \n");
	while (1) {
		printf("Enter number a: ");
		int status = scanf_s("%d", &a);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n \n");
		while (getchar() != '\n');
	}
	while (1) {
		printf("Enter number b: ");
		int status = scanf_s("%d", &b);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n \n");
		while (getchar() != '\n');
	}

	if (a % b == 0)
	{
		printf("a can be divided with b");
	}
	else {
		printf("a can not be divided with b");
	}
	return 0;
}