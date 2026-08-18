#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int choice;
	char name[100] = " ";
	int unitPrice;
	int deposit;
	float time_per_item;
	while (1) {
		printf("Enter your choice (1-3): ");
		scanf_s("%d", &choice);
		if (choice >=1 && choice <= 3) {
			break;
		}

		printf("invalid value, pls try again.\n");
		while (getchar() != '\n');
	}
	switch (choice) {
	case 1:
		strcpy_s(name, sizeof(name), "bang cassette");
		unitPrice = 1000;
		deposit = 10000;
		time_per_item = 0.5;
		break;
	case 2:
		strcpy_s(name, sizeof(name), "bang tu video");
		unitPrice = 5000;
		deposit = 50000;
		time_per_item = 3;
		break;
	case 3:
		strcpy_s(name, sizeof(name), "bang VCD");
		unitPrice = 10000;
		deposit = 100000;
		time_per_item = 5;
		break;
	}
	printf("You choose %d.\n", choice);
	printf("Your item is: \n");
	printf("Name: %s \n", name);
	printf("Unit price: %d dong.\n", unitPrice);
	printf("Deposit: %d dong.\n", deposit);
	printf("Time per item: %.2f days/item.\n", time_per_item);
	printf(" \n");

	int quantity;
	 while (1){
		printf("Pls enter your item quantity: ");
		int status = scanf_s("%d", &quantity);
		if (status == 1) {
			break;
		}

		printf("invalid value, pls try again.\n");
		while (getchar() != '\n');
	}
	int rent_price = quantity * unitPrice;
	int total_price = deposit + rent_price;
	float total_time = quantity * time_per_item;

	printf("The total price of your order is: %d dong\n", total_price);
	printf("The total rent time of your order is: %.2f days\n", total_time);

}