#include <stdio.h>

int main() {
    char MYNAME[100];
    int MYBIRTHYEAR;

    printf("Please input your name:\n");
    scanf("%s", MYNAME);

    printf("Please input your birth year:\n");
    scanf("%d", MYBIRTHYEAR);

    int AGE = 2026 - MYBIRTHYEAR;

    printf("Hello! My name is %s, I am %d years old.\n", MYNAME, AGE);

    return 0;
}