// series is 2, 4, 6, 8, 10....

#include<iostream>

int main(void){

    int terms, sum=0;
    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    for (int i = 1; i < terms+1; i++){

        sum += i * 2;
    }

    std::cout << "\nSum of the series is: " << sum;
}