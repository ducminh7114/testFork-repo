#include <stdio.h>
#include <math.h>

int main() {
	int second;
	int remainingSecond;
	int minute;
	int hour;
	printf("Enter your second value: ");
	scanf_s("%d", &second);
	hour = second / 3600;
	remainingSecond = second - (hour * 3600);
	minute = remainingSecond / 60;
	remainingSecond = remainingSecond - (minute * 60);
	printf("The exact time of %d second is: %d hour, %d minute, %d second\n", second, hour, minute, remainingSecond);
	return 0;
}
