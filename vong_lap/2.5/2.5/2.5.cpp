#include <stdio.h>
#include <math.h>

int main() {
	int N;
	float S9 = 0;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}
	for (int i = 1; i <= N; i++) {
		float S8 = 1;
		for (int j = 1; j <= i; j++) {
			S8 = S8* j;
		}
		printf("Giai thua cua %d la: %f\n", i, S8);
		S9 += S8;
	}

	printf("Tong cac giai thua tu 1 den %d la: %f\n", N, S9);
	return 0;
}
