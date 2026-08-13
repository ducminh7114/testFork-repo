// 2.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int N;
    int total = 0;
    while (true) {
        std::cout << " Pls input your number N: \n";
        if (std::cin >> N) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a number.\n";
            continue;
            }
            break;
        }
    for (int i = 0; i < N; i++) {
        total = total + i;
        i++;
    }
    std::cout << " the total from 0 to " << N << " is: " << total << std::endl;
    return 0;
}


