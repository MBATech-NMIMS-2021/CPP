#include<iostream>
#include<string>
#include<cstring>

int main(void){

    char sentence[] = "My   name is Sam Varghese from          NMIMS";

    int wordCount = 1;
    int charCount = 0;
    int i = 0;

    int stringLength = strlen(sentence);

    while(i<stringLength){

        if(sentence[i] == ' '){

            wordCount++;
            
            while(sentence[i+1] == ' '){

                i++;
            }
        } else {

            charCount++;
        }

        i++;
    }

    std::cout << "Total words are " << wordCount << " average letter count in words=" << charCount / wordCount;

    return 0;
}

// linear search, binary search