#include <stdio.h>
#include <math.h>

int main() {
	int N;
	int x = 1;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1 && N >= 10) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}

	while (N > 10) {
		N = N / 10;
		x += 1;
	}
	printf("So N co %d chu so.\n", N, x);
}
