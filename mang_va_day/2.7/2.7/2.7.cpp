#include <stdio.h>
#include <math.h>

int arr[10] = { 1,2,3,4,5,6,7,8,9 };
int a = 9;

void AddValue(int value, int pos) {
	pos = pos - 1;
	for (int i = a; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = value;
	if (a < 10) {
		a++;
	}
}

void RemoveValue(int pos) {
	pos = pos - 1;
	for (int i = pos; i < a; i++) {
		arr[i] = arr[i + 1];
	}
	a--;
}

void OutputArray() {
	printf("ham bao gom cac phan tu: \n");
	for (int i = 0; i < a; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int x;
	int y;
	while (1){
		printf("Nhap vi tri muon them vao: ");
		scanf_s("%d", &y);
		if (1 <= y <= a) {
			break;
		}
		printf("Gia tri khong hop le, yeu cau nhap lai ");
		while (getchar() != '\n');
	}

	printf("Nhap phan tu muon them vao: ");
	scanf_s("%d", &x);
	AddValue(x,y);
	OutputArray();
	int z;

	while (1) {
		printf("\nNhap vi tri xoa vao: ");
		scanf_s("%d", &z);
		if (1 <= z <= a) {
			break;
		}
		printf("Gia tri khong hop le, yeu cau nhap lai ");
		while (getchar() != '\n');
	}
	RemoveValue(z);
	OutputArray();
	return 0;
}