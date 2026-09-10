#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    char name[100];
    char hovaTenDem[100];
    printf("Nhap ten nguoi dung: \n");
    gets_s(s, 100);
    char* dauCach = strrchr(s, ' ');
    if (dauCach != NULL) {
        strcpy_s(name, dauCach + 1);

        strncpy_s(hovaTenDem, s, dauCach - s);
        hovaTenDem[dauCach - s] = '\0';
        int j = 0;
        for (int i = 0;  hovaTenDem[i] != '\0'; i++) {
            if (hovaTenDem[i] != ' ') {
                hovaTenDem[j++] = hovaTenDem[i];
            }
        }
        hovaTenDem[j] = '\0';
    }

    printf("Truong hop 1: \n");
    printf("Input: %s\n", s);
    printf("Output: %s.%s@greenacademy.edu.vn\n", name, hovaTenDem);
    
    char hovaTenDemVietTat[100];
    int count = 0;
    hovaTenDemVietTat[count] = hovaTenDem[0];
    count++;
    for (int i = 0; i <= s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            hovaTenDemVietTat[count] = s[i + 1];
            count++;
        }
    }
    hovaTenDemVietTat[count++] = '\0';
    printf("Truong hop 2: \n");
    printf("Input: %s\n", s);
    printf("Output: %c.%s@greenacademy.edu.vn\n", name[0], hovaTenDemVietTat);
    return 0;
}
