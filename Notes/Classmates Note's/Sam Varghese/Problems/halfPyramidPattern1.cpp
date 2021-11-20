// 1
// 12
// 123
// 1234

#include<iostream>

int main(void){

    int terms;
    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    for (int counter = 1; counter < terms + 1; counter ++){

        std::cout << "\n";
        for (int i = 0; i < counter; i++){

            std::cout << i+1;
        }
    }
}