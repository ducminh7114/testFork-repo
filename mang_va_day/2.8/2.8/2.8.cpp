#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

void NhapMang(int* soLuong, int arr[]) {
	while (1) {
		printf("Nhap so luong phan tu trong mang: \n");
		int status = scanf_s("%d", soLuong);
		if (status == 1 && 1 <= *soLuong <= 100) {
			break;
		} 
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	for (int i = 0; i < *soLuong; i++) {
		printf("Nhap phan tu o vi tri %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}

void XuatMang(int soLuong, int arr[]) {
	printf("Cac phan tu co trong mang la:\n");
	for (int i = 0; i < soLuong; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void GiaTriLonNhat(int soLuong, int arr[], int* giaTriLonNhat, int* phanTuLonNhat) {
	*giaTriLonNhat = arr[0];
	*phanTuLonNhat = 0;
	for (int i = 0; i < soLuong; i++) {
		if (arr[i] > *giaTriLonNhat) {
			*giaTriLonNhat = arr[i];
			*phanTuLonNhat = i;
		}
	}
	printf("Phan tu lon nhat la %d voi gia tri la: %d \n", *phanTuLonNhat + 1, *giaTriLonNhat);
}

void GiaTriNhoNhat(int soLuong, int arr[], int* giaTriNhoNhat, int* phanTuNhoNhat) {
	*giaTriNhoNhat = arr[0];
	*phanTuNhoNhat = 0;
	for (int i = 0; i < soLuong; i++) {
		if (arr[i] < *giaTriNhoNhat) {
			*giaTriNhoNhat = arr[i];
			*phanTuNhoNhat = i;
		}
	}
	printf("Phan tu nho nhat la %d voi gia tri la: %d \n", *phanTuNhoNhat + 1, *giaTriNhoNhat);
}

void viTriDauTien(int soLuong, int arr[]) {
	int x;
	while (1) {
		printf("Nhap gia tri x: \n");
		int status = scanf_s("%d", &x);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	int found = 0;
	for (int i = 0; i < soLuong; i++) {
		if (arr[i] == x) {
			printf("Gia tri x duoc thay lan dau tai vi tri %d .\n", i + 1);
			found = 1;
			break;
		}
	}
	if (found == 0) {
		printf("Khong tim thay gia tri cua x.\n");
	}
}

void viTriCuoiCung(int soLuong, int arr[]) {
	int x;
	while (1) {
		printf("Nhap gia tri x: \n");
		int status = scanf_s("%d", &x);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	int found = 0;
	for (int i = soLuong - 1; i >= 0; i--) {
		if (arr[i] == x) {
			printf("Gia tri x duoc thay lan cuoi tai vi tri %d .\n", i + 1);
			found = 1;
			break;
		}
	}
	if (found == 0) {
		printf("Khong tim thay gia tri cua x.\n");
	}
}

void SoLanXuatHien(int soLuong, int arr[]) {
	int x;
	while (1) {
		printf("Nhap gia tri x: \n");
		int status = scanf_s("%d", &x);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	int found = 0;
	for (int i = 0; i < soLuong; i++) {
		if (arr[i] == x) {
			printf("Gia tri x duoc thay tai vi tri %d .\n", i + 1);
			found++;
		}
	}
	printf("x xuat hien tong cong %d lan", found);
}

int main() {
	int a;
	int b[100];
	int giaTriMax;
	int vitriMax;
	int giaTriMin;
	int vitriMin;
	NhapMang(&a, b);
	XuatMang(a, b);
	GiaTriLonNhat(a, b, &giaTriMax, &vitriMax);
	GiaTriNhoNhat(a, b, &giaTriMin, &vitriMin);
	viTriDauTien(a, b);
	viTriCuoiCung(a, b);
	SoLanXuatHien(a,b);
}





