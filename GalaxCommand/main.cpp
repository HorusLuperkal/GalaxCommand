#include <iostream>
#include <fstream>
#include <locale>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <PollyponSet.h>
#include <thread>
#define GamerOne "Игрок 1"
#define GamerTwo "Игрок 2"

using namespace std;



int main()
{
    int colorFl, areaGame[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            areaGame[i][j]=3;
        }
    }
    int PlayerOne = 1;
    char command;
    setlocale(LC_CTYPE,"rus");
    PollyponSet Set;
    for(int i=0;i<99;i++)
    {
        command=getch();
        if(PlayerOne!=0)
            {
                colorFl=12;
                PlayerOne=0;
            }
        else
        {
            PlayerOne=1;
            colorFl=9;
        }
        switch(command)
        {
        case '1':
            if(areaGame[0][0]==3){
            Set.SetColorOnePoliggon(colorFl);
            areaGame[0][0]=PlayerOne;
            }
            break;
        case '2':
            if(areaGame[0][1]==3){
            Set.SetColorTwoPoliggon(colorFl);
            areaGame[0][1]=PlayerOne;
            }
            break;
        case '3':
            if(areaGame[0][2]==3){
            Set.SetColorThreePoliggon(colorFl);
            areaGame[0][2]=PlayerOne;
            }
            break;
        case '4':
            if(areaGame[1][0]==3){
            Set.SetColorFourPoliggon(colorFl);
            areaGame[1][0]=PlayerOne;
            }
            break;
        case '5':
            if(areaGame[1][1]==3){
            Set.SetColorFivePoliggon(colorFl);
            areaGame[1][1]=PlayerOne;
            }
            break;
        case '6':
            if(areaGame[1][2]==3){
            Set.SetColorSixPoliggon(colorFl);
            areaGame[1][2]=PlayerOne;
            }
            break;
        case '7':
            if(areaGame[2][0]==3){
            Set.SetColorSevenPoliggon(colorFl);
            areaGame[2][0]=PlayerOne;
            }
            break;
        case '8':
            if(areaGame[2][1]==3){
            Set.SetColorEightPoliggon(colorFl);
            areaGame[2][1]=PlayerOne;
            }
            break;
        case '9':
            if(areaGame[2][2]==3){
            Set.SetColorNinePoliggon(colorFl);
            areaGame[2][2]=PlayerOne;
            }
            break;
        }
    }
    Set.SetColor(0,15);
    Set.SetCord(16,16);
    return 0;
}
