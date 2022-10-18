#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

bool gameOver = false;
class plane
{
    const int heigth = 20;
    const int width  = 40;
    int x1 = 20, y1 = 18;   //for head of aeroplane
    int x2 = 20, y2 = 19;   //for tail of aeroplane
    int temp;
    int eX1 , eX2 , eY1 , eY2;
    int X1,X2,Y1,Y2;
public:
    void setValues()
    {
        place1:
        eX1 = rand()%40;
        if(eX1==1)
        {
            goto place1;
        }

        place2:
        eX1 = rand()%40;
        if(eX2==1)
        {
            goto place2;
        }

        place3:
        eY1 = rand()%20;
        if(eY1==1)
        {
            goto place3;
        }
        place4:
        eY2 = rand()%20;
        if(eY2==1)
        {
            goto place4;
        }
    }
    void border()
    {
        int m,w;
        system("cls");
        for(m=1;m<=heigth;m++)
        {
            for(w=1;w<=width;w++)
            {
                if(w==1 || w== width || m==1 || m== heigth)
                {
                    cout<<"#";
                }
                else
                {
                    if(m==y1 && w==x1)
                    {
                        cout<<"^";
                    }
                    else if(m==y2 && w==x2)
                    {
                        cout<<"|";
                    }

                    else
                    {
                        if(m==eY1 && w==eX1)
                        {
                            cout<<"o";
                        }
                        else if(m==eY2 && w==eX2)
                        {
                            cout<<"o";
                        }
                        else
                            cout<<" ";
                    }
                }
            }
            cout<<"\n";
        }
    }
    void input()
    {
        if(kbhit())
        {
            switch(getch())
            {
            case 'a':
                temp = 1;
                break;
            case 'd':
                temp = 2;
                break;
            case 'e':
                gameOver = true;
                break;
            default:
                break;
            }
        }
    }
    void logic()
    {
        switch(temp)
        {
        case 1:
            x1--;
            x2--;
            break;
        case 2:
            x1++;
            x2++;
            break;
        default:
            break;
        }
        if(x1 == 1 || x2 == 1 || x2 == width || x1 == width )
        {
            gameOver = true;
        }

        place1:
        eX1 = rand()%40;
        if(eX1==1)
        {
            goto place1;
        }

        place2:
        eX1 = rand()%40;
        if(eX2==1)
        {
            goto place2;
        }

        place3:
        eY1 = rand()%20;
        if(eY1==1)
        {
            goto place3;
        }
        place4:
        eY2 = rand()%20;
        if(eY2==1)
        {
            goto place4;
        }
    }
};
int main()
{
    plane p1;
    p1.setValues();
    while(!gameOver)
    {
        p1.border();
        p1.input();
        p1.logic();
    }
    return 0;
}
