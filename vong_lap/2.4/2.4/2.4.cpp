#include <stdio.h>
#include <math.h>

int main() {
	int N;
	float S5 = 0;
	float S6 = 0;
	float S7 = 0;
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
		S5 =+ (1.0 / i);
	}
	printf("Tong cua S5 la: %.2f\n", S5);

	for (int i = 1; i <= N; i++) {
		S6 =+ (1.0 / (2*i));
	}
	printf("Tong cua S6 la: %.2f\n", S6);

	for (int i = 1; i <= N; i++) {
		S7 =+ (1.0 / ((2 * i) + 1));
	}
	printf("Tong cua S7 la: %.2f\n", S7);
	return 0;
}
