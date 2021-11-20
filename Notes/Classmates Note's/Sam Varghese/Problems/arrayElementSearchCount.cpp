#include<iostream>

int searchElement(int array[], int arrayLength, int elementToSearch){

    int counter = 0, lastIndex;

    for (int i = 0; i < arrayLength; i++)
    {

        if(array[i]==elementToSearch){

            counter++;
            std::cout << "\nElement found in the index " << i;
            lastIndex = i;
        }
    }

    std::cout << "\nElement detected " << counter << " number of times, and the last index where element was found is: " << lastIndex;
    return counter;
}

int main(void){

    int arrayLength, elementToSearch;

    std::cout << "\nKindly enter the length of the array: ";
    std::cin >> arrayLength;

    int array[arrayLength];

    for (int counter = 0; counter < arrayLength; counter ++){

        std::cout << "\nKindly enter the element of the array: ";
        std::cin >> array[counter];
    }

    std::cout << "\nKindly enter the element to search: ";
    std::cin >> elementToSearch;

    searchElement(array, arrayLength, elementToSearch);

    // std::cout << "\nThe number of times " << elementToSearch << " was detected is: " << searchElement(array, arrayLength, elementToSearch);
}