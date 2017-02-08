#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
COORD coord={0,0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void draw();
void player1();
void player2();
void check();
void logic();
void resetboard();
void credits();
/* End of function prototype */

char array[9]={'a','b','c','d','e','f','g','h'};
int chance=0;
int flag=0;
/* End of function prototypes */

void draw()
{
        int i,x=30,y=8;
        for(i=0; i<3; i++)
        {
                gotoxy(x,y);
                printf("[ ]");
                x+=4;
        }
        x=30;
        y++;
        for(i=0; i<3; i++)
        {
                gotoxy(x,y);
                printf("[ ]");
                x+=4;
        }
        x=30;
        y++;
        for(i=0; i<3; i++)
        {
                gotoxy(x,y);
                printf("[ ]");
                x+=4;
        }
}
/* End of drawing board function */

void player1()
{
        int x=31,y=9;
        char keyhit='q';
        gotoxy(50,11); printf("your turn player 1 :");
        while(chance<=9 && flag!=1)
        {
start:
                gotoxy(x,y);
                keyhit=getch();
                if(keyhit=='w'  )
                {
                        y--;
                }
                else if(keyhit=='a' )
                {
                        x-=4;
                }
                else if(keyhit=='s' )
                {
                        y++;
                }
                else if(keyhit=='d' )
                {
                        x+=4;
                }
                else if(keyhit=='.')
                {
                        exit(0);
                }
                else if(keyhit=='x')
                {
                        if(x==31 && y==8 && array[0]!='o' && array[0]!='x')
                        {printf("X");
                         array[0]='x';
                         chance++;}
                        else if(x==35 && y==8 && array[1]!='o' && array[1]!='x')
                        {printf("X");
                         array[1]='x';
                         chance++;}
                        else if(x==39 && y==8 && array[2]!='o' && array[2]!='x')
                        {printf("X");
                         array[2]='x';
                         chance++;}
                        else if(x==31 && y==9 && array[3]!='o' && array[3]!='x')
                        {printf("X");
                         array[3]='x';
                         chance++;}
                        else if(x==35 && y==9 && array[4]!='o' && array[4]!='x')
                        {printf("X");
                         array[4]='x';
                         chance++;}
                        else if(x==39 && y==9 && array[5]!='o' && array[5]!='x')
                        {printf("X");
                         array[5]='x';
                         chance++;}
                        else if(x==31 && y==10 && array[6]!='o' && array[6]!='x')
                        {printf("X");
                         array[6]='x';
                         chance++;}
                        else if(x==35 && y==10 && array[7]!='o' && array[7]!='x')
                        {printf("X");
                         array[7]='x';
                         chance++;}
                        else if(x==39 && y==10 && array[8]!='o' && array[8]!='x')
                        {printf("X");
                         array[8]='x';
                         chance++;}
                        else
                        {
                                gotoxy(50,11);  printf("No cheating player 1");
                                goto start;
                        }
                        break;
                }
        }
}
/* End of player 1 chances function */

void player2()
{
        int x=31,y=9;
        char keyhit='q';
        gotoxy(50,11); printf("your turn player 2 :");
        while(chance<=8 && flag!=1)
        {
                gotoxy(x,y);
                keyhit=getch();
                if(keyhit=='w')
                {
                        y--;
                }
                else if(keyhit=='a')
                {
                        x-=4;
                }
                else if(keyhit=='s')
                {
                        y++;
                }
                else if(keyhit=='d')
                {
                        x+=4;
                }
                else if(keyhit=='.')
                {
                        exit(0);
                }
                else if(keyhit=='o')
                {
                        printf("O");
                        if(x==31 && y==8)
                                array[0]='o';
                        else if(x==35 && y==8)
                                array[1]='o';
                        else if(x==39 && y==8)
                                array[2]='o';
                        else if(x==31 && y==9)
                                array[3]='o';
                        else if(x==35 && y==9)
                                array[4]='o';
                        else if(x==39 && y==9)
                                array[5]='o';
                        else if(x==31 && y==10)
                                array[6]='o';
                        else if(x==35 && y==10)
                                array[7]='o';
                        else if(x==39 && y==10)
                                array[8]='o';
                        chance++;
                        break;
                }
        }
}
/* End of player 2 chances function */

void check()
{

        if(array[0]==array[1] && array[1]==array[2])
        {
                if(array[0]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");
                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }

        }
        else if(array[3]==array[4] && array[4]==array[5])
        {
                if(array[3]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");

                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }
        else if(array[6]==array[7] && array[7]==array[8])
        {
                if(array[6]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");

                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }
        else if(array[0]==array[3] && array[3]==array[6])
        {
                if(array[0]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");
                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }
        else if(array[1]==array[4] && array[4]==array[7])
        {
                if(array[1]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");
                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }
        else if(array[2]==array[5] && array[5]==array[8])
        {
                if(array[2]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");
                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");
                }
        }
        else if(array[0]==array[4] && array[4]==array[8])
        {
                if(array[0]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");
                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }
        else if(array[2]==array[4] && array[4]==array[6])
        {
                if(array[2]=='x')
                {
                        flag=1;
                        gotoxy(50,11);
                        printf("player 1 won");

                }
                else
                {
                        flag=1;
                        gotoxy(50,11); printf("player 2 won");

                }
        }

}
/* End of winner checking function */

void turn()
{
        int i=0;

        while(i!=5)
        {
                player1();
                check();
                player2();
                check();
                i++;
                if(flag==0)
                {
                        gotoxy(50,11);
                        printf("Match is draw");

                }
        }
        gotoxy(50,13);
        printf("\ngame over");
        getch();
        system("cls");


        i=0;
}
/* End of turn checking function */

void resetboard()
{
        int i;
        char ch='a';
        for(i=0; i<9; i++)
        {
                array[i]=ch++;
        }
        chance=0;
        flag=0;
}
/* End of resetboard function */

void credits()
{
        system("cls");
        system("color 9f");
        gotoxy(28,8);
        printf("Thank you !! For playing:");
        gotoxy(28,10);
        printf("Made by : Aman Kumar jha & Saumak Dutta");
        gotoxy(38,12);
        printf("B.Tech CSE 1st Year");
        getch();
}

int main()
{
        system("cls");
        system("color f9");
        char another='y';
        while(another=='y')
        {
                draw();
                turn();
                resetboard();
                printf("Do you want to play again?");
                another=getche();
        }
        credits();
        return 0;
}
/* End of main function */
