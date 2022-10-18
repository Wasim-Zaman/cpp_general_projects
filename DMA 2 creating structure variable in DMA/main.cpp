#include <iostream>
#include<string>
using namespace std;
struct student
{
    int id;
    float cgpa;
    string name;
};

int main()
{
    student *ptr; //This pointer will point the first byte of the allocated memory for the structure variable in heap memory
    ptr=new student;
    cout<<"Enter the name of student:      ";
    getline(cin,ptr->name);
    cout<<"Enter the ID of the student:    ";
    cin>>ptr->id;
    cout<<"Enter the CGPA of the student:  ";
    cin>>ptr->cgpa;
    cout<<"\n\n********************************"<<endl;
    cout<<"********************************"<<endl;
    cout<<"\nThe name of the student is  "<<ptr->name<<endl;
    cout<<"\nThe ID of the student is    "<<ptr->id<<endl;
    cout<<"\nThe CGPA of the student is  "<<ptr->cgpa<<endl;
    delete ptr;
    return 0;
}
