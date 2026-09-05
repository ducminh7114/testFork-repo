#include <stdio.h>
#include <math.h>

float DienTichHinhTron(float bankinh) {
	return pow(bankinh, 2) * 3.14;
}

float ChuViHinhTron(float banKinh) {
	return 2 * banKinh * 3.14;
}

float DienTichHinhVuong(int canh) {
	return pow(canh, 2);
}

float ChuViHinhVuong(int canh) {
	return canh * 4;
}

float DienTichHCN(int CD, int CR) {
	return CD * CR;
}

float ChuViHCN(int CD, int CR) {
	return (CD + CR) * 2;
}

void XuatKetQua(int hinhDang, float CV, float DT) {
	printf("Hinh dang ma ban chon la: %d\n", hinhDang);
	printf("Chu vi cua hinh ma ban chon la: %.2f\n", CV);
	printf("Dien tich cua hinh ma ban chon la: %.2f\n", DT);
}

int main() {
	int n;
	int V;
	int S;
	printf("Lua Chon hinh dang: \n");
	printf("1) Hinh tron: Nhap ban kinh. \n");
	printf("2) Hinh vuong: Nhap canh. \n");
	printf("3) Hinh chu nhat: Nhap chieu dai va chieu rong. \n");
	while (1) {
		scanf_s("%d", &n);
		if (n >= 1 && n <= 3) {
			break;
		} printf("Invalid number, pls try again.\n");
		while (getchar() != '\n');
	}

	switch (n) {
	case 1: 
		int banKinh;
		while (1) {
			printf("Nhap gia tri ban kinh cua hinh tron: ");
			scanf_s("%d", &banKinh);
			if (n >= 1 && n <= 3) {
				break;
			} printf("Invalid number, pls try again.\n");
			while (getchar() != '\n');
		}
		V = ChuViHinhTron(banKinh);
		S = DienTichHinhTron(banKinh);
		XuatKetQua(n, V, S);
		break;
	case 2:
		int canh;
		while (1) {
			printf("Nhap gia tri canh cua hinh vuong: ");
			scanf_s("%d", &canh);
			if (n >= 1 && n <= 3) {
				break;
			} printf("Invalid number, pls try again.\n");
			while (getchar() != '\n');
		}
		V = ChuViHinhVuong(canh);
		S = DienTichHinhVuong(canh);
		XuatKetQua(n, V, S);
		break;
	case 3:
		int CD,CR;
		while (1) {
			printf("Nhap gia tri chieu dai cua hinh chu nhat: ");
			scanf_s("%d", &CD);
			if (n >= 1 && n <= 3) {
				break;
			} printf("Invalid number, pls try again.\n");
			while (getchar() != '\n');
		}
		while (1) {
			printf("Nhap gia tri chieu rong cua hinh hinh chu nhar: ");
			scanf_s("%d", &CR);
			if (n >= 1 && n <= 3) {
				break;
			} printf("Invalid number, pls try again.\n");
			while (getchar() != '\n');
		}
		V = ChuViHCN(CD, CR);
		S = DienTichHCN(CD, CR);
		XuatKetQua(n, V, S);
		break;
	}
}