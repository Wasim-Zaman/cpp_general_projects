#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s1;

    //using assign() method to assign combination of characters

    s1.assign("Hello");
    cout<<s1<<endl;

    //using append() method for concatinating

    s1.append(" World");
    cout<<s1<<endl;

    //using insert method.....
    //in this method , 1st argument is index number and second is string

    s1.insert(6,"My ");
    cout<<s1<<endl;

    //using replace() method....
    //first argument is index number,second is length,third is string

    s1.replace(6,2,"");
    cout<<s1<<endl;


    //using find() method....
    //used to find string and returns the first index number of that string
    //if string does not find,then returns -1....

    int m = s1.find("World");
    cout<<m<<endl;

    //using rfind() method..... it finds string in reverse and returns
    //the index number.

    int w = s1.rfind("World");
    cout<<w<<endl;


    //using c_str() method....
    //it converts string into char array

    char str[20];
    strcpy(str,s1.c_str());
    cout<<str<<endl;

    //using compare().....
    //it gives three result.... 1,0,-1
    //if strings are same then 0
    //if strings are in dictionary order than -1
    //if strings are in opposite dictionare order than 1

    string s2 = "abc";
    string s3 = "abc";
    string s4 = "acb";

    int a = s2.compare(s3);
    cout<<a<<endl;

    int b = s2.compare(s4);
    cout<<b<<endl;

    int c = s4.compare(s2);
    cout<<c<<endl;


    //using size() method

    cout<<s1.size()<<" "<<s2.size()<<" "<<s3.size()<<" "<<s4.size()<<endl;
    //using erase() method;

    s1.erase();
    cout<<s1<<endl;
    return 0;
}
