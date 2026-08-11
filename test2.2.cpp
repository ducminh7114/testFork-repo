// test2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float ListeningScore;
    float ReadingScore;
    float SpeakingScore;
    float WritingScore;
    
    while (true) {
        std::cout << " Pls input your Listening score: \n";
        if (std::cin >> ListeningScore) {
            if (ListeningScore < 1.0 || ListeningScore > 9.0) {
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
        std::cout << " Pls input your Reading Score: \n";
        if (std::cin >> ReadingScore) {
            if (ReadingScore < 1.0 || ReadingScore > 9.0) {
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
        std::cout << " Pls input your Speaking score: \n";
        if (std::cin >> SpeakingScore) {
            if (SpeakingScore < 1.0 || SpeakingScore > 9.0) {
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
        std::cout << " Pls input your Writing score: \n";
        if (std::cin >> WritingScore) {
            if (WritingScore < 1.0 || WritingScore > 9.0) {
                std::cout << "Input out of range, try again" << std::endl;
                continue;
            }
            break;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a number.\n";

    }
    float averageScore;
    averageScore = (WritingScore + SpeakingScore + ReadingScore + ListeningScore) / 4;
    std::cout << "Your Ielts average score is: " << averageScore;
    return 0;
}
