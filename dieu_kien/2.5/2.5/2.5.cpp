#include <stdio.h>
#include <math.h> 
#include <string.h>

int main() {
	char kyTu;
	while (1) {
		printf("Hay dien ky tu: ");
		int status = scanf_s("%c", &kyTu, 1);
		if (status == 1 && ((kyTu >= 'A' && kyTu <= 'Z') ||
			(kyTu >= 'a' && kyTu <= 'z')))
			 {
			break;
		}
		printf("Invalid value, pls try again.\n \n");
		while (getchar() != '\n');
	}

	if (kyTu >= 'A' && kyTu <= 'Z') {
		printf("Ky tu la chu in hoa.");
	}
	else if (kyTu >= 'a' && kyTu <= 'z') {
		printf("Ky tu la chu thuong.");
	}
	else {
		printf("Ky tu khong thuoc nhom nao");
	}
	return 0;
}
