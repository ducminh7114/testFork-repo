#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char TuaDe[100];
	char tacGia[50];
	int soTrang;
	int giaTien;
}quanlySach;

int main() {
	int n;
	quanlySach danhSach[50] = {0};
	printf("Nhap thong tin so luong sach muon luu tru: \n");
	while (1) {
		int status = scanf_s("%d", &n);
		if (status == 1 && n > 0 && n <= 50) {
			while (getchar() != '\n');
			break;
		}

		printf("So luong sach khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	for (int i = 0; i < n; i++) {
		printf("Nhap thong tin cuon sach %d: \n", i + 1);
		printf("Nhap tua de sach: ");
		gets_s(danhSach[i].TuaDe, 100);
		printf("Nhap ten tac gia: ");
		gets_s(danhSach[i].tacGia, 50);
		printf("Nhap so trang: ");
		scanf_s("%d", &danhSach[i].soTrang);
		printf("Nhap giaTien: ");
		scanf_s("%d", &danhSach[i].giaTien);

		while (getchar() != '\n');
	}

	int soTrangSach;
	printf("Nhap so trang sach cua cuon sach can tim: ");
	scanf_s("%d", &soTrangSach);
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (danhSach[i].soTrang >= soTrangSach) {
			printf("Tua de: %s\n", danhSach[i].TuaDe);
			printf("Tac gia: %s\n", danhSach[i].tacGia);
			printf("Tua de: %d\n", danhSach[i].soTrang);
			printf("Tua de: %d\n", danhSach[i].giaTien);
			found = 1;
		}
	}
	if (!found) {
		printf("Khong tim thay cuon sach!\n");
	}

	int giaTien;
	printf("Nhap gia tien cua cuon sach can tim: ");
	scanf_s("%d", &giaTien);
	found = 0;
	for (int i = 0; i < n; i++) {
		if (danhSach[i].soTrang <= giaTien) {
			printf("Tua de: %s\n", danhSach[i].TuaDe);
			printf("Tac gia: %s\n", danhSach[i].tacGia);
			printf("Tua de: %d\n", danhSach[i].soTrang);
			printf("Tua de: %d\n", danhSach[i].giaTien);
			found = 1;
		}
	}
	if (!found) {
		printf("Khong tim thay cuon sach!\n");
	}
	return 0;
}