#include<iostream>
#include<vector>
#include<string>

using namespace std;

class date {

  public:
    int dd;
    int mm;
    int yy;

    bool Setdate(){

      if(dd >31 || dd < 1 || mm <1 || mm > 12 || yy < 2010){

        return false;
      } else {

        return true;
      }
    };

    void printdate(){

      switch(mm){

        case 1:
          cout << "January";
          break;

        case 2:
          cout << "February";
          break;

        case 3:
          cout << "March";
          break;

        case 4:
          cout << "April";
          break;

        case 5:
          cout << "May";
          break;

        case 6:
          cout << "June";
          break;

        case 7:
          cout << "July";
          break;

        case 8:
          cout << "August";
          break;

        case 9:
          cout << "September";
          break;

        case 10:
          cout << "October";
          break;

        case 11:
          cout << "November";
          break;

        case 12:
          cout << "December";
      }

      cout << " " << dd << ", " << yy;
    };
};

int main(void){

  date todaysDate;

  cout << "\nKindly enter the date: ";
  cin >> todaysDate.dd;

  cout << "\nKindly enter the month: ";
  cin >> todaysDate.mm;

  cout << "\nKindly enter the year: ";
  cin >> todaysDate.yy;

  // cout << "\nStatus of the date: " << todaysDate.Setdate();

  todaysDate.printdate();

  return 0;
}