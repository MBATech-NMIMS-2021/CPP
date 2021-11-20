#include<iostream>
#include<string>
#include<ctype.h>
#include<cstring>

int main(void){

    char array[] = "abcde";

    int vowel = 0;

    for (int i = 0; i < strlen(array); i++){

        if((tolower(array[i]) == 'a') || (tolower(array[i]) == 'e') || (tolower(array[i]) == 'i') || (tolower(array[i]) == 'o') || (tolower(array[i]) == 'u')){

            vowel++;
        }
    }

    std::cout << "Vowel count: " << vowel<<" the consonant count is "<< strlen(array)-vowel;

    return 0;
}