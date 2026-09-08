#include <stdio.h>
#include <math.h>
int KiemTraChuSoToanChan(int n) {
	int temp;
	while (n >= 0) {
		temp = n % 10;
		if (temp % 2 == 0) {
		n = n / 10;
		}
		else {
			return 0;
		}
	}
	return 1;
}

int KiemTraTangDan(int n) {
	int a;
	int b;
	while (n > 0) {
		a = n % 10;
		b = (n / 10) % 10;
		if (b >= a) {
			return 0;
		}
		n = n / 10;
	}
	return 1;
}

void DemSoChanLe(int n) {
	int temp;
	int SoChan = 0;
	int DaySoChan[10];
	int SoLe = 0;
	int DaySoLe[10];

	while (n > 0) {
		temp = n % 10;
		if (temp % 2 == 0) {
			DaySoChan[SoChan] = temp;
			SoChan++;
		}
		else {
			DaySoLe[SoLe] = temp;
			SoLe++;
		}
		n = n / 10;
	}
	printf("So ban nhap co %d so chan va %d so le, bao gom: \n", SoChan, SoLe);
	printf("Cac so chan: \n");
	for (int i = 0; i < SoChan; i++) {
		printf("So le thu %d: %d\n", i + 1, DaySoChan[i]);
	}
	printf("Cac so le: \n");
	for (int i = 0; i < SoLe; i++) {
		printf("So le thu %d: %d\n", i + 1, DaySoLe[i]);
	}
}

int main() {
	int n;
	printf("Nhap so muon tra cuu: \n");
	while (1) {
		int status = scanf_s("%d", &n);
		if (status == 1) {
			break;
		}
		printf("Invalid value,pls try again.\n");
		while (getchar() != '\n');
	}
	int SoToanChan = KiemTraChuSoToanChan(n);
	if (SoToanChan == 1) {
		printf("So %d la so toan chan.\n", n);
	}
	else {
		printf("So %d khong phai la so toan chan.\n", n);
	}
	int ChuSoTangDan = KiemTraTangDan(n);
	if (ChuSoTangDan == 1) {
		printf("So %d la so co cac ki tu tang dan.\n", n);
	}
	else {
		printf("So %d la so khong co cac ki tu tang dan.\n", n);

	}
	DemSoChanLe(n);
}