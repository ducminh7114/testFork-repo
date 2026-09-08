#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	int soChuCai = 0;
	int soChuSo = 0;
	int soKhoangTrong = 0;
	printf("Nhap chuoi ki tu: \n");
	gets_s(s);
	int sokiTu = strlen(s);
	printf("So ki tu trong chuoi la: %d", sokiTu);
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			soChuCai += 1;
		} if (isdigit(s[i])) {
			soChuSo += 1;
		}
		if (isspace(s[i])) {
			soKhoangTrong += 1;
		}
	}
	printf("So luong cac chu cai trong chuoi la: %d\n", soChuCai);
	printf("So luong cac chu so trong chuoi la: %d\n", soChuSo);
	printf("So luong cac khoang trang trong chuoi la: %d\n", soKhoangTrong);
	return 0;
}