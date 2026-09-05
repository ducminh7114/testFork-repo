#include <stdio.h>
#include <math.h>

void XuatGiaTri(char a, int n) {
    printf("Bien %c co gia tri %d", a, n);
}

void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    printf("Nhap hai gia tri X va Y: ");
    while (1) {
        printf("Nhap gia tri X: ");
        int status = scanf_s("%d", &a);
        if (status == 1) {
            break;
        } printf("Invalid number, pls try again.\n");
        while (getchar() != '\n');
    }
    XuatGiaTri('X', a);

    while (1) {
        printf("Nhap gia tri X: ");
        int status = scanf_s("%d", &b);
        if (status == 1) {
            break;
        } printf("Invalid number, pls try again.\n");
        while (getchar() != '\n');
    }
    XuatGiaTri('Y', b);

    HoanVi(a, b);

    printf("X va Y sau khi hoan vi la: \n");
    XuatGiaTri('X', a);
    XuatGiaTri('Y', b);

}
