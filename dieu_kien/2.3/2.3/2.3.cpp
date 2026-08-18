#include <stdio.h>
#include <math.h>

int main() {
	int N;
	while (1) {
		printf("Hay nhap gia tri nguyen N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again\n");
		while (getchar() != '\n');
	}
	if (N % 2 == 0) {
		printf("N la so chan.\n");
	}
	else {
		printf("N la so le.\n");
	}
	return 0;
}