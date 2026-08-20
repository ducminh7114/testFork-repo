#include <stdio.h>
#include <math.h>

int main() {
	int N, x;
	float S10;
	float S11;

	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}
	while (1) {
		printf("Nhap so x: ");
		int status = scanf_s("%d", &x);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}

	for (int i = 1; i <= N; i++) {
		S10 = 0;
		S10 =+ x / N;
	}
	printf("Result of S10 is: %f\n", S10);

	for (int i = 1; i <= N; i++) {
		S11 = 0;
		int luyThua = 1;
		for (int j = 0; j <= i; j++) {
			luyThua = luyThua * j;
		}
		S11 =+ luyThua / (pow(x, i));
	}
	printf("Result of S11 is: %f\n", S11);
	return 0;
}
