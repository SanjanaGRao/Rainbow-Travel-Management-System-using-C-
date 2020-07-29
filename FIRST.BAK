//Rainbow Travels main.
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

#include"H:PROJ-M~1\COVER.CPP"
#include"H:PROJ-M~1\ABTUS.CPP"
#include"H:PROJ-M~1\TRAVEL~1.CPP"
#include"H:PROJ-M~1\FEEDBACK.CPP"
#include"H:PROJ-M~1\CONF.CPP"


void main()
{
clrscr();
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
cleardevice();
start1();
//pass();
again:
cleardevice();
pag();
int ch;
ch=getch();
if(ch==13)
 {
   cleardevice();
   ABTUS();
   cleardevice();
   while(!kbhit())
     goto again;
 }
else
if(ch==9)
  {
    setfillstyle(1,0);
    fillellipse(60,203,8,8);
    outtextxy(57,224,"");
  }
int cha;
cha=getch();
if(cha==13)
  {
    cleardevice();
    TRAVEL();
    while(!kbhit())
    goto again;
  }
else
if(cha==9)
  {
    setfillstyle(1,0);
    fillellipse(60,228,8,8);
    outtextxy(57,249,"");
  }
int chc;
chc=getch();
if(chc==13)
  {
    cleardevice();
    confe();
    while(!kbhit())
    goto again;
  }
else
if(chc==9)
  {
    setfillstyle(1,0);
    fillellipse(60,253,8,8);
    outtextxy(57,279,"");
  }
int c;
c=getch();
if(c==13)
  {
    cleardevice();
    int gd= DETECT, gm;
    initgraph(&gd, &gm, " ");

    feedbacks();
    while(!kbhit())
      goto again;
  }
else
if(c==9)
  {
    setfillstyle(1,0);
    fillellipse(60,283,8,8);
    outtextxy(57,306,"");
  }
int lo;
lo=getch();
if(lo==9)
  goto again;
else
if(lo==13)
exit();
getch();
}
