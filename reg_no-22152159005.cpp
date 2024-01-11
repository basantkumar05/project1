/*WAP to create an Employee Class which contains the following fields:
Data Members:
1. EmpName
2. Empid
3. BasicSalary
4. AnnuallyIncrementRate(15%)
5. Location
6. Address
Member Functions:
1. Set & Get function of all the data members
2. Constructor and destructor
3. Salary after 10 years
4. Total savings if employees save 10% per year.*/

#include <iostream>
using namespace std;
class Employee
{
private:
    string EmpName;
    string Empid;
    float BasicSalary;
    float AnnuallyIncrementRate;
    string Location;
    string Address;

public:
    // constructur
    Employee(string name, string id, float basic_salary, float increment, string address, string location)
    {
        EmpName = name;
        Empid = id;
        BasicSalary = basic_salary;
        AnnuallyIncrementRate = increment;
        Address = address;
        Location = location;
    }
    string get_name()
    {
        return EmpName; 
    }
    string get_id()
    {
        return Empid;
    }
    float get_basicSalary()
    {
        return BasicSalary;
    }
    float get_annualIncrement()
    {
        return AnnuallyIncrementRate;
    }
    string get_address()
    {
        return Address;
    }
    string get_location()                      
    {
        return Location;
    }     
    // salary after 10 year
    double salaeryafter10year()
    {
        double salary;
        salary=BasicSalary;
        cout<<"salary of 1 year is : "<<salary<<endl;
        for(int i=1;i<10;i++)
        {
            salary=salary*(1+AnnuallyIncrementRate);
            if(i+1>9)
            {
                break;
            }
            cout<<"salary of "<<i+1<<" "<<"year is : "<<salary<<endl;
        }
        return salary;
    }
    // saving after 10 year 
    double savingafter10year()
    {
        double saving,total_saving=0;
        saving=BasicSalary*0.10;
        cout<<"saving of 1 year is : "<<saving<<endl;
        total_saving+=saving;
        for(int i=1;i<10;i++)
        {
            saving=saving*(1+AnnuallyIncrementRate);
            cout<<"saving of "<<i+1<<" "<<"year is : "<<saving<<endl;
            total_saving+=saving;
        }
        return total_saving;
    }
    ~Employee()
    {
        cout<<"Destructor Executed..."<<endl;

    }
};
int main()
{
    Employee emp("Basant Kumar", "S22CS14", 100, 0.15, "Samastipur", "G.E.C,Samastipur");
    cout<<"DETAILS OF EMPLOYEE ARE FOLOOWING :-"<<endl<<endl;
    cout<<"INTRODUCTION OF EMPLOYEE :-"<<endl;
    cout << "NAME :-  " << emp.get_name() << endl;
    cout << " ID :-  " << emp.get_id() << endl;
    cout << "BASIC SALARY :-  " << emp.get_basicSalary() << endl;
    cout << "ANNUAL INCREMENT RATE :-  " << emp.get_annualIncrement() << endl;
    cout << "ADDRESS :-  " << emp.get_address() << endl;
    cout << "LOCATION :-  " << emp.get_location() << endl<<endl;
    cout<<"DETAILS OF SALARY :-"<<endl;
    cout<<"SALARY AFTER 10 YEAR :- "<<emp.salaeryafter10year()<<endl<<endl;
    cout<<"DETAILS OF SAVING :-"<<" "<<endl;
    cout<<"TOTAL SAVING AFTER 10 YEAR :- "<<emp.savingafter10year()<<endl;
    return 0;
}