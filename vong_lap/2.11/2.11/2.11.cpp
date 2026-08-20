#include <stdio.h>
#include <math.h>

int main() {
	int a, b;

	printf("Nhap so a, b: \n");
	printf("Nhap so a: \n");
	scanf_s("%d", &a);
	printf("Nhap so b: \n");
	scanf_s("%d", &b);
	int ketqua;
	while (a = b) {
		if (a < b) {
			b = b - a;
			ketqua = b;
		}
		else if (a > b) {
			a = a - b;
			ketqua = a;
		}
		else if (a = 0 || b = 0) {
			a = abs(a - b);
			ketqua = a;
			break;
		}

	}

}
