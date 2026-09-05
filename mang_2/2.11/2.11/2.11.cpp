#include <stdio.h>
#include <math.h>

int GiaiPhuongTrinh(int A, int B, int C, float &x1, float &x2) {
	if (A == 0) {
		if (B == 0 && C == 0) {
			return 0;
		}
		if (B == 0 && C != 0) {
			return -1;
		}
		if (B != 0 && C != 0) {
			x1 = -C / B;
			x1 = x2;
			return 1;

		}
	}

	int delta = pow(B, 2) - 4 * A * C;

	if (delta < 0) {
		return -1;
	}
	if (delta == 0) {
		x1 = -B / (2 * A);
		x1 = x2;
	}
	if (delta > 0) {
		x1 = (-B + sqrt(delta)) / (2 * A);
		x2 = (-B - sqrt(delta)) / (2 * A);

		return 2;
	}
}

int main() {
	double a, b, c;
	float x1, x2;

	printf("Nhap a: ");
	scanf_s("%lf", &a);

	printf("Nhap b: ");
	scanf_s("%lf", &b);

	printf("Nhap c: ");
	scanf_s("%lf", &c);

	int ketQua = GiaiPhuongTrinh(a, b, c, x1, x2);

	if (ketQua == -1) {
		printf("Phuong trinh vo nghiem.\n");
	}
	else if (ketQua == 0) {
		printf("Phuong trinh vo so nghiem.\n");
	}
	else if (ketQua == 1) {
		printf("Phuong trinh co 1 nghiem: x = %.2lf\n", x1);
	}
	else if (ketQua == 2) {
		printf("Phuong trinh co 2 nghiem phan biet:\n");
		printf("x1 = %.2lf\n", x1);
		printf("x2 = %.2lf\n", x2);
	}

	return 0;
}