#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char yourGuess[100];
	int count = 0;
	char password[100] = "9";
	
	printf("Enter your password ");
	scanf_s("%s", yourGuess, (unsigned)sizeof(yourGuess));
    while (count < 3) {
        if (strcmp(yourGuess, password) == 0) {
            printf("Login successful");
            break;
        }
        else {
            count++;
            if (count >= 3) {
                printf("Your account was locked\n");
                break;
            }
            printf("Login failed.\n ");
            printf("Enter your password ");
            scanf_s("%99s", yourGuess, (unsigned)sizeof(yourGuess));
        }
    }
    return 0;
}
