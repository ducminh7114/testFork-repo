#include <stdio.h>

int main() {
	float x;
	float pow;
	printf("Enter number base number: ");
	scanf_s("%d", &x);
	printf("Enter your exponent number: ");
	scanf_s("%d", &pow);
	float power = pow(x, pow);
	float squareRoot = sqrt(x);
	printf("The power number of %d is: %d \n", x, power);
	printf("The square root of %d is: %d\n", squareRoot);
	return 0;
}