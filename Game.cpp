//---Number Guessing game
#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>

 void main()
  {
   clrscr();
   int s,e,num,tries=5,in,flag=0;

   cout<<"Enter the Starting Number of Game: ";//---staring number
   cin>> s;
   cout<<"Enter the Ending Number of the Game: ";//---ending number
   cin>>e;

   srand(time(NULL));
   num= s+rand()%(e-s+1);

   while(tries >=1)
    {
     cout<<"\nPlease Guess any Number Between "<<s<<" and "<<e<<" :\n";
     cin>>in;
     if(num==in)
      {
       int gd=0,gm=0;
       initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
       cout<<"Hurry!\nGuess Successfully";
       flag=1;
       break;
      }
     else if(num<in)
      {
       cout<<in<<" is Greater than Guessed Number\n";
      }
     else
      {
       cout<<in<<" is Less then Guessed Number \n";
      }
     tries--;
     cout<<"\nYour Remaining Tries are "<<tries;
    }
    if(flag==0)
     {
     int gd=DETECT,gm=DETECT;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     cout<<"\nGAME OVER! \nYou are Losser\n";
     }
    getch();
   }
