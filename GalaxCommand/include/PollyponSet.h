#ifndef POLLYPONSET_H
#define POLLYPONSET_H
#include <iostream>
#include <fstream>
#include <locale>
#include <conio.h>
#include <windows.h>

using namespace std;

class PollyponSet
{
    public:
        PollyponSet();
        virtual ~PollyponSet();
void SetCord(int x, int y)
{
    COORD cord;
    cord.X=x;
    cord.Y=y;
    SetConsoleCursorPosition(hConsole, cord);
}

void SetColor(int bg, int txt)
{
    SetConsoleTextAttribute(hConsole, (WORD) ((bg<<4)| txt));
}

void SetColorOnePoliggon(int Color)
{
    SetCord(0,0);
    SetColor(Color,Color);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(4,2);
    cout<<"#";
}

void SetColorTwoPoliggon(int Color)
{
    SetCord(5,0);
    SetColor(Color,Color);
    for(int i=0;i<3;i++)
    {
        for(int j=5;j<10;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(9,2);
    cout<<"#";
}

void SetColorThreePoliggon(int Color)
{
    SetCord(10,0);
    SetColor(Color,Color);
    for(int i=0;i<3;i++)
    {
        for(int j=10;j<15;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(14,2);
    cout<<"#";
}

void SetColorFourPoliggon(int Color)
{
    SetCord(0,3);
    SetColor(Color,Color);
    for(int i=3;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(4,5);
    cout<<"#";
}

void SetColorFivePoliggon(int Color)
{
    SetCord(5,3);
    SetColor(Color,Color);
    for(int i=3;i<6;i++)
    {
        for(int j=5;j<10;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(9,5);
    cout<<"#";
}

void SetColorSixPoliggon(int Color)
{
    SetCord(10,3);
    SetColor(Color,Color);
    for(int i=3;i<6;i++)
    {
        for(int j=10;j<15;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(14,5);
    cout<<"#";
}

void SetColorSevenPoliggon(int Color)
{
    SetCord(0,6);
    SetColor(Color,Color);
    for(int i=6;i<9;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(4,8);
    cout<<"#";
}

void SetColorEightPoliggon(int Color)
{
    SetCord(5,6);
    SetColor(Color,Color);
    for(int i=6;i<9;i++)
    {
        for(int j=5;j<10;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(9,8);
    cout<<"#";
}

void SetColorNinePoliggon(int Color)
{
    SetCord(10,6);
    SetColor(Color,Color);
    for(int i=6;i<9;i++)
    {
        for(int j=10;j<15;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(14,8);
    cout<<"#";
}

void shahmatDosk()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<15;j++)
        {
            if(i<3 && j<5)
            {
                SetColor(15,15);
                cout<<"#";
            }
            else if(i<3&& j>4&&j<9)
            {
                SetColor(0,0);
                cout<<"#";
            }
            else if(i<3&& j>9 &&j<15)
            {
                SetColor(15,15);
                cout<<"#";
            }
            else if(i>=3 && i<6 && j>4&&j<10)
            {
                SetColor(15,15);
                cout<<"#";
            }
            else if(i>=6 && j<5)
            {
                SetColor(15,15);
                cout<<"#";
            }
            else if(i>=6 && j>9&&j<15)
            {
                SetColor(15,15);
                cout<<"#";
            }
            else
            {
                SetColor(0,0);
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void SetPolyCastomColor(int x1,int y1,int x2,int y2,int color)
{
    SetCord(x1,y1);
    SetColor(color,color);
    for(int i=x1;i<x2;i++)
    {
        for(int j=y1;j<y2;j++)
        {
           cout<<"#";
           SetCord(j,i);
        }
    }
    SetCord(x2-1,y2-1);
    cout<<"#";
}
    protected:

    private:
        HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

};

#endif // POLLYPONSET_H
