// A
// BB
// CCC
// DDDD

#include<iostream>

int main(void){

    char alphabetSequence[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    int terms;
    std::cout << "\nKindly enter the number of terms: ";
    std::cin >> terms;

    for (int yCounter = 0; yCounter < terms; yCounter ++){

        std::cout << "\n";
        for (int xCounter = 0; xCounter < yCounter+1; xCounter++){

            std::cout << alphabetSequence[yCounter];
        }
    }

        return 0;
}