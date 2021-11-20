#include<iostream>
#include<vector>
#include<string>

using namespace std;

int middleElement(int arrayLength, int startIndex, int endIndex){

    return ((endIndex - startIndex) % 2) == 0 ? (endIndex - startIndex) / 2 : (endIndex - startIndex + 1) / 2;
}

bool checkPresence(int array[], int arrayLength, int findElement, int startIndex, int endIndex){

    int middleElementIndex = middleElement(arrayLength, startIndex, endIndex);

    if(array[middleElementIndex] == findElement){

        cout << "Element found in the array";
        return true;
    } else if (array[middleElementIndex] > findElement){

        return checkPresence(array, arrayLength, findElement, 0, middleElementIndex - 1);
    } else if(array[middleElementIndex] > findElement){

        return checkPresence(array, arrayLength, findElement, middleElementIndex + 1, arrayLength-1);
    }

    return false;
}

int main(void){

    int arrayLength, findElement;

    cout << "\nKindly enter the length of the array: ";
    cin >> arrayLength;

    int array[arrayLength];

    int input;

    for (int i = 0; i < arrayLength; i ++){

        cout << "Kindly enter the element of array: ";
        cin >> input;

        array[i] = input;
    }

    cout << "Kindly enter the element whose presence is to be checked: ";
    cin >> findElement;

    cout << "Element found: " << checkPresence(array, arrayLength, findElement, 0, arrayLength - 1);

    return 0;
}