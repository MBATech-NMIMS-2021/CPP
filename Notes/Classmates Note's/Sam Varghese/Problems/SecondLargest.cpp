#include<iostream>

int main(void){

    int count;
    float largestNumber, secondLargestNumber, variable;
    std::cout << "Kindly enter how many numbers you wanna enter: ";
    std::cin >> count;

    std::cout << "Kindly enter the number: ";
    std::cin >> largestNumber;

    for (int i = 1; i < count; i++){

        std::cout << "Kindly enter the next number: ";
        std::cin >> secondLargestNumber;

        if(secondLargestNumber>largestNumber){

            variable = largestNumber;
            largestNumber = secondLargestNumber;
            secondLargestNumber = variable;
        }
    }

    std::cout << "The second largest number is: " << secondLargestNumber;
}