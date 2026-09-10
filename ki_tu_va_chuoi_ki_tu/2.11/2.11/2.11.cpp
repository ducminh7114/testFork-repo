#include <stdio.h>
#include <string.h>
#include <ctype.h>

void catChuoi(char s[], int n, int length) {
	char* viTriCat = strrchr(s, s[n - 1]);
	if (viTriCat != NULL) {
		strncpy_s(s, 100, viTriCat, length);
		s[length] = '\0';
	}
	printf("Chuoi ki tu sau khi cat la: \n");
	printf("%s", s);
}

int main() {
	char s[100];
	int n;
	int length;
	printf("Nhap chuoi ki tu: \n");
	gets_s(s, 100);
	printf("Nhap vi tri muon bat dau cat trong chuoi: ");
	while (1) {
		int status = scanf_s("%d", &n);
		if (status == 1) {
			break;
		}
		printf("Invalid number, pls try again.\n");
		while (getchar() != '\n');
	}
	printf("Nhap do dai ki tu muon cat: ");
	while (1) {
		int status = scanf_s("%d", &length);
		if (status == 1 && length <= strlen(s) && length >= 1) {
			break;
		}
		printf("Invalid number, pls try again.\n");
		while (getchar() != '\n');
	}
	catChuoi(s, n, length);
	return 0;
}