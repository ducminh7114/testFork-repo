#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	char dayPhanTu[50][50];
	printf("Nhap so luong phan tu muon hien thi: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Nhap day phan tu thu %d: ", i + 1);
		scanf_s("%99s", dayPhanTu[i], 50);
	}
	printf("\nDay co tong cong %d phan tu. \n", n);
	for (int i = 0; i < n; i++) {
		printf("Phan tu thu %d: %s\n", i, dayPhanTu[i]);
	}

	FILE *f;
	
	fopen_s(&f, "dayPhanTu.txt", "w");

	if (f == NULL) {
		printf("Khong the mo tap tin!\n");
			return 1;
	}
	fprintf(f, "Day co tong cong %d phan tu. \n", n);
	for (int i = 0; i < n; i++) {
		fprintf(f, " %s", dayPhanTu[i]);
	}
	printf("da tao file dayPhanTu.txt");
	fclose(f);
	return 0;
}