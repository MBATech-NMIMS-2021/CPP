#include<iostream>
#include<vector>
#include<string>

// using namespace std;

int main(void){

    std::string InputName;

    struct player {

        std::string name;
        std::string country;
        float battingAvg;
    };

    struct player team[3];

    for (int i = 0; i < 3; i++){

        std::cout << "Enter the batting avg: ";
        std::cin >> team[i].battingAvg;

        std::cout << "\nEnter the name: ";
        std::getline(std::cin, InputName);
        team[i].name = InputName;
    }

    for (int i = 0; i < 3; i++){

        if (team[i].battingAvg > 50){

            std::cout << team[i].name;
        }
    }

        return 0;
}