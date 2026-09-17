#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char MaTaiKhoan[13];
	char TenTaiKhan[50];
	int Sodu;
}quanLyNganHang;

void TaoTaiKhoan(int n, quanLyNganHang arr[]) {
	printf("Nhap thong tin tai khoan: \n");
	while (getchar() != '\n');
	while (1) {
		printf("Nhap ma tai khoan: ");
		gets_s(arr[n].MaTaiKhoan, 13);
		if (strlen(arr[n].MaTaiKhoan) == 12) {
			break;
		}
		printf("Invalid value, pls try again.\n");
	}
	printf("Nhap ten tai khoan: ");
	gets_s(arr[n].TenTaiKhan, 50);
	printf("Nhap so du: ");
	scanf_s("%d", &arr[n].Sodu);

}

int TraCuuTaiKhoan(int n,char MaCanTim[13], quanLyNganHang arr[]) {
	printf("\nNhap ma tai khoan muon tim: ");
	while (getchar() != '\n');
	while (1) {
		gets_s(MaCanTim, 13);
		if (strlen(MaCanTim) == 12) {
			break;
		}
		printf("Invalid value, pls try again.\n");
	}
	for (int i = 0; i <= n; i++) {
		if (strcmp(arr[i].MaTaiKhoan, MaCanTim) == 0){
			return i;
		}
	}
	return -1;
}

int TimTaiKhoan(int n, quanLyNganHang arr[]) {
	char MaCanTim[13];
	int ketQua = TraCuuTaiKhoan(n, MaCanTim, arr);

	if (ketQua != -1) {
		printf("\nThong tin tai khoan: \n");
		printf("Ma tai khoan: %s\n", arr[ketQua].MaTaiKhoan);
		printf("Ten tai khoan: %s\n", arr[ketQua].TenTaiKhan);
		printf("So du: %d\n", arr[ketQua].Sodu);
	}
	else {
		printf("Tai khoan khong tim thay.\n");
	}
	return ketQua;
}


void ChuyenKhoan(int n, quanLyNganHang arr[]) {
	int tempA, tempB;
	printf("\nNhap thong tin tai khoan muon chuyen: \n");
	tempA = TimTaiKhoan(n, arr);
	printf("Nhap thong tin tai khoan nhan: ");
	tempB = TimTaiKhoan(n, arr);
	int soTienChuyen;
	if (tempA != -1 && tempB != -1) {
		printf("Nhap so tien muon chuyen: \n");
		while (1){
			scanf_s("%d", &soTienChuyen);
			if (soTienChuyen <= arr[tempA].Sodu) {
				break;
			} printf("So du khong du, yeu cau nhap so tien bang hoac it hon so tien tai khoan dang co.\n");
			while (getchar() != '\n');
		}
		arr[tempA].Sodu -= soTienChuyen;
		arr[tempB].Sodu += soTienChuyen;
	}
}

int main() {
	int choice;
	int n = 0;
	quanLyNganHang quanLy[10];
	while (1){
		printf("\nChon cac lua chon sau: \n");
		printf("1. Dang Ki tai khoan. \n");
		printf("2. Xem thong tin so du tai khoan. \n");
		printf("3. Chuyen Khoan. \n");
		printf("4. Thoat\n");
		printf("Nhap lua chon cua ban (1,2,3): ");
		while (1) {
			scanf_s("%d", &choice);
			if (choice == 1 || choice == 2 || choice == 3) {
				break;
			}
			printf("\nKhong co lua chon ke tren. Yeu cau nhap lai.\n");
			while (getchar() != '\n');
		}

		if (choice == 1) {

			if (n >= 10) {
				printf("Mang tai khoan da day!\n");
			}
			else {
				TaoTaiKhoan(n, quanLy);
				n++;
			}

		}
		else if (choice == 2) {

			if (n == 0) {
				printf("Chua co tai khoan nao!\n");
			}
			else {
				TimTaiKhoan(n, quanLy);
			}

		}
		else if (choice == 3) {

			if (n < 2) {
				printf("Can it nhat 2 tai khoan de chuyen khoan!\n");
			}
			else {
				ChuyenKhoan(n, quanLy);
			}

		}
		else if (choice == 4) {

			printf("Thoat chuong trinh.\n");
			break;

		}
		else {

			printf("Khong co lua chon nay. Vui long nhap lai!\n");
		}
	}
	return 0;
}