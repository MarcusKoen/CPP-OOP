#include <iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion()=0; //Why virtual, whoever signs the contract abstractemployee, will have to provide implementation for the fn

};


class Employee:AbstractEmployee//NB SINGLE COLON wtf
{

protected:
    string Name;
private:

    string Company;
    int Age;

public:

    void setName(string name)
    {
        Name=name;
    }

    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }


    void IntroduceYourself() //Class method
    {
        cout << Name << endl << Company << endl << Age << endl;
    }

    void AskForPromotion()
    {

        if (Age>30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
        {
            cout << Name << " has not been promoted" << endl;
        }
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
class Developer: public Employee//Developer child class, Employee super, parent, base class, public to access methods
{
public://not doing encapsulation

    string favLanguage;
//Need to provide a constructor

    Developer(string name, string company, int age, string language)//Dont have to implement name company age since it inherits from employee
    :Employee(name, company, age)
    {
        favLanguage = language;
    }

    void fixBug()
    {
        cout << Name <<"Fixed bug using"<<favLanguage; //cant access properties from base class, use protected modifier
    }
};

class Teacher:Employee
{
public://Not obeying encapsulation

    string Subject;
    void prepareLesson()
    {
        cout << Name << " has prepared " << Subject << endl;
    }

    Teacher(string name, string company, int age, string subject)
    :Employee(name, company, age)
    {
        Subject = subject;
    }

};
int main()
{

    Employee employee1("Sabrina", "Youtube", 34);
    employee1.setAge(12);
    cout << employee1.getAge() << endl << employee1.getName() << endl << employee1.getCompany() << endl;
    employee1.AskForPromotion();

    Developer dev1("Sabrina", "Youtube", 34, "C++");
    dev1.fixBug();
    dev1.AskForPromotion();

    Teacher t("Mark", "Heriot", 22, "Comp Sci");
    t.prepareLesson();



}


