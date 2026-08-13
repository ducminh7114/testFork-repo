#include <stdio.h>

int main() {
    char MYNAME[100];
    int MYBIRTHYEAR;

    printf("Please input your name:\n");
    scanf_s("%49s", MYNAME, (unsigned int)sizeof(MYNAME));

    printf("Please input your birth year:\n");
    scanf_s("%d", &MYBIRTHYEAR);

    int AGE = 2026 - MYBIRTHYEAR;

    printf("Hello! My name is %s, I am %d years old.\n", MYNAME, AGE);

    return 0;
}