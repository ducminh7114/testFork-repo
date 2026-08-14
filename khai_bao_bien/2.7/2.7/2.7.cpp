#include <stdio.h>

int main()
{
	char ITEMNAME[50];
	int QUANTITY;
	int PRICE;
	printf("Enter the item name: ");
	scanf_s("%s", &ITEMNAME);
	printf("Enter the quantity: ");
	scanf_s("%d", &QUANTITY);
	printf("Enter the price: ");
	scanf_s("%d", &PRICE);
	int money = QUANTITY * PRICE;
	int VAT = money * 0.10;
	int total = money + VAT;
	printf("Item name: %s\n", ITEMNAME);
	printf("Quantity: %d\n", QUANTITY);
	printf("Total price: %d\n", total);
	return 0;
}
