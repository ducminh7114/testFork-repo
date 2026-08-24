#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char userInput[100];
	char correctAnswer[100] = "a";
	int totalPoints = 0;

	char question[1][100] = { "What is the first letter of the alphabet? \n" };
	char options[1][100] = { "A) a\nB) b\nC) c\nD) d\n" };
	for (int i = 0; i < 1; i++)	{
		printf("%s", question[i]);
		printf("%s", options[i]);
		while (1) {
			printf("Enter your answer (A, B, C, or D): ");
			scanf_s("%s", userInput, (unsigned)_countof(userInput));
			if ("A" <= userInput && userInput <= "Z") {
				userInput[0] = tolower(userInput[0]); // Convert input to lowercase for comparison
			}
			if ("a" <= userInput && userInput <= "d") {
				break;
			}
			else {
				printf("Invalid input. Please enter A, B, C, or D.\n");
			}
		}
		while (1) {
			if (strcmp(userInput, correctAnswer) == 0) {
				printf("Correct!\n");
				totalPoints += 10;
				break;
			}
			else {
				printf("Incorrect. Please try again.\n");
				totalPoints -= 1;
				printf("Enter your answer (A, B, C, or D): ");
				while (1) {
					printf("Enter your answer (A, B, C, or D): ");
					scanf_s("%s", userInput, (unsigned)_countof(userInput));
					userInput[0] = tolower(userInput[0]); // Convert input to lowercase for comparison
					if ("a" <= userInput && userInput <= "d") {
						break;
					}
					else {
						printf("Invalid input. Please enter A, B, C, or D.\n");
					}
				}
			}
		}
	}
	printf("Total points: %d\n", totalPoints);
}