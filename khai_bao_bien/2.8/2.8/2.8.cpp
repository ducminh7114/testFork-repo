#include <stdio.h>

int main() {
	int hours, minutes, seconds;
	printf("Enter time in hours, minutes and seconds: ");
	scanf_s("%d %d %d", &hours, &minutes, &seconds);
	int total_seconds = hours * 3600 + minutes * 60 + seconds;
	printf("Total time in seconds: %d\n", total_seconds);
	return 0;
}