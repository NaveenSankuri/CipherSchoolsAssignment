//Question 3
#include<iostream>
using namespace std;
class Member{
    public:
    string Name;
    int Age;
    string Phone_Number;
    string Addres;
    int Salary;
    void printSalary()
    {
        cout<<"Salary :"<<Salary<<endl;
    }
};
class Employee : public Member{
    public:
    string specialization;
    string department;
};
class Manager : public Member{
    public:
    string specialization;
    string department; 
};
int main()
{ 
    Employee e;
    e.Name="Naveen";
    e.Age=22;
    e.Phone_Number="91XXXXXXXX";
    e.Addres="XXXXXXXXXXXXX XXXXXXXXXXX";
    e.Salary=1000000;
    e.department="XXXXXXXXXXXXXXXXX";
    e.specialization="XXXXXXXXXXXXXXXX";
    e.printSalary();

    Manager m;
    m.Name="Naveen";
    m.Age=22;
    m.Phone_Number="91XXXXXXXX";
    m.Addres="XXXXXXXXXXXXX XXXXXXXXXXX";
    m.Salary=1300000;
    m.department="XXXXXXXXXXXXXXXXX";
    m.specialization="XXXXXXXXXXXXXXXX";
    m.printSalary();

    return 0;
}