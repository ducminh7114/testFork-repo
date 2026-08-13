#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int N;
	while (true) {
		std::cout << "pls input your N: \n";
		if (std::cin >> N) { 
			if (std::cin.fail()) {
				continue;
			}
			break;
		}
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Pls enter an number.\n";
	}
	while (i < N) {
		if (N % i == 0) {
			cout << "Divisor of " << N << " is: " << i << std::endl;
		}
		i++;
	}
	return 0;
}