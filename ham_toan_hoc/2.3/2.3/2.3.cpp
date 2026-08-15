#include <stdio.h>
#include <math.h>

int main() {
	int radius;
	printf("Enter the radius of the circle: \n");
	scanf_s("%d", &radius);
	float parameter = radius * 2 * 3.14;
	float area = pow(radius, 2) * 3.14;
	printf("The parameter of the circle is: %.2f\n", parameter);
	printf("The area of the circle is: %.2f\n", area);
	return 0;
}