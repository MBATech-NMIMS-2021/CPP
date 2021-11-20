#include<iostream>
#include<vector>
#include<string>

using namespace std;

int print1DVector(vector<int> vector1){

    cout << "\n";

    for (int i = 0; i < vector1.size(); i++){

        cout << vector1[i]<< " ";
    }

    cout << "\n";

    return 0;
}

int generatePascals(int noTerms){

    cout << 1 << "\n";
    cout << 1 <<1<< "\n";

    vector<int> pascalsVector = {1, 1};
    vector<int> dynamicVector;
    int counter;

    for (int yCounter = 0; yCounter < noTerms; yCounter ++){

        counter = 1;
        int limit = pascalsVector.size()+2;
        dynamicVector = {1};

        // cout << "\n=Value of counter = " << counter << " value of limit-2 " << limit - 2<< "\n";

        while(counter != limit-2){

            // cout << "\n=Value of counter = " << counter << " value of limit-2 " << limit - 2<< "\n";

            // cout << "\nValue of counter = " << counter << " which is not equal to " << limit << "\n";
            // cout << "\nValue of pascalVector counter = " << pascalsVector[counter-1] << " and of pascalsVector counter + 1 =" << pascalsVector[counter] << "\n";

            dynamicVector.push_back(pascalsVector[counter-1] + pascalsVector[counter]);
            counter++;
        }

        dynamicVector.push_back(1);

        pascalsVector = dynamicVector;

        print1DVector(pascalsVector);
    }

    return 0;
}

int main(void){

    int noTerms;

    cout << "\nKindly enter the number of terms: ";
    cin >> noTerms;

    generatePascals(noTerms);

    return 0;
}