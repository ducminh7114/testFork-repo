#include <iostream> 
using namespace std;

int main() {
	string N;
	int count = 0;
	while (true) {
		std::cout << "Pls enter number N: \n";
		if (std::cin >> N) {
			if (std::cin.fail()) {
				continue;
			}
			break;
		}
		cin.clear();
		cin.ignore(10000, '\n');
		std::cout << "pls enter a number.\n";
	}

	while (N != 0) {
		N = N / 10;
		count = count + 1;
	}

	std::cout << "Total letter in the number " << N << " is: " << count << std::endl;
	return 0;
}