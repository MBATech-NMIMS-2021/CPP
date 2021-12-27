//A
//ABA
//ABCBA

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

    string englishAlphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    unsigned int noTerms;

    cout << "Kindly enter the number of terms: ";
    cin >> noTerms;

    for (int yIterator = 0; yIterator < noTerms; yIterator ++){


        for (int xIterator = 0; xIterator <= yIterator; xIterator ++){

            cout << englishAlphabets[xIterator];
        }

        for (int xIterator = yIterator; xIterator > 0; xIterator --){

            cout << englishAlphabets[xIterator-1];
        }

        cout << "\n";

    }

        return 0;
}