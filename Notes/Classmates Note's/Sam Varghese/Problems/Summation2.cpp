// x-x**2/2!+x**3/3!

#include<iostream>
#include<math.h>

int main(void){

    int terms, factorialValue=1;
    float number, sum=0;

    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    std::cout << "\nKindly enter the number: ";
    std::cin >> number;

    for (int i = 1; i < terms+1; i++){

        factorialValue = 1;

        for (int k = 1; k <= i; k++){

            factorialValue *= i;
        }
        std::cout << "Factorial of " << i << " is " << factorialValue;
        sum += pow(number, i) * pow(-1, i - 1) / factorialValue;
        std::cout << "\nValue of sum " << sum;
    }

    std::cout << "The sum of the series till " << terms << " terms is: " << sum;
}