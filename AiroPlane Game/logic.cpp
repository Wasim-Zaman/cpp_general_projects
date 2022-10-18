#include <iostream>
#include <conio.h>
using namespace std;

class plane
{
    int x,y;    //for x,y axis
    const int height,width;
    int flag;
public:
    plane():x(40),y(20),height(y/2),width(x/2)
    {

    }
    void setValues()
    {

    }
    void border() //borders
    {
        system("cls");
        int m,w;
        for(m=1; m<=y; m++)
        {
            for(w=1; w<=x; w++)
            {
                if(m==1 || m==y || w==1 || w==x)
                {
                    cout<<"#";
                }

                else
                {

                    if(w==20 && m==18)
                    {
                        cout<<"^";
                    }
                    else if(w==20 && m==19)
                    {
                        cout<<"|";
                    }

                    else
                        cout<<" ";
                }

            }
            cout<<endl;
        }
    }
    void keyInput()
    {
        if(kbhit())
        {
            switch(getch())
            {
            case 'a':
                flag = 1;
                break;
            case 's':
                flag = 2;
                break;
            case 'w':
                flag = 3;
                break;
            case 'z':
                flag = 4;
                break;
            default:
                break;
            }
        }
    }
    void logic()
    {
        switch(flag)
        {
        case 1:
            x--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y--;
            break;
        case 4:
            y++;
            break;
        default:
            break;
        }
    }
};
int main()
{
    plane p1;
    p1.setValues();
    while(true)
    {
        p1.border();
        p1.keyInput();
        p1.logic();
    }
    return 0;
}
