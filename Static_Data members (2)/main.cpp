#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    static int employeeCount;
    int ID;
    string Name;
public:
    Employee()
    {
        employeeCount++;
        ID=0;
        Name= "UNKNOWN";
    }
    Employee(int i,string n)
    {
        employeeCount++;
        ID=i;
        Name = n;
    }
    void Display()
    {
        cout<<"Name of the Employee is: "<<Name;
        cout<<" , ID of the Employee is: "<<ID;
        cout<<" , Total Employees are: "<<employeeCount<<endl;
    }
};
int Employee::employeeCount=0;
int main()
{
    Employee e1;
    Employee e2(123,"MUHSIM");
    e1.Display();
    e2.Display();
    return 0;
}
