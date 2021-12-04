#include<iostream>
#include<vector>
#include<string>

using namespace std;



int main(void){

    struct student{

        string name;
        int rollNo;
        int totalMarks;
    };

    student Sam;
    Sam.totalMarks = 10;

    struct student Angel;
    Angel.totalMarks = 20;

    struct student Rahul;
    Rahul.totalMarks = 30;

    struct student Ramesh;
    Ramesh.totalMarks = 40;

    int *array;
    array = new int[];

    array[0] = Sam.totalMarks;
    array[1] = Angel.totalMarks;
    array[2] = Rahul.totalMarks;
    array[3] = Rahul.totalMarks;

    

    return 0;
}