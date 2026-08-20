#include <stdio.h>
#include <math.h>

int main() {
	int N;
	int total1 = 0;
	int total2 = 0;
	int total3 = 0;
	int total4 = 0;
	while (1) {
		printf("Nhap so N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Invalid value, pls try again.\n");
		while (getchar() != '\n');

	}
	for (int i = 0; i <= N; i++) {
		if (i % 2 == 1) {
			total1 = total1 + i;
		}
	}
	printf("Tong cac so le den N la: %d\n", total1);

	for (int i = 0; i <= N; i++) {
		if (i % 2 == 0) {
			total2 = total2 + i;
		}
	}
	printf("Tong cac so chan den N la: %d\n", total2);

	for (int i = 0; i <= N; i++) {
		total3 = total3 + pow(i, 2);
	}
	printf("Tong binh phuong cac so den N la: %d\n", total3);


	for (int i = 0; i <= N; i++) {
		if (i % 2 == 0) {
			total4 = total4 + i;
		}
		else {
			total4 = total4 - i;
		}
	}
	printf("Tong cac so den N theo cau truc a-b+c-d+e+.. la: %d\n", total4);

	return 0;
}
