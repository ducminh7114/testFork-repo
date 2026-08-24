#include <stdio.h>

void hinh10(int n)
{
    char edge[100] = "";

    // Create one complete edge: ****
    for (int i = 0; i < n; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';
    }

    // Print n edges
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", edge);
    }
}

void hinh11(int n)
{
    char edge[100] = "";

    // Create top/bottom edge
    for (int i = 0; i < n; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            printf("%s\n", edge);
        }
        else
        {
            printf("*");

            for (int j = 0; j < n - 2; j++)
            {
                printf(" ");
            }

            printf("*\n");
        }
    }
}

void hinh12(int dai, int rong)
{
    char edge[100] = "";

    // Create one row
    for (int i = 0; i < dai; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';
    }

    for (int i = 0; i < rong; i++)
    {
        printf("%s\n", edge);
    }
}

void hinh13(int dai, int rong)
{
    char edge[100] = "";

    // Create top/bottom edge
    for (int i = 0; i < dai; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';
    }

    for (int i = 0; i < rong; i++)
    {
        if (i == 0 || i == rong - 1)
        {
            printf("%s\n", edge);
        }
        else
        {
            printf("*");

            for (int j = 0; j < dai - 2; j++)
            {
                printf(" ");
            }

            printf("*\n");
        }
    }
}

// Hình 14
// *
// **
// ***
// ****
void hinh14(int cao)
{
    char edge[100] = "";

    for (int i = 0; i < cao; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';

        printf("%s\n", edge);
    }
}

// Hình 15
//    *
//   **
//  ***
// ****
void hinh15(int cao)
{
    char edge[100] = "";

    for (int i = 0; i < cao; i++)
    {
        edge[i] = '*';
        edge[i + 1] = '\0';

        // Print spaces before *
        for (int j = 0; j < cao - i - 1; j++)
        {
            printf(" ");
        }

        printf("%s\n", edge);
    }
}

// Hình 16
// 1
// 1 2
// 1 2 3
// 1 2 3 4
void hinh16(int cao)
{
    for (int i = 1; i <= cao; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

// Hình 17
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void hinh17(int cao)
{
    for (int i = cao; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("10. Hinh vuong dac\n");
        printf("11. Hinh vuong rong\n");
        printf("12. Hinh chu nhat dac\n");
        printf("13. Hinh chu nhat rong\n");
        printf("14. Tam giac vuong trai\n");
        printf("15. Tam giac vuong phai\n");
        printf("16. Tam giac so tang\n");
        printf("17. Tam giac so giam\n");
        printf("0. Thoat\n");
        printf("===========================\n");

        printf("Nhap lua chon: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 10:
        {
            int canh;
            printf("Nhap canh: ");
            scanf_s("%d", &canh);

            hinh10(canh);
            break;
        }

        case 11:
        {
            int canh;
            printf("Nhap canh: ");
            scanf_s("%d", &canh);

            hinh11(canh);
            break;
        }

        case 12:
        {
            int dai, rong;

            printf("Nhap chieu dai: ");
            scanf_s("%d", &dai);

            printf("Nhap chieu rong: ");
            scanf_s("%d", &rong);

            hinh12(dai, rong);
            break;
        }

        case 13:
        {
            int dai, rong;

            printf("Nhap chieu dai: ");
            scanf_s("%d", &dai);

            printf("Nhap chieu rong: ");
            scanf_s("%d", &rong);

            hinh13(dai, rong);
            break;
        }

        case 14:
        {
            int cao;
            printf("Nhap chieu cao: ");
            scanf_s("%d", &cao);

            hinh14(cao);
            break;
        }

        case 15:
        {
            int cao;
            printf("Nhap chieu cao: ");
            scanf_s("%d", &cao);

            hinh15(cao);
            break;
        }

        case 16:
        {
            int cao;
            printf("Nhap chieu cao: ");
            scanf_s("%d", &cao);

            hinh16(cao);
            break;
        }

        case 17:
        {
            int cao;
            printf("Nhap chieu cao: ");
            scanf_s("%d", &cao);

            hinh17(cao);
            break;
        }

        case 0:
            printf("Ket thuc!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}