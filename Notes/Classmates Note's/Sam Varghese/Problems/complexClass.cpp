#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Complex {

    public:
        float realPart;
        float imaginaryPart;

        Complex(float realPartNumber, float imaginaryPartNumber){

            realPart = realPartNumber;
            imaginaryPart = imaginaryPartNumber;

            cout << "\nComplex numbers that has been created is: " << realPart << " + " << imaginaryPart << "j";
        };

        
};

int main(void){

    Complex imaginaryNumber1(1, 3);

    return 0;
}