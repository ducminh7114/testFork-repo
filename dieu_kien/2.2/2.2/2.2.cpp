#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int year;
	while (1) {
		printf("Nhap so nam: ");
		int status = scanf_s("%d", &year);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again. \n");
		while (getchar() != '\n');
	}
	printf("\n");

	if (year % 4 == 0 && year % 100 != 0) {
		printf("Nam %d la nam nhuan.\n \n", year);
	}
	else {
		printf("Nam %d khong phai la nam nhuan.\n \n", year);
	}
	return 0;
}