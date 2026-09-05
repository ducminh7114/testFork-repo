#include <stdio.h>
#include <math.h>

void BangCuuChuong(int* n) {
	printf("Nhap he so ban muon: \n");
	while (1) {
		int status = scanf_s("%d", n);
		if (status == 1) {
			break;
		} printf("He so khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	int tich;
	printf("Bang cuu chuong cua he so %d la: \n", *n);
	for (int i = 1; i <= 10; i++) {
		tich = *n * i;
		printf("%d * %d = %d \n", *n, i, tich);
	}
}
	int main() {
		int n;
		BangCuuChuong(&n);
		return 0;

	}
 