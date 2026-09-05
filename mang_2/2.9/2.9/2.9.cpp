#include <stdio.h>
#include <math.h>

void NhapSoNguyen(int* a, int* b) {
	printf("Nhap hai so a va b: \n");
	printf("Nhap so a: ");
	while (1) {
		int status = scanf_s("%d", a);
		if (status == 1) {
			break;
		} printf("invalid number, pls try again.");
		while (getchar() != '\n');
	}
	if (*a < 0) {
		*a = abs(*a);
	}
	printf("Nhap so b: ");
	while (1) {
		int status = scanf_s("%d", b);
		if (status == 1) {
			break;
		} printf("invalid number, pls try again.");
		while (getchar() != '\n');
	}
	if (*b < 0) {
		*b = abs(*b);
	}
}

int TimUCLN(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
}

int main() {
	int a, b;
	NhapSoNguyen(&a, &b);
	int UCLN = TimUCLN(a, b);
	printf("uoc chung lon nhat cua hai so %d va %d la: %d", a, b, UCLN);
	return 0;
}