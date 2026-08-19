#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int km;
	int first, second, third;
	int discount;
	printf("Nhap quang duong di duoc duoi dang km: ");
	scanf_s("%d", &km);
	if (km == 0) {
		printf("Tong so tien phai tra la: 0 VND");
		return 0;
	}
	if (km >= 1) {
		first = 1;
	}
	else {
		first = 0;
	}

	if (2 <= km && km <= 5) {
		second = km - 1;
	}
	else {
		second = 0;
	}

	if (km > 5) {
		third = km - 5;
	}
	else {
		third = 0;
	}

	if (km > 20) {
		discount = 0.1;

	}
	else {
		discount = 0;
	}
	int total = first * 15000 + second * 13500 + third * 11000;
	int discout_amount = total * discount;
	int final_amount = total - discout_amount;

	printf("Tong so tien phai tra la: %d VND", final_amount);
	return 0;
}