#include <stdio.h>
#include <math.h>

int TinhBinhPhuong(int so) {
	return pow(so, 2);
}
float CanBacHai(int so) {
		return sqrt(so);
}
int main() {
		int so1;
		int so2;
		printf("Nhap he so ban muon tinh binh phuong. \n");
		while (1) {
			int status = scanf_s("%d", &so1);
			if (status == 1) {
				break;
			}
			printf("He so khong phu hop, yeu cau nhap lai. \n");
			while (getchar() != '\n');
		}
		int ket_qua_1 = TinhBinhPhuong(so1);

		printf("Binh phuong cua %d la: %d\n", so1, ket_qua_1);

		printf("Nhap he so ban muon tinh can bac hai. \n");
		while (1) {
			int status = scanf_s("%d", &so2);
			if (status == 1) {
				break;
			}
			printf("He so khong phu hop, yeu cau nhap lai. \n");
			while (getchar() != '\n');
		}

		float ket_qua_2 = CanBacHai(so2);


		printf("Can bac hai cua %d la: %.2f\n", so2, ket_qua_2);
}