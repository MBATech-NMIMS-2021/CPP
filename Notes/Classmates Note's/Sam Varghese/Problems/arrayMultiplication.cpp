#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printArray(int array[], int arraySize){

    for (int i = 0; i< arraySize; i++){

        cout << "Element of the new array: " << array[i]<< "\n";
    }
}

void arrayMultiplication(int array[], int multiplicationNumber, int arraySize){

    for (int i = 0; i < arraySize; i++){

        array[i] *= multiplicationNumber;
    }
}

int main(void){

    int noTerms, element, multiplicationNumber;

    cout << "Kindly enter the number of terms: ";
    cin >> noTerms;

    int array[noTerms];

    for (int i = 0; i< noTerms; i++){

        cout << "\nKindly enter the element of the array: ";
        cin >> element;

        array[i] = element;
    }

    cout << "\nKindly enter the number with which you wanna multiply all the elements of the array: ";
    cin >> multiplicationNumber;

    arrayMultiplication(array, multiplicationNumber, noTerms);

    printArray(array, noTerms);

    return 0;
}