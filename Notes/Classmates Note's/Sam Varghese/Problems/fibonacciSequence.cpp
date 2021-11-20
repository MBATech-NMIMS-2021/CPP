#include<iostream>

int main(void){

    long terms, lastTerm=1, lastSecondTerm=0, variable;
    std::cout << "Kindly enter the number of terms: ";
    std::cin >> terms;

    std::cout << lastSecondTerm << ", " << lastTerm;

    for (int counter = 0; counter < terms-2; counter++){

        if(lastTerm+lastSecondTerm<0){

            std::cout<<"\n\nNegative number detected sir: Last term: " << lastTerm << " Last second term: " << lastSecondTerm << " Addition: " << lastTerm + lastSecondTerm<<"\n\n";
        }

        variable = lastTerm;
        lastTerm += lastSecondTerm;
        lastSecondTerm = variable;
    
        std::cout << "\nLast term: " << lastTerm;
    }

    return 0;
}