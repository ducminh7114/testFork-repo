#include <stdio.h>
#include <math.h>

int KiemTraSNT(int N){
	if (N < 2) {
		return 0;
	}
	for (int i = 2; i < N; i++) {
		if (N % i == 0) {
			return 0;
		}
	}
	return 1;
}

void LietKeSNT(int N) {
	for (int i = 2; i < N; i++) {
		if (KiemTraSNT(i) == 1) {
			printf("%d ", i);
		}
	}
}

int main() {
	int N;
	printf("Nhap he so can tim: \n");
	while (1) {
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		}
		printf("Gia tri khong phu hop, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	if (KiemTraSNT(N) == 0) {
		printf("%d khong phai la so nguyen to.\n", N);
	}
	else {
		printf("%d la so nguyen to.\n", N);
		printf("Cac so nguyen to nho hon %d la:\n", N);
		LietKeSNT(N);
	}
	return 0;
} 