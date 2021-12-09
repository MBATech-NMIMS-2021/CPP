#include<iostream>

using namespace std;

int main(void){

    int unit, finalCost;

    cout << "Enter the unit: ";
    cin >> unit;

    if(unit <= 100){

        finalCost = 0.5 * unit;
    } else if (unit > 100 && unit <= 200){

        finalCost = 50 + 0.65 * unit;
    } else if (unit > 200 && unit <= 300){

        finalCost = 115 + 0.75 * unit;
    }

    cout << "\nFinal cost: " << finalCost;

    return 0;
}