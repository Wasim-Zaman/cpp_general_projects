#include <iostream>
#include <conio.h>
using namespace std;
int score = 0;
class plane
{
    int x,y;    //for x,y axis
    const int height,width;
    int flag;
public:
    plane():height(20),width(40),x(width/2),y(height/2)
    {

    }
    void border()
    {
    system("cls");
    //system("Color 3");

    cout<<"      score::"<<score<<endl;
    int m,w;
    for(w=1;w<=height;w++)
    {
        for(m=1;m<=width;m++)
        {
            if(m==1 || w==1 || m==width || w==height)
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

void setData()
{
    x=width/2;
    y=height/2;
}
    void input()
    {
         if(kbhit())

    {
        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 's':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 'z':
            flag=4;
            break;

        }
    }
}

void logic()
{

     switch(flag)
    {
        case 1:
            y--;
            break;
        case 2:
            y++;
            break;
        case 3:
            x--;
            break;
        case 4:
            x++;
            break;
        }
}

};
int main()
        {
    plane p1;
    //p1.setData();
    while(true){
    p1.border();
    p1.input();
    p1.logic();
    }
    return 0;
}
