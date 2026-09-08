#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s1[100];
	char s2[100];
	printf("nhap hai chuoi ki tu s1 va s2: \n");
	printf("nhap chuoi ki tu s1: \n");
	gets_s(s1, 100);
	printf("nhap chuoi ki tu s2: \n");
	gets_s(s2, 100);
	if (strcmp(s1, s2) == 0) {
		printf("Chuoi s1 dai bang chuoi s2.\n");
	}
	if (strcmp(s1, s2) < 0) {
		printf("Chuoi s1 dai hon chuoi s2.\n");
	}
	if (strcmp(s1, s2) > 0) {
		printf("Chuoi s1 ngan hon chuoi s2.\n");
	}
	if (strstr(s1, s2) != NULL) {
		printf("Co chuoi s2 trong chuoi s1.\n");
	}
	else {
		printf("Khong co chuoi s2 ben trong chuoi s1.\n");
	}
	strcat_s(s1, s2);
	printf("Hai chuoi sau khi noi voi nhau: \n");
	printf("%s", s1);
}