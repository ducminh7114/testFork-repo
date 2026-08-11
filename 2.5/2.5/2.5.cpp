// 2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    std::cout << "Solving equation x = ax + b.\n";
    while (true) {
        std::cout << " Pls input your number a: \n";
        if (std::cin >> a) {
            if (std::cin.fail()) {
                std::cout << "The number is invalid, pls try again" << std::endl;
                continue;
            }
            break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a number.\n";
    }

    while (true) {
        std::cout << " Pls input your number b: \n";
        if (std::cin >> b) {
            if (std::cin.fail()) {
                std::cout << "The number is invalid, pls try again" << std::endl;
                continue;
            }
            break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a number.\n";
    }

    if (a == 0) {
        if (b == 0) {
            std::cout << " This equation has infinity number of solutions.\n";
            return 0;
        }
        else {
            std::cout << " This equation has no solution.\n";
            return 0;
        }
    }

    float x = -b / (float)a;
    std::cout << "Result of equation ax + b = 0 is: " << x << std::endl;
    return 0;
}

