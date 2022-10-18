#include <iostream>
#include <conio.h> //for kbhit() and getch()
#include <stdlib.h> //for rand()
#include <windows.h>
using namespace std;
bool gameOver = false;
int score=0;
class snake
{
private:
    const int height;
    const int width;
    int x,y;    //for snake position
    int fx,fy; //for fruit
    int change;
public:
    snake():height(20),width(20)
    {
    }
    void setValues()
    {
        x = width/2;
        y = height/2;

        //i don't want fruit on boundry...

        place1:
        fx = rand()%width;
        if(fx == 1)
        {
            goto place1;
        }
        place2:
        fy = rand()%height;
        if(fy == 1)
        {
            goto place2;
        }

    }
    void boundry()
    {
        system("cls");
        int m,w;
        for(m=1;m<=width;m++)
        {
            for(w=1;w<=height;w++)
            {
                if(m==1 || m==width || w==1 || w== height)
                cout<<"*";
                else
                {
                    if(m==x && w==y)
                    {
                        cout<<"O";
                    }
                    else if(m==fx && w==fy)
                    {
                        cout<<"#";
                    }
                    else
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }


    //find which key is pressed so that we can move snake
    void keyHit()
    {
        if(kbhit())
        {
            switch(getch())
            {
            case 'a':
            change = 1;
            break;
        case 's':
            change = 2;
            break;
        case 'w':
            change = 3;
            break;
        case 'z':
            change = 4;
            break;
        case 'e':
            gameOver = true;
            break;
            }
        }
    }


    void setLogic()
    {
        switch(change)
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
        default:
            break;
        }
        if(x==1 || y==1 || x==20 || y==20)
        {
            gameOver = true;
        }

        if(x==fx && y==fy)
        {

        place1:
        fx = rand()%20;
        if(fx == 1)
        {
            goto place1;
        }

        place2:
        fy = rand()%20;
        if(fy == 1)
        {
            goto place2;
        }
        score+=5;
        }
 }
};
int main()
{
    snake s1;
    s1.setValues();
    while(!gameOver){
    s1.boundry();
    s1.keyHit();
    s1.setLogic();
    Sleep(10);
    }

    Sleep(500);
    system("cls");
    cout<<"\n\n\n\t\t\t\tGame Over";
    cout<<"\n\t\t\t\tYour Total score is :"<<score;
    return 0;
}
