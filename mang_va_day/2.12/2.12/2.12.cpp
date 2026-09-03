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
	printf("Cac phan tu co trong mang la:\n");
	for (int i = 0; i < soLuong; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void XoaPhanTu(int* n, int* soLuong, int arr[]) {
	for (int i = *n; i < *soLuong - 1; i++) {
		arr[i] = arr[i + 1];
	}

	(*soLuong)--;
}

void KiemTra(int *soLuong, int arr[]) {
	bool chiaHet = 0;
	int n;
	printf("Nhap vi tri muon kiem tra: ");
	while (1) {
		scanf_s("%d", &n);
		if (n >= 0 && n <= *soLuong) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	int m = n - 1;
	if (arr[m] % 4 == 0) {
		chiaHet = 1;
		printf("Gia tri cua phan tu thu %d chia het cho 4.\n", n);
		XoaPhanTu(&m, soLuong, arr);
	}
	else {
		printf("Gia tri cua phan tu thu %d khong chia het cho 4.\n", n);
	}
}

int main() {
	int soLuong;
	int arr[100];
	int n;
	NhapMang(&soLuong, arr);
	XuatMang(soLuong, arr);
	KiemTra(&soLuong, arr);
	printf("mang sau khi loai bo so chia het cho 4 la:\n");
	XuatMang(soLuong, arr);
	return 0;
}

