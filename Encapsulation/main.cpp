#include <iostream>

using namespace std;

class Employee//all members and attributes in C++ is private by default
{
    //private-only class, public - outside class, private - in between

private://Encapsulation
    string Name;
    string Company;
    int Age;

public:
    //getters and setters to get and set the private values, makes sense actually. Public methods. Note setters void type
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

    //3 rules for constructor
    //Same name as class
    //Has NO return type
    //public

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
    employee1.setAge(99);
    cout << employee1.getAge() << endl << employee1.getName() << endl << employee1.getCompany() << endl;


}

