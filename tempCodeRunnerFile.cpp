#include<iostream>
#include<vector>
#include<string>

using namespace std;


void print(char a = 'a', int b = 10){

    for(int i = 0; i<b; i++){

        cout << a;
    }
};

int main(void){

    print(20);

    return 0;
}
