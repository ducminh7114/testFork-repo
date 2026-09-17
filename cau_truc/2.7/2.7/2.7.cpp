#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int TuSo;
    int MauSo;
} phanTu;

phanTu RutGonPS(phanTu ps);


void Nhap2PhanSo(int n, phanTu phanTu[]) {
    printf("Nhap thong tin hai phan so:\n");

    for (int i = 0; i < n; i++) {

        while (1) {
            printf("Nhap tu so thu %d: ", i + 1);

            int status = scanf_s("%d", &phanTu[i].TuSo);

            if (status == 1) {
                while (getchar() != '\n');
                break;
            }

            printf("Invalid value, pls try again.\n");
            while (getchar() != '\n');
        }

        while (1) {
            printf("Nhap mau so thu %d: ", i + 1);

            int status = scanf_s("%d", &phanTu[i].MauSo);

            if (status == 1 && phanTu[i].MauSo != 0) {
                while (getchar() != '\n');
                break;
            }

            if (status == 1 && phanTu[i].MauSo == 0) {
                printf("Mau so khong duoc bang 0!\n");
            }
            else {
                printf("Invalid value, pls try again.\n");
            }

            while (getchar() != '\n');
        }
    }
}


void XuatPhanSo(int n, phanTu phanTu[]) {
    for (int i = 0; i < n; i++) {
        printf("Phan so thu %d la: %d/%d\n",
            i + 1,
            phanTu[i].TuSo,
            phanTu[i].MauSo);
    }
}


int UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}


phanTu RutGonPS(phanTu ps) {
    int ucln = UCLN(ps.TuSo, ps.MauSo);

    if (ucln != 0) {
        ps.TuSo /= ucln;
        ps.MauSo /= ucln;
    }

    if (ps.MauSo < 0) {
        ps.TuSo = -ps.TuSo;
        ps.MauSo = -ps.MauSo;
    }

    return ps;
}


phanTu Tong2PS(phanTu a, phanTu b) {
    phanTu tong;

    tong.TuSo = a.TuSo * b.MauSo
        + b.TuSo * a.MauSo;

    tong.MauSo = a.MauSo * b.MauSo;

    return RutGonPS(tong);
}


phanTu Hieu2PS(phanTu a, phanTu b) {
    phanTu hieu;

    hieu.TuSo = a.TuSo * b.MauSo
        - b.TuSo * a.MauSo;

    hieu.MauSo = a.MauSo * b.MauSo;

    return RutGonPS(hieu);
}


int KiemTraPS(phanTu a) {
    if (a.TuSo == 0) {
        return 0;
    }

    if ((a.TuSo > 0 && a.MauSo > 0) ||
        (a.TuSo < 0 && a.MauSo < 0)) {
        return 1;
    }

    return -1;
}


int main() {
    phanTu ds[2];

    Nhap2PhanSo(2, ds);
    XuatPhanSo(2, ds);

    phanTu tong = Tong2PS(ds[0], ds[1]);
    phanTu hieu = Hieu2PS(ds[0], ds[1]);

    printf("\nTong hai phan so: %d/%d",
        tong.TuSo, tong.MauSo);

    printf("\nHieu hai phan so: %d/%d",
        hieu.TuSo, hieu.MauSo);


    // Kiem tra tong am / duong
    int kqTong = KiemTraPS(tong);

    if (kqTong == 1)
        printf("\nTong la phan so duong.");
    else if (kqTong == -1)
        printf("\nTong la phan so am.");
    else
        printf("\nTong bang 0.");


    return 0;
}
