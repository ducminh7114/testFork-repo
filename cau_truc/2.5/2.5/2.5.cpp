#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char MaGiay[5];
	float CoGiay;
	int GioiTinh;
	int SoLuong;
	int DonGia;
}QuanLyThongTinGiay;

void NhapGiay(int* soLuong, QuanLyThongTinGiay quanLy[]) {
	printf("Nhap so luong giay muon nhap: \n");
	while (1) {
		int status = scanf_s("%d", soLuong);
		while (getchar() != '\n');

		if (status == 1) {
			break;

		} printf("Invalid number, pls try again\n");
		while (getchar() != '\n');
	}
	for (int i = 0; i < *soLuong; i++) {
		printf("Nhap thong tin mau giay: \n");
		printf("Nhap ma giay: ");
		gets_s(quanLy[i].MaGiay, 5);
		printf("Nhap co giay: ");
		scanf_s("%f", &quanLy[i].CoGiay);
		printf("Nhap gioi tinh: ");
		while (1) {
			scanf_s("%d", &quanLy[i].GioiTinh);
			while (getchar() != '\n');
			if (quanLy[i].GioiTinh == 1 || quanLy[i].GioiTinh == 0 || quanLy[i].GioiTinh == 2) {
				break;

			} printf("Invalid number, pls try again\n");
			while (getchar() != '\n');
		}
		printf("Nhap so luong: ");
		scanf_s("%d", &quanLy[i].SoLuong);
		printf("Nhap don gia: ");
		scanf_s("%d", &quanLy[i].DonGia);
		while (getchar() != '\n');
	}

	
}
void XuatGiay(int i, QuanLyThongTinGiay quanLy[]) {
		printf("\nThong tin giay %d: \n", i + 1);
		printf("Ma giay: %s\n", quanLy[i].MaGiay);
		printf("Co Giay: %.1f\n", quanLy[i].CoGiay);
		printf("Gioi tinh: %d\n", quanLy[i].GioiTinh);
		printf("So luong: %d\n", quanLy[i].SoLuong);
		printf("Don gia: %d\n", quanLy[i].DonGia);
}

void TimGiay(int* gioiTinh, float* kichThuoc, int SoLuong, QuanLyThongTinGiay quanLy[]) {
	int choice;
	printf("\nLua Chon dang tim kiem: \n");
	printf("1. Tim kiem bang kich thuoc: \n");
	printf("2. Tim kiem bang gioi tinh: \n");
	printf("3. Tim kiem bang ca hai lua chon tren: \n");
	printf("Nhap lua chon muon tim kiem (1, 2, 3): ");

	while (1) {
		scanf_s("%d", &choice);
		while (getchar() != '\n');
		if (choice == 1 || choice == 2 || choice == 3) {
			break;

		} printf("Invalid number, pls try again\n");
		while (getchar() != '\n');
	}

	switch (choice) {
	case 1:
		while (1) {
			printf("Nhap kich thuoc giay: ");
			int status = scanf_s("%f", kichThuoc);
			if (status == 1) {
				break;

			} printf("Invalid number, pls try again\n");
			while (getchar() != '\n');
		}

		for (int i = 0; i < SoLuong; i++) {
			if (quanLy[i].CoGiay == *kichThuoc) {
				XuatGiay(i, quanLy);
				}
			}
		break;
	case 2:
		while (1) {
			printf("Nhap gioi tinh: ");
			scanf_s("%d", gioiTinh);
			while (getchar() != '\n');
			if (*gioiTinh == 0 || *gioiTinh == 1 || *gioiTinh == 2) {
				break;

			} printf("Invalid number, pls try again\n");
			while (getchar() != '\n');
		}

		for (int i = 0; i < SoLuong; i++) {
			if (quanLy[i].GioiTinh == *gioiTinh) {
				XuatGiay(i, quanLy);
			}
		}
		break;
	case 3:
		while (1) {
			scanf_s("%d", gioiTinh);
			while (getchar() != '\n');
			if (*gioiTinh == 0 || *gioiTinh == 1 || *gioiTinh == 2) {
				break;

			} printf("Invalid number, pls try again\n");
			while (getchar() != '\n');
		}

		while (1) {
			printf("Nhap kich thuoc giay: ");
			int status = scanf_s("%f", kichThuoc);
			if (status == 1) {
				break;

			} printf("Invalid number, pls try again\n");
			while (getchar() != '\n');
		}
		for (int i = 0; i < SoLuong; i++) {
			if (quanLy[i].GioiTinh == *gioiTinh && quanLy[i].CoGiay == *kichThuoc) {
				XuatGiay(i, quanLy);
			}
		}
		break;
	default:
		printf("Khong co cac gia tri neu tren.\n");
	}
}
void MuaGiay(char* MaGiay, int* soLuong, int n, QuanLyThongTinGiay quanly[]) {
	printf("Nhap thong tin ma giay: ");
	gets_s(MaGiay, 5);
	int giaTien;
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(quanly[i].MaGiay, MaGiay) == 0) {
			XuatGiay(i, quanly);
			found = 1;
			
			printf("Nhap so luong giay muon mua: \n");
			scanf_s("%d", soLuong);
			if (*soLuong > quanly[i].SoLuong) {
				printf("Khong du so luong trong kho.\n");
				return;
			}
			
			giaTien = quanly[i].DonGia * *soLuong;
			printf("So tien can tra la: %d", giaTien);
			break;
		}
	}
	if (found == 0) {
		printf("Khong co ma hoac loai giay ban muon mua.\n");
		return;
	}
}

int main() {
	QuanLyThongTinGiay quanLy[50];
	int n;
	int gioiTinh;
	float kichThuoc;
	int soLuong;
	char MaGiay[5];
	NhapGiay(&n, quanLy);
	for (int i = 0; i < n; i++) {
		XuatGiay(i, quanLy);
	}
	TimGiay(&gioiTinh, &kichThuoc, n, quanLy);
	MuaGiay(MaGiay, &soLuong, n, quanLy);
	return 0;
}
