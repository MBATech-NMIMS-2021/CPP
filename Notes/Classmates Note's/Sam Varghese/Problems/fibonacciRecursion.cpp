#include<iostream>
#include<vector>
#include<string>

using namespace std;

int storeNumber;

bool generateFibonacciSeries(int firstFibNo, int secFibNo, int noTerms){

    if(noTerms == 0){

        return true;
    } else {

        storeNumber = firstFibNo + secFibNo;

        cout <<storeNumber << " ";

        firstFibNo = secFibNo;
        secFibNo = storeNumber;

        // cout << "First: " << firstFibNo << " sec: " << secFibNo << "\n";

        noTerms--;

        return generateFibonacciSeries(firstFibNo, secFibNo, noTerms);
    }
}

int main(void){

    int noTerms;

    cout << "Kindly enter the total number of term in the series: ";
    cin >> noTerms;

    cout << 0 << " " << 1 << " ";

    generateFibonacciSeries(0, 1, noTerms);

    return 0;
}