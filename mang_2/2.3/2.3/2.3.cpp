#include <stdio.h>
#include <math.h>

int TinhTong(int a,int b) {
	return a + b;
}

int TinhHieu(int a, int b) {
	return a - b;
}
int TinhTich(int a, int b) {
	return a * b;
}
float TinhThuong(int a, int b) {
	return a / b;
}

int main() {
	int a, b;

	printf("Nhap hai so a va b:\n");
	while (1) {
		printf("Nhap so a: ");
		int status = scanf_s("%d", &a);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong hop le, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	while (1) {
		printf("Nhap so b: ");
		int status = scanf_s("%d", &b);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong hop le, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	int Tong = TinhTong(a, b);
	int Hieu = TinhHieu(a, b);
	int Tich = TinhTich(a, b);
	float Thuong = TinhThuong(a, b);

	printf("Tong cua hai so a va b la: %d\n", Tong);
	printf("Hieu cua hai so a va b la: %d\n", Hieu);
	printf("Tich cua hai so a va b la: %d\n", Tich);
	printf("Thuong cua hai so a va b la: %.2f\n", Thuong);

	return 0;
}