// 2, 4, 8, 16, 32

#include<iostream>

int main(void){

    int terms, number, sum=0, summer=1;
    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    for (int i = 1; i < terms+1; i++){

        summer *= 2;
        sum += summer;
    }

    std::cout << "\nThe sum of the series: " << sum;
}