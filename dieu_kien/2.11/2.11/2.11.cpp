#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Nhap vao 3 so a, b, c: ");
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
	printf("Nhap c: ");
	scanf_s("%d", &c);
	if (a + b > c && a + c > b && b + c > a) {
		printf("3 so a, b, c co the tao thanh 1 tam giac");
		if (a == b && b == c) {
			printf(" va tam giac deu");
		}
		else if (a == b || a == c || b == c) {
			printf(" va tam giac can");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			printf(" va tam giac vuong");
		}
		else {
			printf(" va tam giac thuong");
		}
	}
	else {
		printf("3 so a, b, c khong the tao thanh 1 tam giac");
	}
	return 0;
}