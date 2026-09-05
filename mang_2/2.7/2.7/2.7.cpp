#include <stdio.h>
#include <math.h>

const char* TinhCan(int namSinh) {
	int SoCuoi = namSinh % 10;
	switch (SoCuoi) {
	case 0:
		return "Canh";
	case 1:
		return "Tan";
	case 2:
		return "Nham";
	case 3:
		return "Quy";
	case 4:
		return "Giap";
	case 5:
		return "At";
	case 6:
		return "Binh";
	case 7:
		return "Dinh";
	case 8:
		return "Mau";
	case 9:
		return "Ki";
	}
	return "";
}

const char* TinhChi(int namSinh) {
	int SoDu = namSinh % 12;
	switch (SoDu) {
	case 0:
		return "Than";
	case 1:
		return "Dau";
	case 2:
		return "Tuat";
	case 3:
		return "Hoi";
	case 4:
		return "Ti";
	case 5:
		return "Suu";
	case 6:
		return "Dan";
	case 7:
		return "Meo";
	case 8:
		return "Thin";
	case 9:
		return "Ti";
	case 10:
		return "Ngo";
	case 11:
		return "Mui";
	}
	return "";
}

int main() {
	int NamSinh;
	while (1) {
		printf("Nhap nam: ");
		int status = scanf_s("%d", &NamSinh);
		if ( status == 1 && NamSinh > 0) {
			break;
		}
		printf("Invalid number, pls try agian.\n");
		while (getchar() != '\n');
		} 
	printf("%s %s", TinhCan(NamSinh), TinhChi(NamSinh));
	return 0;
}