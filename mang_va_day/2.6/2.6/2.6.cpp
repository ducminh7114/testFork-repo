#include <stdio.h>
#include <math.h>

int main() {
	int arr[6] = { 2,3,4,5 };
	int a = 4;
	arr[a] = 6;

	printf("Mang sau khi thay doi lan 1 la: \n");
	for (int i = 0; i < a; i++) {
		printf("%d, ", arr[i]);
	}
	a++;

	for (int j = a; j > a; j--) {
		arr[j] = arr[j - 1];
	}
	arr[0] = 1;

	printf("Mang sau thay doi lan 2 la: \n");
	for (int i = 0; i < a; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}