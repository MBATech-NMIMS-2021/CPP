#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Function declaration before writing the function
int findFactorial(int, int);

int main(void){

    int number;

    cout << "\nKindly enter the number whose factorial you wanna calculate: ";
    cin >> number;

    cout << "\nFactorial of "<< number<< " is "<<findFactorial(number, 1);

    return 0;
}

int findFactorial(int number, int factorial){

    if(number != 1){

        return factorial = number * findFactorial(number - 1, factorial);
    } else {

        return factorial;
    }
}
