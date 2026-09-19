#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	char CauHoi[100][10];
	int n;
	printf("Nhap so luong cau hoi muon nhap: \n");
	while (1){
		scanf_s("%d", &n);
		if (1 <= n <= 10) {
			break;
		}
		printf("So cau hoi khong phu hop, yeu cau nhap lai\n");
	}

	for(int i = 0; i< n; i++) {
