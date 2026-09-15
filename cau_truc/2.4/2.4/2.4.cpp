#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char MaBaiHat[6];
	char TenBaiHat[100];
	int luotNghe;
}bangXepHangBaiHat;


int main() {
	int n;
	bangXepHangBaiHat bangXepHang[100];
	printf("Nhap so bai hat co trong danh sach: ");
	while (1) {
		int status = scanf_s("%d", &n);
		while (getchar() != '\n');
		if (status == 1) {
			break;
		} 
		printf("Invalid number, pls try again.\n");
		while (getchar() != '\n');
	}

	for (int i = 0; i < n; i++) {
		printf("\nNhap ma bai hat: ");
		gets_s(bangXepHang[i].MaBaiHat, 100);
		printf("Nhap ten bai hat: ");
		gets_s(bangXepHang[i].TenBaiHat, 100);
		printf("Nhap so luot nghe: ");
		scanf_s("%d", &bangXepHang[i].luotNghe);

		while (getchar() != '\n');
	}

	printf("\nDanh sach bai hat da nhap: \n");
	for (int i = 0; i < n; i++) {
		printf("Bai hat %d: \n", i + 1);
		printf("Ma bai hat: %s\n", bangXepHang[i].MaBaiHat);
		printf("Ten bai hat: %s\n", bangXepHang[i].TenBaiHat);
		printf("So luot nghe: %d\n", bangXepHang[i].luotNghe);
	}
	
	bangXepHangBaiHat tempBaiHat;

	printf("\nBai hat co luot nghe cao nhat la: \n");
	for (int i = 0; i < n; i++) {
		if (bangXepHang[i].luotNghe < bangXepHang[i + 1].luotNghe) {
			tempBaiHat = bangXepHang[i];
			bangXepHang[i] = bangXepHang[i + 1];
			bangXepHang[i + 1] = bangXepHang[i];
		}
	}

	printf("\nBai hat duoc nghe nhieu nhat la: \n");
	printf("Ma bai hat: %s\n", bangXepHang[0].MaBaiHat);
	printf("Ten bai hat: %s\n", bangXepHang[0].TenBaiHat);
	printf("So luot nghe: %d\n", bangXepHang[0].luotNghe);

	printf("\nDanh sach bai hat da nhap sau khi sap xep theo thu hang la: \n");
	for (int i = 1; i < n; i++) {
		printf("Bai hat xep thu %d: \n", i + 1);
		printf("Ma bai hat: %s\n", bangXepHang[i].MaBaiHat);
		printf("Ten bai hat: %s\n", bangXepHang[i].TenBaiHat);
		printf("So luot nghe: %d\n", bangXepHang[i].luotNghe);
	}

	return 0;
}