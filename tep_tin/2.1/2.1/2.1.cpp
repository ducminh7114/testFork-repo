#include <stdio.h>
#include <string.h>
#include <ctype.h>

void NhapNgay(int* NgayThucTap[]) {
	while (1) {
		printf("\nNhap ngay bat dau thuc tap: ");
		printf("\nNhap nam thuc tap: ");
		int status = scanf_s("%d", NgayThucTap[0]);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai: ");
		while (getchar() != '\n');
	}

	while (1) {

		printf("\nNhap thang thuc tap: ");
		scanf_s("%d", NgayThucTap[1]);
		if (*NgayThucTap[1] >= 1 && *NgayThucTap[1] <= 12) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai: ");
		while (getchar() != '\n');
	}


	int maxNgay = 0;
	while (1) {
		printf("\nNhap ngay thuc tap: ");
		scanf_s("%d", NgayThucTap[2]);
		if (*NgayThucTap[2] < 1) {
			printf("Ngay khong hop le, yeu cau nhap lai!\n");
			while (getchar() != '\n');
			continue;
		}
		switch (*NgayThucTap[1]) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			maxNgay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			maxNgay = 30;
			break;
		case 2:
			if ((*NgayThucTap[0] % 400 == 0) ||
				(*NgayThucTap[0] % 4 == 0 &&
					*NgayThucTap[0] % 100 != 0)) {
				maxNgay = 29;
			}
			else {
				maxNgay = 28;
			}
			break;
		}

		if (*NgayThucTap[2] >= 1 &&
			*NgayThucTap[2] <= maxNgay) {
			break;
		}

		printf("Gia tri khong phu hop, yeu cau nhap lai: ");
		while (getchar() != '\n');
	}
}

int main() {
	char TenCongTi[100];
	printf("Nhap ten cong ti thuc tap: ");
	gets_s(TenCongTi, 50);

	printf("Ten cong ti: %s", TenCongTi);

	char TenThucTapSinh[100];
	printf("\nNhap ten thuc tap sinh: ");
	gets_s(TenThucTapSinh, 50);

	for (int i = 0; i < strlen(TenThucTapSinh); i++) {
		TenThucTapSinh[i] = toupper(TenThucTapSinh[i]);
	}

	
	printf("\nTen thuc tap sinh: %s", TenThucTapSinh);

	char TenTruong[100];
	printf("\nNhap ten truong dang hoc: ");
	gets_s(TenTruong, 50);


	printf("\nTen Truong: %s", TenTruong);

	char ChuyenNganh[100];
	printf("\nNhap chuyen nganh dang theo hoc: ");
	gets_s(ChuyenNganh, 50);


	printf("\nChuyen nganh: %s", ChuyenNganh);

	int nam, thang, ngay;

	int* ThucTap[] = { &nam, &thang, &ngay };

	NhapNgay(ThucTap);

	printf("\nNgay thuc tap: %02d/%02d/%d\n", ngay, thang, nam);

	int thoiGian;
	printf("\nNhap thoi gian thuc tap: ");
	scanf_s("%d", &thoiGian);

	printf("\nThoi gian thuc tap: %d", thoiGian);

	int namViet, thangViet, ngayViet;

	int* ngayVietDon[] = { &namViet, &thangViet, &ngayViet };

	NhapNgay(ngayVietDon);

	printf("\nNgay viet don: %02d/%02d/%d\n", ngayViet, thangViet, namViet);
	
	printf("\t\t\tCONG HOA XA HOI CHU NGHIA VIET NAM \n");
	printf("\t\t\tDoc lap - Tu do - Hanh Phuc\n");
	printf("\t\t\t\t\t======\n");
	printf("\t\t\t\tDON XIN THUC TAP \n");
	printf("Kinh gui: %s\n", TenCongTi);
	printf("Toi ten la: %s\n", TenThucTapSinh);
	printf("Hien toi dang la sinh vien cua truong: DH Hoa Sen, chuyen nganh: %s\n", ChuyenNganh);
	printf("Kinh xin quy co quan cho toi duoc thuc tap tai cong ty trong thoi gian %d thang, bat dau tu ngay %d/%d/%d\n", thoiGian, ngay, thang, nam);
	printf("Trong qua trinh thuc tap toi xin cam doan se thuc hien dung noi quy cong ty.\n");
	printf("\nToi xin chan thanh cam on. \n");
	printf("TPHCM, ngay %d thang %d nam %d  \n", ngayViet, thangViet, namViet);

	printf("\n%s", TenThucTapSinh);

	FILE *f;
	fopen_s(&f ,"text.txt", "w");

	if (f == NULL) {
		printf("Khong the tao tap tin!\n");
		return 1;
	}

	fprintf(f,"\t\t\tCONG HOA XA HOI CHU NGHIA VIET NAM \n");
	fprintf(f, "\t\t\tDoc lap - Tu do - Hanh Phuc\n");
	fprintf(f, "\t\t\t\t\t======\n");
	fprintf(f, "\t\t\t\tDON XIN THUC TAP \n");
	fprintf(f, "Kinh gui: %s\n", TenCongTi);
	fprintf(f, "Toi ten la: %s\n", TenThucTapSinh);
	fprintf(f, "Hien toi dang la sinh vien cua truong: DH Hoa Sen, chuyen nganh: %s\n", ChuyenNganh);
	fprintf(f, "Kinh xin quy co quan cho toi duoc thuc tap tai cong ty trong thoi gian %d thang, bat dau tu ngay %d/%d/%d\n", thoiGian, ngay, thang, nam);
	fprintf(f, "Trong qua trinh thuc tap toi xin cam doan se thuc hien dung noi quy cong ty.\n");
	fprintf(f, "\nToi xin chan thanh cam on. \n");
	fprintf(f, "TPHCM, ngay %d thang %d nam %d  \n", ngayViet, thangViet, namViet);

	fprintf(f, "\n%s", TenThucTapSinh);

	printf("\nDa tao file text.txt.");
	fclose(f);
	return 0;
}
