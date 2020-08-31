                                                /*APPLICATION OF THE MATH STICK GAME*/

#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;
static int st=21;
void gotoxy(int x,int y)
{
    COORD c;//made in structure
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void cover()
{
    char line=186,box_design[5]={201,205,187,200,188};
    //1  - line
    gotoxy(10,3);
     cout<<box_design[0];
     for(int i=0;i<100;i++)
     cout<<box_design[1];
     cout<<box_design[2];
     // 2  | line
     for(int i=0;i<25;i++){
    gotoxy(10,4+i);
    cout<<line;
    }
    gotoxy(10,29);
    cout<<box_design[3];
   // 3 - line
    for(int i=0;i<100;i++)
       cout<<box_design[1];
       cout<<box_design[4];
       //4 | line
    for(int i=0;i<25;i++){
       gotoxy(111,28-i);
        cout<<line;
    }
}
void help()
{
    system("cls");
    cover();
    gotoxy(10,4);
    cout<<"\n\t\t\t\t*********************************************";
    cout<<"\n\t\t\t\t*********  RULES FOR THE GAME   *************";
    cout<<"\n\t\t\t\t*********************************************";
    cout<<"\n\n\n\n\t\t\t01.THIS GAME IS PLAYED BETWEEN USER AND  COMPUTER.";
    cout<<"\n\n\n\n\t\t\t02.USER CHOOSE 1 TO 4 STICKS AT A TIME.";
    cout<<"\n\n\n\n\t\t\t03.IN LAST ONE STICK IN THE BOX.";
    cout<<"\n\n\n\n\t\t\t04.IF USER PIC LAST STICK THEN IT WILL LOSE GAME.OTHERWISE COMPUTER WILL LOSE.";
}
inline void welcome_line()
{
  gotoxy(10,4);
  cout<<"\n\n\n\t\t\t   *****************************************************************";
  cout<<"\n\t\t\t   *********  WELCOME TO THE MATH STICK MINI PROJECT   *************";
  cout<<"\n\t\t\t   *****************************************************************";
}
int menu()
{
   int x;
   system("cls");
   cover();
   welcome_line();
   cout<<"\n\n\t\t01. PLAY GAME.";
   cout<<"\n\n\t\t02. HELP.";
   cout<<"\n\n\t\t03. EXIT.";
   cout<<"\n\n\t\tENTER YOUR CHOICE : ";
   cin>>x;
   return x;
}
void box()
{
    char ch=177,line=186,box_design[5]={201,205,187,200,188};
    for(int i=0;i<67;i++){    //  1 horizontal line
        gotoxy(30+i,8);
        cout<<ch<<"   ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){  // left side line
        gotoxy(30,9+i);
        cout<<ch<<"   ";
    }
    cout<<endl;
    for(int i=1;i<st+1;i++){  //  sticks
        gotoxy(31+i*3,10);
        cout<<line<<"   ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){   // right side line
        gotoxy(94,9+i);
        cout<<"  "<<ch;
    }
    cout<<endl;
    for(int i=0;i<67;i++){  // 2 horizontal line
        gotoxy(30+i,12);
        cout<<ch<<"   ";
    }
    cout<<endl;
    // sticks count box
    gotoxy(90,18);
    cout<<"PRESENT STICKS";
    gotoxy(94,20);
    cout<<box_design[0]<<box_design[1]<<box_design[1]<<box_design[1]<<box_design[1]<<box_design[2];
    gotoxy(94,21);
    cout<<line;
    gotoxy(96,21);
    cout<<setw(2)<<st<<" "<<line;
    gotoxy(94,22);
    cout<<box_design[3]<<box_design[1]<<box_design[1]<<box_design[1]<<box_design[1]<<box_design[4];
}
void game()
{
  int i,j,k,h;
  while(1){
        st=21;
  switch(menu()){
      case 1:
  while(st>1)
  {
      system("cls");
      cover();
      gotoxy(28,4);
      cout<<"\n\n\t\t\t\t     TOTAL 21 STICKS ARE IN THIS BOX.CHOOSE 1 TO 4 STICKS.";
      box();
      cout<<"\n\t\t\t\tPIC YOUR STICKS : ";
      cin>>i;
  switch(i){
    case 1:
        st=st-i;
        j=5-i;
        cout<<"\n\n\t\t\t\tCOMPUTER CHOOSE "<<j<<" STICKS";
        st=st-j;
        _getche();
        break;
    case 2:
        st=st-i;
        j=5-i;
        cout<<"\n\n\t\t\t\tCOMPUTER CHOOSE "<<j<<" STICKS";
        st=st-j;
        _getche();
        break;
    case 3:
        st=st-i;
        j=5-i;
        cout<<"\n\n\t\t\t\tCOMPUTER CHOOSE "<<j<<" STICKS";
        st=st-j;
        _getche();
        break;
    case 4:
        st=st-i;
        j=5-i;
        cout<<"\n\n\t\t\t\tCOMPUTER CHOOSE "<<j<<" STICKS";
        st=st-j;
        _getche();
        break;
    default:
        cout<<"\n\n\t\t\t\tPLEASE CHOOSE STICKS BETWEEN 1 TO 4.";
        _getche();
        break;
       }
}
 system("cls");
 cover();
 box();
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t    OOOPPS ONLY ONE STICK IN THE BOX. YOU ARE LOSS GAME.";
 cout<<"\n\n\t\t\t\t\t\t GAME OVER.";
 cout<<"\n\n\t\t\t\t\t   BETTER LUCK NEXT TIME.";
        _getche();
        break;
    case 2:
        help();
        _getche();
        break;
    case 3:
        gotoxy(113,30);
        exit(0);
    default:
        cout<<"\n\n\t\t\t  PLEASE SElECT APPROPRIATE CHOICE.";
        _getche();
        break;
     }
   }
}
int main()
{
    game();
    return 0;
}


