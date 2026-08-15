#include<stdio.h>
#include<math.h>

int main() {
	int plateNum;
	int total = 0;
	do {
		printf("Pls enter the plate number (only 4 digits):");
		scanf_s("%d", &plateNum);
	} while (plateNum < 1000 || plateNum > 9999);
		printf("invalid number, pls try again: \n");
		scanf_s("%d", &plateNum);


	for (int i = 0; i < 4; i++) {
		int digit = plateNum % 10;
		total = total + digit;
		plateNum = plateNum / 10;
	}
	printf("The total of all 4 digits of your plate number is: %d", total);
	return 0;
}
