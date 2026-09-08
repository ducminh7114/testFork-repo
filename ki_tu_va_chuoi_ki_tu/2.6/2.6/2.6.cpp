#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	int soTu = 1;
	char s[100];
	printf("Nhap chuoi ki tu: \n");
	gets_s(s, 100);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			soTu += 1;
		}
	}
	printf("Chuoi co tong cong %d tu.", soTu);
	return 0;
}