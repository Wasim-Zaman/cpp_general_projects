#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class stopWatch
{
    int m,s,ms;
public:
    stopWatch():m(0),s(0),ms(0)
    {

    }

    void display()
    {
        system("cls");
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t\t    "<<m<<":"<<s<<":"<<ms;
    }
    void operation()
    {
        char ch;
        cout << "\n\n\t\t\t\t\tPress [S] to start a stop watch    :";
        ch = _getch();
        if(ch == 's')
        {
            while(!kbhit())
            {
                for(int i=ms;i<=1000;i++)
                {
                    Sleep(1);

                        if(ms>1000)
                        {
                            ms = 0;
                            s++;

                            if(s > 60)
                            {
                                ms=0;
                                s=0;
                                m++;
                            }

                            if(m>60)
                            {
                                m=0;
                                ms=0;
                                s=0;
                            }
                            ms++;
                        }
                        display();
                }


            }

            }
        }
};
int main()
{
    stopWatch s;
    s.display();
    s.operation();
    return 0;
}
