#include <stdio.h>

int main() {
	int h;
	int a, b;
	int c, d;
	printf("Enter the value of height: \n");
	scanf_s("%d", &h);
	printf("Enter the value of base1: \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("Enter the value of base2: \n");
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int S = ((a + b) * h) / 2;
	int P = a + b + c + d;
	printf("The area of the trapezoid is: %d\n", S);
	printf("The perimeter of the trapezoid is: %d\n", P);
}