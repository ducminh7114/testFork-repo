#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a, b;
	char T;
	int result;
	printf("Nhap hai so a va b: \n");
	printf("Nhap so a: ");
	scanf_s("%d", &a);
	printf("Nhap so b: ");
	scanf_s("%d", &b);
	printf("Nhap T (+,-,*,/): ");
	scanf_s(" %c", &T);
	switch (T) {
	case '+':
		result = a + b;
		printf("Tong cua a + b la: %d", result);
		break;
	case '-':
		result = a + b;
		printf("Hieu cua a - b la: %d", result);
		break;
	case '*':
		result = a + b;
		printf("Tich cua a * b la: %d", result);
		break;
	case '/':
		result = a + b;
		printf("Thuong cua a / b la: %d", result);
		break;
	default:
		printf("Cannot calculate.");
	}
	return 0;
 }