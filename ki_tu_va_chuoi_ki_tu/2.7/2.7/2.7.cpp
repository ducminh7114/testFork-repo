#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	int soChuCai = 0;
	char s[100];
	char tuMuonTim;
	printf("Nhap chuoi ki tu: \n");
	gets_s(s, 100);
	printf("Nhap ki tu muon tim.\n");
	scanf_s("%c", &tuMuonTim);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == tuMuonTim) {
			soChuCai += 1;
		}
	}
	printf("Chuoi co tong cong %d tu.", soTu);
	return 0;
}