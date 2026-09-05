#include <stdio.h>
#include <math.h>

int TongSo(int N) {
	int TongSo = 0;
	for (int i = 0; i <= N; i++) {
		TongSo += i;
	}
	return TongSo;
}

int TongHieuXenKe(int N) {
	int total = 0;
	for (int i = 0; i <= N;i++) {
		if (i % 2 == 1) {
			total += i;
		}
		else {
			total -= i;
		}
	}
	return total;
}

int main() {
	int N;
	while (1) {
		printf("Nhap gia tri cua N: ");
		int status = scanf_s("%d", &N);
		if (status == 1) {
			break;
		} 
		printf("Gia tri khong phu hop, yeu cau nhap lai. \n");
		while (getchar() != '\n');
	}

	int total1 = TongSo(N);
	int total2 = TongHieuXenKe(N);

	printf("Gia tri cua tong tu 1 den %d la: %d\n", N, total1);
	printf("Gia tri cua tong hieu xen ke tu 1 den %d la: %d\n", N, total2);
	return 0;
}