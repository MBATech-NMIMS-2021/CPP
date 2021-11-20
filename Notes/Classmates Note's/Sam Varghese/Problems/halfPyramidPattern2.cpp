// 1
// 121
// 12321
// 1234321

#include<iostream>

int main(void){

    int terms;

    std::cout << "\nKindly enter the number of terms: ";
    std::cin >> terms;

    for (int yCoordinate = 0; yCoordinate < terms; yCoordinate ++){

        std::cout << "\n";
        for (int xCoordinate = 1; xCoordinate <= yCoordinate + 1; xCoordinate++){

            std::cout << xCoordinate;
        }

        for (int xCoordinate1 = yCoordinate; xCoordinate1 >= 1; xCoordinate1 --){

            std::cout << xCoordinate1;
        }
    }
}