#include<iostream>
#include<vector>
#include<string>

using namespace std;

int returnIndex(int *array, int elementToSearch, int arrayLength);

int main(void){

    int arrayLength;

    cout << "Enter the array length: ";
    cin >> arrayLength;

    int *array = new int[arrayLength];

    for(int i = 0; i< arrayLength; i++){

        cout << "\nEnter the element: ";
        cin >> *(array + i);
    }

    int elementToSearch;

    cout << "\nKindly enter the element to search: ";
    cin >> elementToSearch;

    int searchStatus = returnIndex(array, elementToSearch, arrayLength);

    if(searchStatus == -1){

        cout << "\nElement not found";
    } else{

        cout << "\nElement found in " << searchStatus;
    }

    return 0;
}


int returnIndex(int *array, int elementToSearch, int arrayLength){

    for(int i = 0; i< arrayLength; i++){

        if(*(array + i) == elementToSearch){

            return i;
        }
    };

    return -1;
}