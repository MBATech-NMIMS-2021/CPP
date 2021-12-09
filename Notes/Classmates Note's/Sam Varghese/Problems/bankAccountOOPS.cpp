#include<iostream>
#include<vector>
#include<string>

using namespace std;

class bankAccount {

    public:

        string accountHolder;
        int accountNo;
        string typeAccount;
        int balanceAccount;

        void assignInitialValues(string accountHoldersName, int acntNo, string acntType, int acntBalance){

            accountHolder = accountHoldersName;
            accountNo = acntNo;
            typeAccount = acntType;
            balanceAccount = acntBalance;
        };

        void depositAmount(int depositMoney){

            balanceAccount += depositMoney;
        }; 

        void withDraw(int withdrawAmount){

            balanceAccount -= withdrawAmount;
        };

        void displayNameBalance(){

            cout << "\nName is: " << accountHolder << " and balance is " << balanceAccount;
        }
};

int main(void){

    bankAccount Sam;

    Sam.assignInitialValues("Sam", 1234, "Minor", 3232);

    Sam.displayNameBalance();

    return 0;
}