#include <stdio.h>
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
	printf("Cac phan tu co trong mang la: \n");
	for (int i = 0; i < soLuong; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void HoanVi(int* a, int* b) {
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

void TangDan(int soLuong, int arr[]) {
	for (int i = 0; i < soLuong - 1; i++) {
		for (int j = 0; j < soLuong - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				HoanVi(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void ThemPhanTu(int* choice, int* soLuong, int arr[]) {
	if (*soLuong >= 100) {
		printf("Mang da day, khong the them.\n");
		return;
	}

	while (1) {
		printf("Nhap lua chon: \n1. Them phan tu\n2. Thoat\n");
		scanf_s("%d", choice);
		if (*choice == 1 || *choice == 2) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	switch (*choice) {
	case 1:
	{
		printf("Nhap gia tri phan tu muon them: ");
		int x;
		printf("Nhap lua chon: \n1. Them phan tu\n2. Thoat\n");
		int status = scanf_s("%d", &x);

		int i = *soLuong - 1;
		while (i >= 0 && arr[i] > x)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = x;
		(*soLuong)++;
		break;
	}
	case 2:
		printf("Thoat chuong trinh.\n ");
		break;
	default:
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
	}
}

int main() {
	int arr[100];
	int soLuong;
	int choice;
	NhapMang(&soLuong, arr);
	XuatMang(soLuong, arr);
	TangDan(soLuong, arr);
	printf("\nMang sau khi sap xep:\n");
	XuatMang(soLuong, arr);
	ThemPhanTu(&choice, &soLuong, arr);
	printf("\nMang sau khi them phan tu:\n");
	XuatMang(soLuong, arr);
	return 0;
}