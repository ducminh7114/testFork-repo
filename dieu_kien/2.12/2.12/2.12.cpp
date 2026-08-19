#include <stdio.h>
#include <math.h>

int main() {
	int month;
	while (1) {
		printf("Enter month number (1-12): ");
		scanf_s("%d", &month);
		if (month < 1 || month > 12) {
			printf("Invalid month number. Please try again.\n");
			continue;
		}
		break;
	}
	switch(month) {
	case 1:
		printf("English: January\n");
		break;
	case 2:
		printf("English: February\n");
		break;
	case 3:
		printf("English: March\n");
		break;
	case 4:
		printf("English: April\n");
		break;
	case 5:
		printf("English: May\n");
		break;
	case 6:
		printf("English: June\n");
		break;
	case 7:
		printf("English: July\n");
		break;
	case 8:
		printf("English: August\n");
		break;
	case 9:
		printf("English: September\n");
		break;
	case 10:
		printf("English: October\n");
		break;
	case 11:
		printf("English: November\n");
		break;
	case 12:
		printf("English: December\n");
		break;
	}

	// this is 2.13 exercise
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("Number of days: 31\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("Number of days: 30\n");
		break;
	case 2:
		printf("Is it a leap year (1 or 0): ");
		while (1) {
			int leap;
			scanf_s("%d", &leap);
			if (leap == 1) {
				printf("Number of days: 29\n");
				break;
			} else if (leap == 0) {
				printf("Number of days: 28\n");
				break;
			} else {
				printf("Invalid input. Please enter 1 for leap year or 0 for non-leap year: ");
			}
		}
		break;
	}
	return 0;
}