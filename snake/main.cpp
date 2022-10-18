#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

//Global Variables
const int height=20,width=20;
int x,y;    //for x and y axis
int fruiteX,fruiteY;
int flag;
bool draw=true;
int score=0;
int tailX[1000],tailY[1000]; //for tail...
int tailCount=0;



void border()
{
    system("cls");
    system("Color 3");

    cout<<"      score::"<<score<<endl;
    int m,w;
    for(w=0;w<height;w++)
    {
        for(m=0;m<width;m++)
        {
            if(m==0 || w==0 || m==width-1 || w==height-1)
            {
                cout<<"*";
            }
            else
            {
                if(w==x && m==y)
                cout<<"O";//head
                else if(w==fruiteX && m==fruiteY)
                {
                    cout<<"#";
                }
                else
                {
                    int c=0;
                    for(int i=0;i<tailCount;i++)
                    {
                        if(w==tailX[i] && m==tailY[i])
                        {
                            cout<<"o";
                            c++;
                        }

                    }
                    if(c==0)
                    {
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
}

void setData()
{
    x=width/2;
    y=height/2;

    label1:
    fruiteX=rand()%20;
    if(fruiteX==0)
    {
        goto label1;
    }

    label2:
    fruiteY=rand()%20;
    if(fruiteY==0)
    {
        goto label2;
    }

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

    //store first index values of tail x and y....

    int storeX1 = tailX[0];
    int storeY1 = tailY[0];

    // assign new values to  first indexes of x,y coordinates...

    tailX[0] = x;
    tailY[0] = y;

    //for storing 2nd indexes values of x,y coordinates...create two variables for that

    int  storeX2,storeY2;

    for(int c=1;c<tailCount;c++)
    {
        //assigning 2nd indexes values whenever the loops runs....
        storeX2 = tailX[c];
        storeY2 = tailY[c];

        //now assigning 1st index values of x,y coordinates inside 2nd indexes..
        tailX[c] = storeX1;
        tailY[c] = storeY1;

        //assigning old previous value
        storeX1 = storeX2;
        storeY1 = storeY2;
    }
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
        for(int j=0;j<tailCount;j++)
        {
            if(x==tailX[j] && y==tailY[j])
            {
                draw = false;
            }
        }

        if(x==fruiteX && y==fruiteY)
        {

    label3:
    fruiteX=rand()%20;
    if(fruiteX==0)
    {
        goto label3;
    }

    label4:
    fruiteY=rand()%20;
    if(fruiteY==0)
    {
        goto label4;
    }
    score=score+5;
    tailCount++;

        }

        if(x==0 || y==0 || x==20 || y==20)
        {
            draw=false;
        }
}

int main()
{

    setData();
    while(draw)
    {
        border();
        input();
        logic();
        Sleep(20);
    }

    if(draw==false)
    {
        system("cls");
        cout<<"\t\tYou hitted on the wall";
        cout<<"\n\n\t\tYour score is ::"<<score;
    }
    return 0;
}
