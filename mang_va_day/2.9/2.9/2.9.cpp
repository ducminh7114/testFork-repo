#include <stdio.h>

int main() {
    int a[] = {7, 4, 8, 3, 2, 6, 9};
    int n = 7;

    int b[100];
    int m = 0;

    // Lấy các số chẵn
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[m] = a[i];
            m++;
        }
    }

    // Sắp xếp tăng dần
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // Đưa các số chẵn đã sắp xếp trở lại mảng a
    m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = b[m];
            m++;
        }
    }

    // In mảng
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}