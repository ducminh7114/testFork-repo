#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


typedef struct {
	char maSoSV[6];
	char hoTen[50];
	char lop[6];
	int diemToan;
	int diemAnhVan;
	int diemTinHoc;
	int diemTrungBinh;
	char XepLoai[20];
}thongTinSV;

int main() {
	thongTinSV danhSach[100];
	int n;
	printf("Nhap so luong sinh vien muon nhap: ");
	scanf_s("%d", &n);
	while (getchar() != '\n');
	for (int i = 0; i < n; i++) {
		printf("Nhap ma so sinh vien: ");
		gets_s(danhSach[i].maSoSV, 6);
		printf("Nhap ho va ten: ");
		gets_s(danhSach[i].hoTen, 50);
		printf("Nhap lop: ");
		gets_s(danhSach[i].lop, 6);
		printf("Nhap diem toan: ");
		scanf_s("%d", &danhSach[i].diemToan);
		printf("Nhap diem anh van: ");
		scanf_s("%d", &danhSach[i].diemAnhVan);
		printf("Nhap diem tin hoc: ");
		scanf_s("%d", &danhSach[i].diemTinHoc);
		while (getchar() != '\n');
		int DTB;
		DTB = danhSach[i].diemTrungBinh = (danhSach[i].diemToan + danhSach[i].diemAnhVan + danhSach[i].diemTinHoc) / 3;
		if (DTB >= 8.0) {
			strcpy(danhSach[i].XepLoai, "gioi");
		}
		if (6.5 <= DTB < 8.0) {
			strcpy(danhSach[i].XepLoai, "Kha");
		}
		if (5.0 <= DTB < 6.5) {
			strcpy(danhSach[i].XepLoai, "TB");

		}

	}

}