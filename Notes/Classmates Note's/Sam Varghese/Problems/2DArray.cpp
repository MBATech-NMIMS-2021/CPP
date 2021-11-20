#include<iostream>
#include<vector>
#include<string>

int main(void){

    int array[3][4] = {{34, 12, 9, 46}, {67, 23, 8, 36}, {88, 90, 7, 21}};

    int max = 34;
    int min = 34;

    for (int i = 0; i < 3; i++){

        for (int k = 0; k < 4; k++){

            if(max < array[i][k]){

                max = array[i][k];
            }
            if(array[i][k]<min){

                min = array[i][k];
            }
        }
    }

    std::cout << "Max value is " << max << " min value is " << min;

    return 0;
}