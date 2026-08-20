#include <stdio.h>
#include <math.h>

int main() {
	int N;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}
	for (int i = 1; i <= 10; i++) {
		int result = N * i;
		printf("%d * %d = %d\n", N, i, result);
	}
}