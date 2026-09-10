#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];

    printf("Nhap day so:\n");

    while (1) {
        gets_s(s, 100);

        int valid = 1;

        for (int i = 0; s[i] != '\0'; i++) {
            if (!isdigit((unsigned char)s[i])) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            break;
        }

        printf("Invalid number, pls try again.\n");
    }

    int n = strlen(s);

    for (int i = n - 3; i > 0; i -= 3) {

        for (int j = n; j > i; j--) {
            s[j] = s[j - 1];
        }

        s[i] = ',';
        n++;
    }
    s[n++] = '\0';

    printf("Ket qua sau khi them dau phay la:\n");
    printf("%s\n", s);

    return 0;
}
