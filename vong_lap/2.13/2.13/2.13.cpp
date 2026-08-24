#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	printf("Nhap hai so dau va cuoi cua day so: \n");
	while (1){
		printf("Nhap so dau:");
		int status = scanf_s("%d", &a);
		if (status != 1) {
			printf("Vui long nhap so nguyen!\n");
			while (getchar() != '\n'); // Xóa bộ đệm đầu vào
			continue;
		}
	}

	while (1){
		printf("Nhap so cuoi:");
		int status = scanf_s("%d", &b);
		if (status != 1) {
			printf("Vui long nhap so nguyen!\n");
			while (getchar() != '\n'); // Xóa bộ đệm đầu vào
			continue;
		}
	}

	int total = 0;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 1) {
			total += i;
		}
	}
	printf("Tong cac so le trong day tu %d den %d la: %d\n", a, b, total);
	return 0;
}