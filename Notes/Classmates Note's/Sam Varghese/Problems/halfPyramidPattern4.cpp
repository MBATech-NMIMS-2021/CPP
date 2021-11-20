// 4321
// 321
// 21
// 1

#include<iostream>

int main(void){

    int terms;
    std::cout << "\nKindly enter the number of terms: ";
    std::cin >> terms;

    for (int yCoordinate = 0; yCoordinate < terms; yCoordinate ++){

        std::cout << "\n";
        for (int xCoordinate = terms - yCoordinate; xCoordinate >= 1; xCoordinate --){

            std::cout << xCoordinate;
        }
    }
}

