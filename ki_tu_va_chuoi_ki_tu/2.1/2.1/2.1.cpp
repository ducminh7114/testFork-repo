#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("Nhap chuoi ki tu: ");
	scanf_s("%s", s, 100);

	printf("Cac ki tu trong chuoi la: \n");
	for (int i = 0; i < strlen(s); i++) {
		printf("%c\n", s[i]);
	}

	printf("Cac ki tu trong chuoi duoc in nguoc la: \n");
	for (int i = strlen(s) - 1; i >= 0; i--) {
		printf("%c\n", s[i]);
	}
}