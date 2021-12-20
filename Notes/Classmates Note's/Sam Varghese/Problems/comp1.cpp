#include<iostream>
#include<vector>
#include<string>

using namespace std;

string englishAlphabets = "abcdefghijklmnopqrstuvwxyz";

void upperTriangle(int triSize, string midString){

    for (int row = 1; row < triSize + 1; row ++){

        cout << "\n";

        // Printing spaces
        for (int i = ((triSize - row)*2 - 1)*midString.size(); i >= 0; i--){

            cout << ' ';
        }

        // Printing first half
        int terms = 0;
        for (terms; terms < row; terms ++){

            cout << englishAlphabets[terms];

            if(row != 1){
                cout << midString;
            }
        }

        // Printing the next half
        for (terms = terms - 2; terms >= 0; terms --){

            cout << englishAlphabets[terms];
            if(terms != 0){
                cout << midString;
            }
        }

        terms = 0;
    }
}

void lowerTriangle(int triSize, string midString){

    for (int row = triSize - 1; row >= 0; row --){

        cout << "\n";

        // printing spaces
        for (int i = 0; i < ((triSize - row + 1)*2 - 1)*midString.size(); i ++){

            cout << ' ';
        }

        // printing lower half triangle
        int terms = 0;
        for (terms; terms < row; terms ++){

            cout << englishAlphabets[terms];
            if(row != 1){
                cout << midString;
            }
        }

        // printing the rest lower half tri
        for (terms = terms - 2; terms >= 0; terms --){

            cout << englishAlphabets[terms];
            if(terms != 0){
                cout << midString;
            }
        }
    }
}

    int main(void)
{

    int triSize;
    string midString;

    cin >> triSize;
    cin >> midString;

    upperTriangle(triSize, midString);

    // cout << "\n";

    lowerTriangle(triSize, midString);

    return 0;
}