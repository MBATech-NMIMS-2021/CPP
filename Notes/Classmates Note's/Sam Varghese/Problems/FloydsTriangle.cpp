// 1
// 23
// 456
// 78910
// ...

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void floydsTriangleGenerator(int noRows){

    int startNumber = 0;
    int counter = 0;

    for (int yIterator = 0; yIterator < noRows; yIterator ++){

        cout << "\n";

        counter = 0;

        while(counter != yIterator + 1){

            startNumber++;
            counter++;

            cout << startNumber << " ";
        }
    }
}

int main(void){

    int noRows;

    cout << "Kindly enter the number of rows the floyd's triangle should have: ";
    cin >> noRows;

    floydsTriangleGenerator(noRows);

    return 0;
}