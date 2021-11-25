#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

    int row1, column1, row2, column2;

    cout << "\nKindly enter the length of first matrix: ";
    cin >> row1;

    cout << "\nKindly enter the breadth of the first matrix: ";
    cin >> column1;

    row2 = column1;

    cout << "\nKindly enter the breadth of the second matrix: ";
    cin >> column2;

    int matrix1[row1][column1];
    int matrix2[row2][column2];

    // Taking input for matrix1

    for(int yIterator = 0; yIterator < row1; yIterator ++){

        for(int xIterator = 0; xIterator < column1; xIterator ++){

            cout << "\nKindly enter the ("<<xIterator<< ", "<< yIterator<<") element of matrix1: ";
            cin >> matrix1[yIterator][xIterator];
        }
    }

    // Taking input for matrix2

    for(int yIterator = 0; yIterator < row1; yIterator ++){

        for(int xIterator = 0; xIterator < column1; xIterator ++){

            cout << "\nKindly enter the ("<<xIterator<< ", "<< yIterator<<") element of matrix2: ";
            cin >> matrix2[yIterator][xIterator];
        }
    }

    // int matrixProduct[row1 * column2];

    for(int rowIterator = 0; rowIterator < row1; rowIterator ++){

        for(int columnIterator = 0; columnIterator < column1; columnIterator ++){

            cout << matrix1[rowIterator][columnIterator] * matrix2[columnIterator][rowIterator];
        }
    }

    return 0;
}