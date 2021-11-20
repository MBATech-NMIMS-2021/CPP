#include<iostream>

using namespace std;

void printMain(int noTerms){

    int maxNo;

    for (int yIterator = 0; yIterator < noTerms; yIterator ++){

        cout << "\n";

        for (int xIterator = 0; xIterator < yIterator + 1; xIterator ++){

            cout << xIterator + 1;
            maxNo = xIterator + 1;
        }

        for (int xIterator1 = 0; xIterator1 < yIterator; xIterator1 ++){

            cout << maxNo-xIterator1 -1;
        }
    }
}

int main(void){

    int noTerms;

    cout << "Kindly enter the number of terms: "; 
    cin >> noTerms;

    printMain(noTerms);

    return 0;
}