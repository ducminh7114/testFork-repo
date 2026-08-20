#include <stdio.h>
#include <math.h>

int main() {
	int N;
	int toanChan = 1;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1 && N >= 10) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}

	int temp = N;

	while (N > 0) {
		int chuSo = temp % 10;
		if (chuSo % 2 != 0) {
			toanChan = 0;
			break;
		}
		temp = temp / 10;
	}

	if (toanChan == 0) {
		printf("So N khong phai so toan chan.\n");
	}
	else {
		printf("So N la so toan chan.\n");

	}
	return 0;
}