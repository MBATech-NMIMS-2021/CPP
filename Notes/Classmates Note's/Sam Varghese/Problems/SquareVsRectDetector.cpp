#include<iostream>
#include<cmath>

int main(){

    float x1, y1, x2, y2, x3, y3, x4, y4;

    std::cout << "Kindly enter the x coordinate of the first point: ";
    std::cin >> x1;

    std::cout << "Kindly enter the y coordinate of the first point: ";
    std::cin >> y1;

    std::cout << "Kindly enter the x coordinate of the second point: ";
    std::cin >> x2;

    std::cout << "Kindly enter the y coordinate of the second point: ";
    std::cin >> y2;

    std::cout << "Kindly enter the x coordinate of the third point: ";
    std::cin >> x3;

    std::cout << "Kindly enter the y coordinate of the third point: ";
    std::cin >> y3;

    std::cout << "Kindly enter the x coordinate of the fourth point: ";
    std::cin >> x4;

    std::cout << "Kindly enter the y coordinate of the fourth point: ";
    std::cin >> y4;

    // Checking for parallelogram

    if((round((x1+x3)/2) == round((x2+x4)/2)) && (round((y1+y3)/2) == round((y2+y4)/2))){

        std::cout << "\nParallelogram detected";

        // Checking for square

        if((round(((y2-y4)/(x2-x4))*((y1-y3)/(x1-x3))) == -1) || (round((y2-y1)/(x2-x1)) == 0 && (round((y1-y3)/(x1-x3)) == -1)) || (round((y2-y1)/(x2-x1)) == -1 && (round((y1-y3)/(x1-x3)) == 0))){

            std::cout << "\nThe given figure is a square as diagonals are perpendicular";
        } else {

            std::cout << "\nThe given figure is not a square because the product of " << (y2 - y4) / (x2 - x4) << " and " << (y1 - y3) / (x1 - x3) << " is not -1";

            // Checking for rectangle

            if((round(((y3-y2)/(x3-x2))*(((y2-y1)/(x2-x1)))) == -1) || ((round((y3-y2)/(x3-x2)) == 0) && (round((y2-y1)/(x2-x1)) == -1)) || ((round((y3-y2)/(x3-x2)) == -1) && (round((y2-y1)/(x2-x1)) == 0))) {

                std::cout << "\nThe given figure is a rectangle";
            } else {
                std::cout << "\nThe given figure is a rhombus";
            }
        }
    } else {

        std::cout << "\nSir, it's not a parallelogram because either " << ((x1 + x3) / 2) << " and " << (x2 + x4) / 2 << " or " << (y1 + y3) / 2 << " and " << (y2 + y4) / 2 << " are not equal.";
    }
}