#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a, b, c;
	printf("Dien diem toan cua ban: ");
	scanf_s("%d", &a);
	printf("Dien diem van cua ban: ");
	scanf_s("%d", &b);
	printf("Dien diem anh cua ban: ");
	scanf_s("%d", &c);
	float average = (a + b + c) / 3;
	if (average > 8.5) {
		printf("A");
	}
	else if (8.49 > average > 6.5) {
		printf("B");
	}
	else if (6.49 >= average > 5) {
		printf("C");
	}
	else if (3.5 <= average < 4.99) {
		printf("D");
	}
	else {
		printf("F");
		return 0;
	}
}