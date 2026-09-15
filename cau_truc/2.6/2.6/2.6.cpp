#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char TenHangHoa[50];
	char MaHang[6];
	int SoLuong;
	int DonGia;
}quanLyThucPham;

void NhapThucPham(int* n, quanLyThucPham quanLy[]) {
	printf("Nhap so luong hang hoa.\n");
	while (1) {
		int status	= scanf_s("%d", n);
		while (getchar() != '\n');
		if (status == 1) {
			break;
		}
		printf("Invalid value , pls try again.\n");
		while (getchar() != '\n');
	}
}

void XuatThucPham(int n, quanLyThucPham quanLy[]) {
	printf("\t%s\t%s\t%d\t%d", quanLy[n].TenHangHoa, quanLy[n].MaHang, quanLy[n].SoLuong, quanLy[n].DonGia);
}

void TimSanPham(char* MaHang, int n, quanLyThucPham quanLy) {
}