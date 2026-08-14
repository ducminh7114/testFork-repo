#include <stdio.h>

int main() {
	int day;
	int month;
	int year;
	printf("Enter day: ");
	scanf_s("%d", &day);
	printf("Enter month: ");
	scanf_s("%d", &month);
	printf("Enter year: ");
	scanf_s("%d", &year);
	if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
		printf("Invalid date\n");
		return 0;
	}
	printf("The date is: %02d/%02d/%04d\n", day, month, year);
}