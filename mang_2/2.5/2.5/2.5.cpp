#include <stdio.h>
#include <math.h>

int NhapSoNguyen() {
	int N;
	while (1) {
		printf("Nhap so nguyen duong: \n");
		int status = scanf_s("%d", &N);
		if (status == 1 && N > 0) {
			break;

		}
		printf("So khong phu hop, yeu cau nhap lai so nguyen duong.\n");
		while (getchar() != '\n');
	}
	return N;
}

int GiaiThua(int N) {
	int total = 1;
	for (int i = 1; i <= N; i++) {
		total *= i;

	}
	return total;
}

int main() {
	int A;
	int B;
	int C;
	A = NhapSoNguyen();
	B = NhapSoNguyen();
	C = NhapSoNguyen();

	int giaiThuaA = GiaiThua(A);
	int giaiThuaB = GiaiThua(B);
	int giaiThuaC = GiaiThua(C);

	int S = giaiThuaA + giaiThuaB + giaiThuaC;

	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("Tong giai thua: %d", S);
}