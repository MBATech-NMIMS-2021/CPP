// 1
// 11
// 121
// 1331
// 14641

// Logic: All enteries at n row, k column are nCk actually

#include<iostream>

using namespace std;

long specialFactorialCalculator(long startNumber, long endNumber){

    long factorial = 1;

    long counter = startNumber + 1;

    while(counter <= endNumber){

        factorial *= counter;
        counter++;
    }

    return factorial;
}

long combinationCalculator(long n, long r){

    return specialFactorialCalculator(r, n)/ specialFactorialCalculator(1, n-r);
}

long pascalsTrianglePrinter(long terms){

    for (long yIterator = 0; yIterator < terms; yIterator ++){

        cout << "\n";

        for (long xIterator = 0; xIterator < yIterator + 1; xIterator ++){

            cout << combinationCalculator(yIterator, xIterator) << " ";
        }
    }

    return 0;
}

int main(void){

    long noTerms;

    cout << "Kindly enter the number of terms: ";
    cin >> noTerms;

    cout << "\n";

    pascalsTrianglePrinter(noTerms);

    return 0;
}