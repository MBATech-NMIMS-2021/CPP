// 1234
// 123
// 12
// 1

#include<iostream>

int main(void){

    int terms;
    std::cout << "\nKindly enter the number of terms: ";
    std::cin >> terms;

    for (int yCounter = 0; yCounter < terms; yCounter ++){

        std::cout << "\n";
        for (int xCounter = 1; xCounter <= terms - yCounter; xCounter++){

            std::cout << xCounter;
        }
    }
}