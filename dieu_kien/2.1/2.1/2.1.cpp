#include<stdio.h>
#include<string.h>

int main() {
	printf("--------------------------------------\n");
	printf("\tHIEN THUC PHAT BIEU\n");
	printf("--------------------------------------\n");
	int waterTemp;
	while (1){
		printf("\n");
		printf("--------------------------------------\n");
		printf("Phat bieu 1:\n \n");
		printf("Dien nhiet do cua nuoc: \n");
		int status = scanf_s("%d", &waterTemp);
		if (status == 1) {
			break;
		}

		printf("gia tri khong phu hop, hay thu lai.\n \n");
		while (getchar() != '\n');
	}
	if (waterTemp >= 100) {
		printf("nuoc o nhiet do 100oC tro len, nuoc se soi.\n");
		printf("--------------------------------------\n");

	}
	else {
		printf("nuoc o duoi nhiet do 100oC, nuoc se khong soi.\n");
		printf("--------------------------------------\n");
	}

	int currentSaving;
	while (1) {
		printf("\n");
		printf("--------------------------------------\n");
		printf("Phat bieu 2:\n \n");
		printf("Dien so tien tiet kiem: \n");
		int status = scanf_s("%d", &currentSaving);
		if (status == 1) {
			break;
		}

		printf("gia tri khong phu hop, hay thu lai.\n \n");
		while (getchar() != '\n');
	}
	if (currentSaving >= 40000000) {
		printf("Hay mua se Airblade\n");
		printf("--------------------------------------\n");

	}
	else {
		printf("Khong mua se Airblade\n");
		printf("--------------------------------------\n");
	}

	char decision;
	printf("\n");
	printf("--------------------------------------\n");
	printf("Phat bieu 3:\n \n");
	while (1) {
		printf("--------------------------------------\n");
		printf("Hom nay co phai la thu Bay khong (1/0) (1 = co, 2 = khong): \n");
		int status = scanf_s("%d", &decision);
		if (status == 1 && (decision == 1 || decision == 0)) {
			break;
		}

		printf("gia tri khong phu hop, hay thu lai.\n \n");
		while (getchar() != '\n');
	}

	if (decision == 1) {
		printf("Khong can den truong\n");
		printf("--------------------------------------\n");

	}
	else {
		while (1) {
			printf("--------------------------------------\n");
			printf("Hom nay co phai la thu chu nhat khong (1/0) (1 = co, 2 = khong): \n");
			int status = scanf_s("%d", &decision);
			if (status == 1 && (decision == 1 || decision == 0)) {
				break;
			}

			printf("gia tri khong phu hop, hay thu lai.\n \n");
			while (getchar() != '\n');
		}

		if (decision == 1) {
			printf("Khong can den truong\n");
			printf("--------------------------------------\n");

		}
		else {
			while (1) {
				printf("--------------------------------------\n");
				printf("Hom nay co phai la ngay nghi khong (1/0) (1 = co, 2 = khong): \n");
				int status = scanf_s("%d", &decision);
				if (status == 1 && (decision == 1 || decision == 0)) {
					break;
				}

				printf("gia tri khong phu hop, hay thu lai.\n \n");
				while (getchar() != '\n');
			}

			if (decision == 1) {
				printf("Khong can den truong\n");
				printf("--------------------------------------\n");

			}
			else {
				printf("Can den truong\n");
				printf("--------------------------------------\n");
			}
		}
	}

	int absentDay;
	int lateDay;
	while (1) {
		printf("\n");
		printf("--------------------------------------\n");
		printf("Phat bieu 4:\n \n");
		printf("Dien so buoi nghi hoc: \n");
		int status = scanf_s("%d", &absentDay);
		if (status == 1) {
			break;
		}

		printf("gia tri khong phu hop, hay thu lai.\n \n");
		while (getchar() != '\n');
	}

	while (1) {
		printf("\n");
		printf("--------------------------------------\n");
		printf("Phat bieu 4:\n \n");
		printf("Dien so buoi muon hoc: \n");
		int status = scanf_s("%d", &lateDay);
		if (status == 1) {
			break;
		}

		printf("gia tri khong phu hop, hay thu lai.\n \n");
		while (getchar() != '\n');
	}

	if (absentDay < 4) {
		printf("Ban khong bi cam thi.\n");
		printf("--------------------------------------\n");

	}
	else if (absentDay >= 2 && lateDay >=4) {
		printf("Ban da bi cam thi.\n");
		printf("--------------------------------------\n");
	}
	else {
		printf("Ban da bi cam thi.\n");
		printf("--------------------------------------\n");
	}

	return 0;

}