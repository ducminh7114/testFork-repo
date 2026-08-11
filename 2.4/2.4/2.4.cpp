

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    std::cout << "Pls input 2 number a and b: \n";
    while (true) {
        std::cout << " Pls input your Listening score: \n";
        if (std::cin >> a) {
            if (std::cin.fail()) {
                std::cout << "Input out of range, try again" << std::endl;
                continue;
            }
            break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a number.\n";

    }
    while (true) {
        std::cout << " Pls input your Listening score: \n";
        if (std::cin >> b) {
            if (std::cin.fail()) {
                std::cout << "Input out of range, try again" << std::endl;
                continue;
            }
            break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a number.\n";

    }

    if (a > b) {
        std::cout << "a is bigger than b";       
    }
    else if (a < b) {
        std::cout << "a is smaller than b";
    }
    else {
        std::cout << "a is equal to b";
    }
    return 0;
}

