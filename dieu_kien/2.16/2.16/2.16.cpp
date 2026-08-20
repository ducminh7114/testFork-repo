#include <stdio.h>
#include <math.h>

int main() {
	char x;
	printf("Nhap ky tu: ");
	scanf_s("%c", &x);
	switch (x) {
	case 'u':
	case 'e':
	case 'o':
	case 'a':
	case 'i':
	case 'U':
	case 'E':
	case 'O':
	case 'A':
	case 'I':
		printf("Nguyen am");
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("Ky so");
		break;
	default:
		if ('a' <= x <= 'z' || 'A' <= x <= 'Z') {
			printf("Chu cai");
		}
		else {
			printf("Ky tu dac biet.");
		}
		break;
	}
	return 0;
}