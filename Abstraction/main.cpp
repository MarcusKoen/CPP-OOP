
#include <iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion()=0; //Why virtual, whoever signs the contract abstractemployee, will have to provide implementation for the fn

};


class Employee:AbstractEmployee//NB SINGLE COLON wtf
{

private:
    string Name;
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

int main()
{

    Employee employee1("Sabrina", "Youtube", 34);
    employee1.setAge(12);
    cout << employee1.getAge() << endl << employee1.getName() << endl << employee1.getCompany() << endl;
    employee1.AskForPromotion();


}

