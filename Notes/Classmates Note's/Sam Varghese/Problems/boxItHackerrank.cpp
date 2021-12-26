#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Box{
    int l, b, h;

    public:

        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
    
        Box(int length, int breadth, int height){

            l = length;
            b = breadth;
            h = height;
        }

        int getLength(){
            return l;
        }

        int getBreadth(){
            return b;
        }

        int getHeight(){
            return h;
        }

        long long CalculateVolume(){
            return l * b * h;
        }

        friend ostream& operator << (ostream& stream, Box& boxName){
            stream << boxName.l << " " << boxName.b << " " << boxName.h;
            return stream;
        }
};

int main(void){

    Box box1(1, 2, 3);

    cout << box1;

    return 0;
}