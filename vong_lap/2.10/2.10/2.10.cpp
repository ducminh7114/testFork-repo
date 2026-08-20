#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	int n;
	int total;
	while (1) {
		printf("Nhap so a, b, n: \n");
		printf("Nhap so a: \n");
		scanf_s("%d", &a);
		printf("Nhap so b: \n");
		scanf_s("%d", &b);
		printf("Nhap so n: \n");
		scanf_s("%d", &n);
		if (n < a && n < b) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}

	for (int i = 0; i < n; i++) {
		total = 0;
		if (a % n == 0 && b % n != 0) {
			total += n;
		}
	}
	printf("Tong cac so nho hon n chia het cho a nhung khong chia het cho b la: %d", total);
	return 0;
}