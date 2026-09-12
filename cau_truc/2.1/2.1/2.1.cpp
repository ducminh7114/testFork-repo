#include <stdio.h>
#include <string.h> 

typedef struct {
	char Ma[5];
	char hoVaTen[50];
	char chucVu[50];
	int thamNienCongTac;
	int soNgayPhep;
}nhanVien;

int main() {
	nhanVien nhanVien[5];
	nhanVien[0] = {"DI01", "Nguyen Kim Long", "Giam Doc", 47, 17};
	nhanVien[1] = {"AC05", "Dau Thi Duyen", "Ke toan", 47, 25};
	nhanVien[2] = {"HR03", "Tran Ha Lan", "Nhan su", 22, 7};
	nhanVien[3] = { "TR02", "Tran Ngoc Thoa", "Giao Vu", 13, 9 };
	nhanVien[4] = { "IT04", "Tran Ngoc Dang", "IT", 4, 2 };

	printf("\t Ma \t Ho va ten \t\t Chuc vu \t\t Tham nien \t\t So ngay phep\n");
	for (int i = 0; i < 5; i++) {
		printf("\t %s \t %s\t\t %s \t\t %d \t\t %d\n", nhanVien[i].Ma, nhanVien[i].hoVaTen, nhanVien[i].chucVu, nhanVien[i].thamNienCongTac, nhanVien[i].soNgayPhep);
	}
	return 0;
}