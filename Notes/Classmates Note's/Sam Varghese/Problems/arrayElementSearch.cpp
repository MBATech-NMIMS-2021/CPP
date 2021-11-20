#include<iostream>

int main(void){

    int arrayLength, findElement, status=0;
    
    std::cout << "Kindly enter the number of terms in the array: ";
    std::cin >> arrayLength;
    std::cout << "\n";

    int finalArray[arrayLength];

    for (int counter = 0; counter<arrayLength; counter ++){

        std::cout << "\nKindly enter the element: ";
        std::cin >> finalArray[counter];
    }

    std::cout << "\n\nKindly enter the element whose presence you want to check in the array: ";
    std::cin >> findElement;

    for (int i = 0; i<arrayLength; i++){

        if(finalArray[i] == findElement){

            std::cout << "\nELEMENT FOUND IN INDEX "<<i;
            status = 1;
            break;
        }
    }

    if(status == 0){

        std::cout << "\nELEMENT NOT FOUND IN THE ARRAY";
    }

    return 0;
}