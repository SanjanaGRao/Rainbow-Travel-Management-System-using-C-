#include <iostream.h>
#include <graphics.h>
#include <iomanip.h>
#include <fstream.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <process.h>
#include <ctype.h>
#include <math.h>


void border()
{
  setbkcolor(BLACK);
  setcolor(GREEN);
  setcolor(9);
  rectangle(0,0,639,479);
  rectangle(1,1,638,478);
  rectangle(2,2,637,477);
  rectangle(3,3,636,476);
  rectangle(5,5,634,474);
  rectangle(6,6,634,473);
}



 void rainbow()
 {
 clrscr();
 textcolor(RED);
textbackground(YELLOW);
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
       for(i=30;i<300;i++)
	{
		delay(10);
		setcolor(i/7);
		arc(x,y,0,180,i-10);
	}
	for(i=30;i<300;i++)
	{
		delay(10);
		setcolor(i/7);
		arc(x,y,0,180,i+10);
	}

gotoxy(25,25);
border();
outtextxy(350,280,"PRESS ANY KEY TO CONTINUE..  ");
textcolor(GREEN);
gotoxy(13,20)  ;
getch();
}







void start1()
{   rainbow();
  setbkcolor(BLUE);
  setcolor(13);
  settextstyle(7,0,6);

  for(int j=-1200;j<=75;j++)
   {
     cleardevice();
     outtextxy(j,120,"WELCOME TO ");
     outtextxy(j,180,"RAINBOW TRAVELS...   ");
     delay(3);
   }
   border();
   getch();
}

void exit()
{
  setbkcolor(BLACK);
  setcolor(13);
  textmode(1);
  for(int ai=0,aj=0, ak=34,al=33;ai<10,aj<17,ak>10,al>17;ai++,aj++,ak--,al--)
   {
     clrscr();
     gotoxy(ai-1, 8);
     cout << "   Thanks   ";

     gotoxy(aj, 12);
     cout << " For using";
     gotoxy(ak-4, 16);
     cout << "   This";


     gotoxy(al-2, 20);
     cout << " Project \1";
     delay(170);
   }
  //end of for loop
  gotoxy(9, 9);
  cout << " **********************";

  gotoxy(9, 13);
  cout << " **********************";

  gotoxy(9, 17);
  cout << " **********************";

  gotoxy(12, 21);
  cout << " ***************";
  }


////////////////////////Main page///////////////////////////////
void pag()
{
  border();
  setcolor(13);
  settextstyle(6,0,2);
  outtextxy(120,420,"Press TAB to select desired option. . . . . ");
  setbkcolor(BLACK);
  settextstyle(1,0,0);
  outtextxy(240,20,"Welcome");
  settextstyle(1,0,0);
  outtextxy(290,60,"To");
  settextstyle(5,0,5);
  outtextxy(150,90,"Rainbow Travels");
  settextstyle(0,0,1);
  setfillstyle(1,0);
  fillellipse(60,203,8,8);
  outtextxy(57,199,"");

  outtextxy(80,200,"ABOUT US ");
  settextstyle(0,0,1);
  setfillstyle(1,0);
  fillellipse(60,228,8,8);

  outtextxy(80,225,"TRAVEL BOOKINGS ");
  settextstyle(0,0,1);
  setfillstyle(1,0);
  fillellipse(60,253,8,8);

  outtextxy(80,250,"CONFERANCE HALL BOOKINGS ");
  settextstyle(0,0,1);
  setfillstyle(1,0);
  fillellipse(60,283,8,8);

  outtextxy(80,280,"FEEDBACKS AND FUN GAME ");
  settextstyle(0,0,1);
  setfillstyle(1,0);
  fillellipse(60,310,8,8);
  outtextxy(80,313,"EXIT");

}