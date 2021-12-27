#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

    int noTerms;

    cout << "Kindly enter the number of terms: ";
    cin >> noTerms;

    for (int yIterator = 0; yIterator < noTerms; yIterator ++){

        for (int xIterator = 0; xIterator < (yIterator + 1)*2 -1; xIterator ++){

            cout << ((xIterator+1) % 2);
        }
        
        cout << "\n";

    }


        return 0;
}