#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("Nhap chuoi ki tu thu nhat: \n");
	scanf_s("%s", s, 100);
	printf("Chuoi ki tu khi duoc viet in hoa la: \n");
	for (int i = 0; i < strlen(s); i++) {
		s[i] = toupper(s[i]);
		printf("%c", s[i]);
	}
	printf("\n");
	printf("Nhap chuoi ki tu thu hai: \n");
	scanf_s("%s", s, 100);
	printf("Chuoi ki tu khi duoc viet thuong toan bo la: \n");
	for (int i = 0; i < strlen(s); i++) {
		s[i] = tolower(s[i]);
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}