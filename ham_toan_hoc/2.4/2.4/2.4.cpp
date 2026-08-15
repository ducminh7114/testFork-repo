#include<stdio.h>
#include<math.h>

int main() {
	int x;
	printf("Enter the value of x: ");
	scanf_s("%d", &x);
	int answer = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
	printf("The answer of this equation is: %d\n", answer);
	return 0;
}