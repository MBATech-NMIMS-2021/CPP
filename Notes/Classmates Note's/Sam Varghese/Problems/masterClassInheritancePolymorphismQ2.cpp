#include<iostream>
#include<vector>
#include<string>

using namespace std;

class person {

    protected:
        string name;
        unsigned int id;

    public:
        person(string nameInput, unsigned int idInput){

            name = nameInput;
            id = idInput;
        };

        void get(){

            cout << "\nName = " << name << " id = " << id;
        };

        void set(string nameInput, unsigned int idInput){

            name = nameInput;
            id = idInput;
        };
};

class accountant : public person {

    protected:
        unsigned int code;

    public:
        accountant(string nameInput, unsigned int idInput, unsigned int codeInput):person(nameInput, idInput){

            code = codeInput;
        };

        void get(){

            person::get();
            cout << " code = " << code<< "\n";
        };

        void set(string nameInput, unsigned int idInput, unsigned int codeInput){

            person::set(nameInput, idInput);
            code = codeInput;
        }
};

class admin : public person {

    protected:
        unsigned int experience;

    public:
        admin(string nameInput, unsigned int idInput, unsigned int codeInput, unsigned int experienceInput):person(nameInput, idInput){

            experience = experienceInput;
        }

        void get(){

            person::get();
            cout << " experience = " << experience;
        };

        void set(string nameInput, unsigned int idInput, unsigned int experienceInput){

            person::set(nameInput, idInput);
            experience = experienceInput;
        };
};

class teacher : public accountant, admin{

    protected:
        string name;
        unsigned int id;
        unsigned int pay;

    public:
        teacher(string nameInput, unsigned int idInput, unsigned int codeInput, unsigned int payInput, unsigned int experienceInput):admin(nameInput, idInput, codeInput, experienceInput), accountant(nameInput, idInput, codeInput){

            pay = payInput;
        };

        void get(){

            accountant::get();
            admin::get();
        };

        void set(string nameInput, unsigned int idInput, unsigned int codeInput, unsigned int payInput, int experienceInput){

            accountant::set(nameInput, idInput, codeInput);
            admin::set(nameInput, idInput, experienceInput);

            pay = payInput;
        }
};

int main(void){

    teacher Xyz("Xyz", 12321, 3213, 5000, 1000);

    Xyz.get();


    return 0;
}