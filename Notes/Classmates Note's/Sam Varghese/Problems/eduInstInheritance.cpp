#include<iostream>
#include<vector>
#include<string>

using namespace std;

class staff{

    protected:

        unsigned int id;
        unsigned int age;
        string name;

    public:

        staff(long idInput, int ageInput, string nameInput){
            id = idInput;
            age = ageInput;
            name = nameInput;
        }

        void get(){
            cout << "\nName: " << name << " age: " << age << " id: " << id;
        }

        void set(long idInput, int ageInput, string nameInput){
            id = idInput;
            age = ageInput;
            name = nameInput;
        }
};

class officer : public staff {

    protected:

        unsigned int grade;

    public:

        officer(unsigned int id,int  age,string name, unsigned int gradeInput):staff(id, age, name){

            grade = gradeInput;
        }

        void get(){
            staff::get();
            cout << " grade = " << grade;
        }

        void set(unsigned int idInput, int ageInput, string nameInput, int gradeInput){

            staff::set(idInput, ageInput, nameInput);

            grade = gradeInput;
        }
};

class teacher : public staff {

    protected:
        string qualification;
        unsigned int experience;

    public:
        teacher(unsigned int id,int  age,string name, string qualificationInput, unsigned int experienceInput):staff(id, age, name){

            qualification = qualificationInput;
            experience = experienceInput;
        }

        void get(){
            staff::get();
            cout << " qualification: " << qualification << " experience: " << experience;
        }

        void set(long idInput, int ageInput, string nameInput, string qualificationInput, unsigned int experienceInput){

            staff::set(idInput, ageInput, nameInput);

            qualification = qualificationInput;
            experience = experienceInput;
        }
};

class visiting : public teacher {

    protected:
        unsigned int hoursAllocated;
        unsigned int daysAllocated;

    public:
        visiting(unsigned int id,int  age,string name, string qualificationInput, unsigned int experienceInput, unsigned int hoursAllocatedInput, unsigned int daysAllocatedInput):teacher(id,age,name, qualificationInput, experienceInput){

            hoursAllocated = hoursAllocatedInput;
            daysAllocated = daysAllocatedInput;
        };

        void get(){
            teacher ::get();
            cout << " hours allocated = " << hoursAllocated << " days allocated = " << daysAllocated;
        };

        void set(long idInput, int ageInput, string nameInput, string qualificationInput, unsigned int experienceInput, unsigned int hoursAllocatedInput, unsigned int daysAllocatedInput){

            hoursAllocated = hoursAllocatedInput;
            daysAllocated = daysAllocatedInput;
        }
};

class regular : public teacher {

    protected:
        // assuming "of publication" to be int
        unsigned int publications;

    public:
        regular(unsigned int id,int  age,string name, string qualificationInput, unsigned int experienceInput, unsigned int publicationsInput) : teacher (id,age,name, qualificationInput, experienceInput){

            publications = publicationsInput;
        }

        void get(){

            teacher ::get();
            cout << " number of publications = " << publications;
        };

        void set(long idInput, int ageInput, string nameInput, string qualificationInput, unsigned int experienceInput, unsigned int publicationsInput){

            teacher ::set(idInput, ageInput, nameInput, qualificationInput, experienceInput);

            publications = publicationsInput;
        };
};

int main(void){

    regular Sam(1232, 18, "Sam Varghese", "MBATech", 23, 32);

    Sam.get();

    return 0;
}