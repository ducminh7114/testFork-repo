#include <stdio.h>
#include <math.h>

int main() {
	int amount;
	int choice;
	int donGia;
		
		printf("Vui long nhap luong tien can doi: ");
		scanf_s("%d", &amount);	
		printf("Vui long nhap menh gia can doi: ");
		scanf_s("%d", &choice);
	switch (choice) {
	case 1:
		printf("Ban chon USD.\n");
		printf("Don gia cua 1 USD = 21080 VND\n");
		donGia = 21080;
		break;
	case 2:
		printf("Ban chon EUR.\n");
		printf("Don gia cua 1 EUR = 28276 VND\n");
		donGia = 28276;
		break;
	case 3:
		printf("Ban chon AUD.\n");
		printf("Don gia cua 1 AUD = 19151 VND\n");
		donGia = 19151;
		break;
	case 4:
		printf("Ban chon HKD.\n");
		printf("Don gia cua 1 HKD = 2679 VND\n");
		donGia = 2679;
		break;
	case 5:
		printf("Ban chon SGD.\n");
		printf("Don gia cua 1 SGD = 16624 VND\n");
		donGia = 21080;
		break;
	default:
		printf("Ban da nhap sai, vui long nhap lai.");
		break;
	}
	int total = amount * donGia;
	printf("Luong tien sau khi doi la: %d VND", total);

}