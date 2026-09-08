#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("nhap ten muon viet tat: \n");
	gets_s(s, 100);
	char tenVietTat[100];
	int count = 0;
		tenVietTat[count] = s[0];
		count++;
	for (int i = 0; i <= strlen(s); i++) {
		if (s[i] == ' ') {
			tenVietTat[count] = s[i + 1];
			count++;
		}
	}
	printf("Ten viet tat dua theo ten duoc nhap la: \n");
	for (int i = 0; i < count; i++) {
		printf("%c", tenVietTat[i]);
	}

	return 0;
}