#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int width=20,height=20;
int x,y;    //For x and y axis
int fruiteX,fruiteY;
int score,flag;
int gameOver;

void draw(); //For boundry
void setUp();   //for initialization
void input();   //for finding the pressed key and for changing the direction of snake
void makeLogic();
int main()
{
    setUp();
    while(1)
    {
        draw();
        //As everything will draw
        //we will need input
        input();
        makeLogic();
        if(gameOver==1)
            break;
    }

    return 0;
}
void draw()
{
    int w,m;
    system("cls");
    for(w=0;w<width;w++)
    {
        for(m=0;m<height;m++)
        {
            if(w==0 || w==height-1 || m==0 || m==width-1)
            {
                cout<<"*";
            }
            else
            {
               /* if(w==x && m==y)
                {
                    cout<<"O";
                }
                else if(w==fruiteX && m==fruiteY)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<" ";
                } */
                cout<<" ";

            }
        }
        cout<<endl;
    }
}
void setUp()
{
    //The value of gameOver is zero but as over game will draw,this value will become 1
    gameOver=0;
    //we want our snake in middle,for that we divide width and height by two
    //so that the axis becomes half

    x=width/2;
    y=height/2;

    //we are setting up fruits now
    control1:
    fruiteX=rand()%20;
    if(fruiteX==0)
    {
        goto control1;
    }
    control2:
    fruiteY=rand()%20;
    if(fruiteY==0)
    {
        goto control2;
    }

    //we will assign score variable from zero
    score=0;
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
        case 'x':
            gameOver=1;
            break;

        }
    }
}
void makeLogic()
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
    if(x<0 || x<width || y<0 || y<height)
    {
        gameOver=1;
    }
    if(x==fruiteX && y==fruiteY)
    {
        control3:
    fruiteX=rand()%20;
    if(fruiteX==0)
    {
        goto control3;
    }
    control4:
    fruiteY=rand()%20;
    if(fruiteY==0)
    {
        goto control4;
    }
    }
    score+=5;
}
