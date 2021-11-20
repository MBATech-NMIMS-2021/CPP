// *
// **
// ***
// ****

#include<iostream>

int main(void){

    int terms;
    std::cout << "\nKindly enter the number of terms: ";
    std::cin >> terms;

    for (int yCoordinate = 0; yCoordinate < terms; yCoordinate++){

        std::cout << "\n";
        for (int xCoordinate = 0; xCoordinate < yCoordinate + 1; xCoordinate ++){

            std::cout << "*";
        }
    }
}