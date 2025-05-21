#include <iostream>

using namespace std;

class Employee//all members and attributes in C++ is private by default
{
    //private-only class, public - outside class, private - in between
public:
    string Name;
    string Company;
    int Age;

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
    /*
    Employee employee1;//Object of class
    employee1.Name = "Saldina";
    employee1.Company = "Youtube";
    employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2;//Object of class
    employee2.Name = "AAA";
    employee2.Company = "YouFtube";
    employee2.Age = 252;
    employee2.IntroduceYourself();*/
    //Do you see the redundancy? We use a constructor

    Employee employee1("Sabrina", "Youtube", 34);
    employee1.IntroduceYourself();


}

