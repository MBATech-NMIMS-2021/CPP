// Sequence 1-x+x**2-x**3+...

#include<iostream>
#include<math.h>

int main(void){

    int terms;
    float number, sum=0;
    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    std::cout << "Kindly enter the number: ";
    std::cin >> number;

    for (int i = 0; i < terms; i++){

        sum += pow((-1) * number, i);
    }

    std::cout << "The sum of the series is: " << sum;

    return 0;
}