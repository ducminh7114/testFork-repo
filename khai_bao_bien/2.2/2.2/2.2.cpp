#include<stdio.h>

int main() {
	int a;
	int b;
	printf("hay nhap hai so a va b: \n");
	printf("hay nhap so a: \n");
	scanf_s("%d", &a);
	printf("hay nhap so b: \n");
	scanf_s("%d", &b);
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	int thuong = a / b;
	printf("tong hai so la: %d\n", tong);
	printf("hieu hai so la: %d\n", hieu);
	printf("tich hai so la: %d\n", tich);
	printf("thuong hai so la: %d\n", thuong);
	return 0;
}
