#include <stdio.h>
#include <math.h>

int main() {
	int N;
	int soChuSo = 0;
	int soDao = 0;
	int chuSo;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1 && N >= 10) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}
	int temp1 = N;
	while (temp1 > 0) {
		chuSo = temp1 % 10;
		soDao = soDao * 10 + chuSo;
		temp1 = temp1 / 10;
	}


	printf("So dao nguoc cua so %d la: %d", N, soDao);

	return 0;
}