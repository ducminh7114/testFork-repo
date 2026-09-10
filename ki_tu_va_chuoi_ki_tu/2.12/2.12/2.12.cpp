#include <stdio.h>
#include <string.h>
#include <ctype.h>

int EmailValidation(char s[]) {
	char* at = strchr(s, '@');
	
	if (at == NULL) {
		return 0;
	}

	if (strchr (at + 1, '@') != NULL) {
		return 0;
	}
	if (at == s || *(at + 1) == '\0') {
		return 0;
	}

	char* dot = strchr(at + 1, '.');

	if (dot == NULL) {
		return 0;
	}

	if (strchr(dot + 1, '@') != NULL) {
		return 0;
	}

	if (dot == s || *(dot + 1) == '\0') {
		return 0;
	}
	return 1;
}

int passwordValidation(char p[]) {
	int upper = 0;
	int lower = 0;
	int punct = 0;

	for (int i = 0; p[i] != '\0'; i++) {

		if (isupper((unsigned char)p[i])) {
			upper = 1;
		}

		if (islower((unsigned char)p[i])) {
			lower = 1;
		}

		if (ispunct((unsigned char)p[i])) {
			punct = 1;
		}
	}

	if (upper == 1 && lower == 1 && punct == 1) {
		return 1;
	}

	return 0;
}

int ConfirmValidation(char p[], char pValidate[]) {
		if (strcmp(p, pValidate) == 0 && strstr(pValidate, p)) {
			return 1;
		}
		return 0;
}
int main() {
	char s[100];
	char p[100];
	char pValidate[100];
	printf("Nhap tai khoan email cua ban: ");
	while (1) {
		gets_s(s, 100);
		if (EmailValidation(s)) {
			break;
		}
		printf("Tai khoan email khong hop le, yeu cau nhap lai.\n");
		while (getchar() != '\n');
 	}
	printf("\n");
	printf("Nhap mat khau cua ban: ");
	while (1) {
		gets_s(p, 100);
		if (passwordValidation(p)) {
			break;
		}
		printf("mat khau khong hop le, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}

	printf("\n");
	printf("Nhap lai mat khau cua ban: ");
	while (1) {
		gets_s(pValidate, 100);
		if (ConfirmValidation(p, pValidate)) {
			break;
		}
		printf("mat khau khong hop le, yeu cau nhap lai.\n");
		while (getchar() != '\n');
	}
	printf("Register successfully.");
	return 0;
}