#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int workMonth;
	int salaryFactor;
	printf("Nhap tham nien cong ac cua ban:");
	scanf_s("%d", &workMonth);

	if (workMonth < 12) {
		salaryFactor = 1.92;
	}
	else if (workMonth >= 12 && workMonth < 36) {
		salaryFactor = 2.34;
	}
	else if (workMonth >= 36 && workMonth < 60) {
		salaryFactor = 3;
	}
	else if (workMonth >= 60) {
		salaryFactor = 4.5;
	}
	float Salary = 650000 * salaryFactor;
	printf("Luong co ban cua ban la: %.2f\n", Salary);
	return 0;
}