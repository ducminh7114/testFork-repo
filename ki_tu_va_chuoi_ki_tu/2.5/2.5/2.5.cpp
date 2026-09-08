#include <stdio.h>
#include <string.h>
#include <ctype.h>

int KiemTraTonTai(char s1[], char s2[]) {
	if (strstr(s1, s2) != NULL) {
		return 1;
	} 
	return 0;
}

int main() {
	char s1[100];
	char s2[100];
	printf("Nhap hai chuoi ki tu s1 va s2:\n");
	printf("Nhap hai chuoi ki tu s1::\n");
	gets_s(s1, 100);
	printf("Nhap hai chuoi ki tu s2::\n");
	gets_s(s2, 100);
	if (strcmp(s1, s2) == 0) {
		printf("Hai chuoi co so ki tu bang nhau.\n");
		int KiemTra = KiemTraTonTai(s1, s2);
	}
	if (strcmp(s1, s2) < 0) {
		printf("chuoi s1 co so ki tu it hon chuoi s2.\n");
		int KiemTra = KiemTraTonTai(s2, s1);
	}
	if (strcmp(s1, s2) > 0) {
		printf("chuoi s1 co so ki tu nhieu hon chuoi s2\n");
		int KiemTra = KiemTraTonTai(s1, s2);
	}
	if (KiemTraTonTai(s1, s2) == 0) {
		printf("Khong co gia tri trung nhau.\n");
		return 0;
	}
	else {
		printf("Cac ki tu trung nhau giua hai chuoi la: \n");
		for (int i = 0; i < strlen(s1);i++) {
			for (int j = 0; j < strlen(s2);j++) {
				if (s1[i] == s2[j]) {
					printf("%c \n", s1[i]);
				}
			}
		}
	}
}