#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

    unsigned int terms;

    cout << "Kindly enter the number of terms: ";
    cin >> terms;

    for(int yIterator = 0; yIterator < terms; yIterator ++){

        for(int xIterator = 0; xIterator < terms - yIterator; xIterator ++){

            cout << terms - xIterator;
        }

        cout << endl;
    }

    return 0;
}