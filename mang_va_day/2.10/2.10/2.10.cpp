#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int arr[100];
	printf("Nhap so cac phan tu trong mang: \n");
	while (1)
	{
		int status = scanf_s("%d", &n);
		if (status == 1 && n >= 1 && n <= 100
			) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	printf("Nhap cac phan tu co trong mang: \n");
	for (int i = 0; i < n; i++) {
		while (1)
		{
			printf("Nhap phan tu so %d: ", i + 1);
			int status = scanf_s("%d", &arr[i]);
			if (status == 1) {
				break;
			}
			printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
			while (getchar() != '\n');
		}
	}

	int arrB[100];
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			arrB[m] = arr[i];
			m++;
		}
	}

	float sum = 0;
	for (int i = 0; i < m; i++) {
		sum += arrB[i];
	}

	float average = (float)sum / m;
	printf("Trung binh cua tong cac so am trong mang la: %.2f\n", average);

	int arrC[100];
	m = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			arrC[m] = arr[i];
			m++;

		}
	}

	average = 0;

	sum = 0;
	for (int i = 0; i < m; i++) {
		sum += arrC[i];
	}

	average = (float)sum / m;

	printf("Trung binh cua tong cac so duong trong mang la: %.2f\n", average);
	return 0;

} 