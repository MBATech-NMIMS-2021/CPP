#include<iostream>
#include<vector>
#include<string>

using namespace std;

int ackermannsFunction(int m, int n){

    if(m == 0){

        return n + 1;
    } else if (n == 0){

        return ackermannsFunction(m - 1, 1);
    } else {

        return ackermannsFunction(m - 1, ackermannsFunction(m, n - 1));
    }
}

int main(void){

    int m, n;

    cout << "\nKindly enter the value of m: ";
    cin >> m;

    cout << "\nKindly enter the value of n: ";
    cin >> n;

    cout << ackermannsFunction(m, n);

    return 0;
}