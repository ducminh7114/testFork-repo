#include <stdio.h>
#include <math.h>

int main() {
	int x;
	printf("Enter the square's edge size: ");
	scanf_s("%d", &x);
	int P = x * 4;
	int S = pow(x, 2);
	printf("Perimeter of the square is: %d\n", P);
	printf("Area of the square is: %d\n", S);
	return 0;
}