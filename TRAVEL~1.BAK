#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<ctype.h>
#include<stdlib.h>
#include"H:PROJ-M~1\HOTEL.CPP"
class travel
{ char place[30];
  char from[50], to[50];
  int dday, dmonth, dyear, rday, rmonth, ryear, Class, airline, nop, SNo, price;
   int  age[20];
  char name[20][20];
  char add[50];
  char mob[15];
  char sex[20];
  char passnum[10][10];
  char email[30];
  int num;
  int note[20];
int number,seatnumber;
int ch[21];

 public:
 travel()

 {
 cout<<"\n\n\t\tcontructing...";
 }
 void inflight();

 void showtransport();
  // void viewtrans();
   //void showtransportrec();
  // void deltransportrec();
  // void searchtransportrec();
  // void edittransportdata();
  // void transfertransportdata();
//   void restr();
  // void transfertransportdata1();

 void chooseairline(int,int);            /////////////////////////////////////////
 void personaldetails();

 void busbooking();
 void print(int,int);
 void showbus();

 ~travel()
 { cout<<"\n\n\t\tdestructing...";
 }

};
 travel t;

 void travel:: inflight()
 {
  char c='N';
 while(c!='Y')
{clrscr();
   cout<<"\n\n\n\t\tFROM : 1.Bangalore,Karnataka "
       <<"\n\n\t\t        2.Mangalore,Karnataka "
       <<"\n\n\t\t        3.Mumbai,Maharastra "
       <<"\n\n\t\t        4.Chennai,Tamil Nadu "
       <<"\n\n\t\t\tTYPE YOUR CHOICE : ";
 gets(from);

   cout<<"\n\n\n\t\tTO : 1.Bangalore,Karnataka "
       <<"\n\n\t\t      2.Mangalore,Karnataka "
       <<"\n\n\t\t      3.Mumbai,Maharastra "
       <<"\n\n\t\t      4.Chennai,Tamil Nadu "
       <<"\n\n\t\t\tTYPE YOUR CHOICE : ";
 gets(to);

   cout<<"\n\n\t\tNUMBER OF PASSENGERS : ";
   cin>>nop;
      //adult,child,infant
     clrscr();
     cout<<"\n\n\t DATE OF DEPARTURE ";
	     cout<<"\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
	     cout<<"\n\n\t\tEnter your preferred date of departure: ";
	     cin>>dday;
	     gotoxy(59,7);
	     cout<<"/";
	     cin>>dmonth;
	     gotoxy(62,7);
	     cout<<"/";
	     cin>>dyear;
    clrscr();
    cout<<"\n\n\t RETURN DATE ";
	     cout<<"\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
	     cout<<"\n\n\t\t\t\b\bEnter your preferred return date: ";
	     cin>>rday;
	     gotoxy(59,7);
	     cout<<"/";
	     cin>>rmonth;
	     gotoxy(62,7);
	     cout<<"/";
	     cin>>ryear;
    clrscr();
    cout<<"\n\n\t\tCLASS : 1.ECONOMY  2.BUISNESS "
	<<"\n\n\t\t\tENTER YOUR OPTION between(1-2) : ";
    cin>>Class;
    cout<<"\n\n\t\t\tAIRLINE PREFERENCE :"
	<<"\n\n\t\t1.Air India "
	<<"\n\n\t\t2.Jet Airways"
	<<"\n\n\t\t3.Go Air"
      //	<<"\n\n\t\t4.Spice Jet"
       //	<<"\n\n\t\t5.Indigo"
	<<"\n\n\t\t\tENTER YOUR OPTION between(1-3) : ";
    cin>>airline;
 clrscr();
 chooseairline(airline,Class);
 clrscr();
 personaldetails();
 cout<<"\n\n\t\tARE ALL THE DETAILS CORRECT (Y/N) :";
 cin>>c;
 c=toupper(c);
 }
 }

 int cnt11=24, cnt12=6, cnt21=26, cnt22=6, cnt31=26, cnt32=6;
 void travel:: chooseairline(int airline, int Class)            /////////////////////////////////////////
 { int SNo;
 if(airline==1&&Class==1)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"A-354"<<setw(10)<<"04:00 AM"<<setw(10)<<"05:12 AM"<<setw(12)<<"3,000";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"A-209"<<setw(10)<<"17:10 PM"<<setw(10)<<"18:34 PM"<<setw(12)<<"4,340";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"C-116"<<setw(10)<<"12:05 PM"<<setw(10)<<"14:56 PM"<<setw(12)<<"5,226";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt11)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt11=cnt11-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt11;
	    }
	    else {if(nop>cnt11)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=3000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt11)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt11=cnt11-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt11;
	    }
	    else {if(nop>cnt11)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=4340;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt11)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt11=cnt11-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt11;
	    }
	    else {if(nop>cnt11)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=5226;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }
   }

 if(airline==1&&Class==1)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"A-354"<<setw(10)<<"06:00 AM"<<setw(10)<<"07:12 AM"<<setw(12)<<"30,000";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"F-209"<<setw(10)<<"09:10 AM"<<setw(10)<<"10:34 AM"<<setw(12)<<"43,040";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"C-116"<<setw(10)<<"19:05 PM"<<setw(10)<<"20:56 PM"<<setw(12)<<"50,226";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt12)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt12=cnt12-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt12;
	    }
	    else {if(nop>cnt12)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=30000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt12)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt12=cnt12-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt12;
	    }
	    else {if(nop>cnt12)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=43040;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt12)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt12=cnt12-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt12;
	    }
	    else {if(nop>cnt12)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=50000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }

  }
 if(airline==2&&Class==1)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"A-354"<<setw(10)<<"06:00 AM"<<setw(10)<<"08:12 AM"<<setw(12)<<"6,000";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"F-209"<<setw(10)<<"09:10 AM"<<setw(10)<<"18:34 PM"<<setw(12)<<"7,340";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"C-116"<<setw(10)<<"12:05 PM"<<setw(10)<<"20:56 PM"<<setw(12)<<"8,226";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt21)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt21=cnt21-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt21;
	    }
	    else {if(nop>cnt21)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=6000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt21)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt21=cnt21-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt21;
	    }
	    else {if(nop>cnt21)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=7340;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt21)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt21=cnt21-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt21;
	    }
	    else {if(nop>cnt21)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=8226;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }
 }
 if(airline==2&&Class==2)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"A-354"<<setw(10)<<"06:00 AM"<<setw(10)<<"08:12 AM"<<setw(12)<<"10,000";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"F-209"<<setw(10)<<"11:10 AM"<<setw(10)<<"13:34 PM"<<setw(12)<<"30,340";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"C-116"<<setw(10)<<"12:05 PM"<<setw(10)<<"13:56 PM"<<setw(12)<<"50,226";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt22)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt22=cnt22-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt22;
	    }
	    else {if(nop>cnt22)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=10000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt22)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt22=cnt22-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt22;
	    }
	    else {if(nop>cnt22)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=30340;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt22)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt22=cnt22-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt22;
	    }
	    else {if(nop>cnt22)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=50226;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }
  }
  if(airline==3&&Class==1)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"A-354"<<setw(10)<<"06:00 AM"<<setw(10)<<"08:12 AM"<<setw(12)<<"9,000";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"E-209"<<setw(10)<<"09:10 AM"<<setw(10)<<"10:34 AM"<<setw(12)<<"6,500";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"B-116"<<setw(10)<<"12:05 PM"<<setw(10)<<"15:56 PM"<<setw(12)<<"8,000";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt31)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt31=cnt31-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt31;
	    }
	    else {if(nop>cnt31)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=9000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt31)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt31=cnt31-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt31;
	    }
	    else {if(nop>cnt31)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=6500;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt31)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt31=cnt31-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt31;
	    }
	    else {if(nop>cnt31)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=8000;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }
  }
  if(airline==3&&Class==2)
   { cout<< "\n\n\t\tFROM : "<<from<<"\tTO : "<<to;
     cout<<"\n\n"<<setw(10)<<"SNo."<<setw(10)<<"AIRLINE"<<setw(10)<<"DEPARTURE"<<setw(10)<<"ARRIVAL"<<setw(12)<<"  PRICE(Rs)/SEAT";
     cout<<"\n\n"<<setw(10)<<"1."<<setw(10)<<"B-350"<<setw(10)<<"01:00 AM"<<setw(10)<<"3:12 AM"<<setw(12)<<"10,500";
     cout<<"\n\n"<<setw(10)<<"2."<<setw(10)<<"A-109"<<setw(10)<<"04:10 AM"<<setw(10)<<"6:34 AM"<<setw(12)<<"20,300";
     cout<<"\n\n"<<setw(10)<<"3."<<setw(10)<<"C-146"<<setw(10)<<"19:05 PM"<<setw(10)<<"20:56 PM"<<setw(12)<<"9,500";
     cout<<"\n\n\t\tENTER YOUR OPTION : ";
     cin>>SNo;
     switch(SNo)
     {
     case 1:
	    if(nop<=cnt32)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt32=cnt32-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt32;
	    }
	    else {if(nop>cnt32)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=10500;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	     break;
     case 2:  if(nop<=cnt32)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt32=cnt32-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt32;
	    }
	    else {if(nop>cnt32)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=20300;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;


     case 3: if(nop<=cnt32)
	    {//cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt1;
	    cnt32=cnt32-nop;
	    cout<<"\n\n\t\tYOU HAVE BOOKED "<<nop<<" NO. OF TICKETS";
	    cout<<"\n\n\t\tNUMBER OF SEATS AVAILABLE : "<<cnt32;
	    }
	    else {if(nop>cnt32)
	    cout<<"\n\n\t\tSORRY NO SEATS AVAILABLE..."
	    <<"\n\n\t\tPLEASE TRY SOME OTHER AIRLINE";    }
	    price=9500;
	    cout<<"\n\n\t\tYOU HAVE TO PAY RUPEES "<<price*nop;
	    break;
     default:cout<<"\n\n\t\tPLEASE ENTER OPTION between(1- ) : ";

     }
  }
 }//
 void travel:: personaldetails()
 {  //num=0;
 // clrscr();
  cout<<"\n\n\t\t\t\t PERSONAL DETAILS \n";
  cout<<"\t\t\t\t~~~~~~~~~~~~~~\n";
  cout<<"\n\t\t* PLEASE FILL IN THE DETAILS : " ;

  cout<<"\n\n\t\t\t1.ADDRESS : ";
  gets(add);
  cout<<"\n\t\t\t2.CONTACT NUMBER(10 Digit Mobile Number) : ";
  gets(mob);
  cout<<"\n\t\t\t3.ENTER EMAIL-ID : ";
  gets(email);
  clrscr();
  if(nop>0)
  {
    cout<<"\n\n\t\tPLEASE ENTER THE DETAILS OF EACH PASSENGER: "<<endl;

    for(int i=0;i<nop;i++)
    {
      cout<<endl<<"\n\t\tPassenger "<<i+1;
      cout<<"\n\t\t~~~~~~~~";
      cout<<"\n\n\t\t Name: ";
      gets(name[i]);
      cout<<"\n\t\tAge: ";
      cin>>age[i];
      cout<<"\n\t\tSex (M/F): ";
      cin>>sex[i];
      cout<<"\n\t\tPassport Number: ";
      gets(passnum[i]);

    }
  }
}
void travel:: showtransport()
 {  //num=0;
 // clrscr();
  cout<<"\n\n\t\t\t\t IMPORTANT DETAILS \n";
  cout<<"\t\t\t\t~~~~~~~~~~~~~~\n";

  cout<<"\n\n\t\t\t1.ADDRESS : "<<add;
  cout<<"\n\t\t\t2.CONTACT NUMBER(10 Digit Mobile Number) : "<<mob;
  cout<<"\n\t\t\t3.ENTER EMAIL-ID : "<<email;
  clrscr();
    cout<<"\n\n\t\tEACH PASSENGER DETAILS: "<<endl;

    for(int i=0;i<nop;i++)
    {
      cout<<endl<<"\n\t\tPassenger "<<i+1;
      cout<<"\n\t\t~~~~~~~~";
      cout<<"\n\n\t\t Name: "<<name;
      cout<<"\n\t\tAge: "<<age[i];
      cout<<"\n\t\tSex (M/F): "<<sex[i];
      cout<<"\n\t\tPassport Number: "<<passnum[i];

}
}

//store the transport records
/*void travel::viewtrans()
{
int option;
 while(option!=5)
 {
  clrscr();
  gotoxy(24,5);cout<<"TRANSPORT RESERVATION INFORMATION...";
  gotoxy(25,10);cout<<"choose.....";
  gotoxy(25,12);cout<<"1: View transport reservation records";
  gotoxy(25,14);cout<<"2: Delete a particular record";
  gotoxy(25,16);cout<<"3: Search for a record";
  gotoxy(25,18);cout<<"4: Edit a record ";
  gotoxy(25,20);cout<<"5: Exit...     ";
  cin>>option;
  switch(option)
   {
   case 1:showtransportrec();
	  break;
   case 2:deltransportrec();
	  break;
   case 3:searchtransportrec();
	  break;
   case 4:edittransportdata();
	  break;
   }
 }
}



void travel::showtransportrec()
{
fstream file1;
file1.open("C:\\TRAVEL.DAT",ios::binary|ios::in);
 while(file1.read((char*)&t,sizeof (t)))
 t.showtransport();
file1.close();
}


void travel::deltransportrec()
{
clrscr();
  char delname[20];
  gotoxy(20,5);cout<<"Enter name to delete record for...";
  gotoxy(30,7);gets(delname);
  strupr(delname);
    fstream  file2,file3;
    int dele=0;
    file2.open("C:\\TRAVEL.DAT",ios::binary | ios::in);
    file3.open("temp3.dat",ios::binary | ios::out );
       while(file2.read ((char*)&t,sizeof (t)))
       {
       for(int i=0; i<nop; i++)
       if ((strcmpi(name[i],delname))!=0)
       file3.write((char*)&t,sizeof (t));
       else
       dele++;
       }
       if(dele!=0)
       cout<<endl<<"                    ...Deleted...";
       else
       cout<<endl<<"                  Record not found..";
       getch();
       file2.close();
       file3.close();
       transfertransportdata();
}



void travel::transfertransportdata()
{
fstream oldfile1,newfile1;
oldfile1.open("temp3.dat",ios::binary | ios::in);
newfile1.open("C:\\TRAVEL.DAT",ios::binary | ios::out);
     while(oldfile1.read((char*)&t,sizeof(t)))
     newfile1.write((char*)&t,sizeof (t));
oldfile1.close();
newfile1.close();
}



void travel::searchtransportrec()
{
clrscr();
 char sename[20];
 gotoxy(20,5);cout<<"Enter Name to search for..";
 gotoxy(25,7);gets(sename);
 strupr(sename);
    fstream file4;
    file4.open("C:\\TRAVEL.DAT",ios::binary | ios::in);
    int serch=0;
       while(file4.read((char*)&t,sizeof (t)))
       { for(int i=0; i<nop; i++)
	if(strcmp(name[i],sename)==0)
	{
	serch++;
	t.showtransport();
	}
       }
       if(serch==0)
       cout<<"                       No Record Exists";
       file4.close();
       getch();
}


void travel::edittransportdata()
{
clrscr();
  char edname[30];
  int ede1=0;
  gotoxy(20,5);cout<<"Enter Name to Edit Record for...";
  gotoxy(25,7);gets(edname);
  strupr(edname);
  fstream file5,file6;
  file5.open("C:\\TRAVEL.DAT",ios::binary | ios::in) ;
  file6.open("temp2.dat",ios::binary | ios::out ) ;
   while(file5.read((char*)&t,sizeof(t)))
  { for(int i=0; i<nop; i++)
   if (strcmp (edname,name[i])==0)
   {
    inflight();
    ede1++;
   }
   file6.write((char*)&t,sizeof (t));
  }
if(ede1==0)
{
gotoxy(25,17);cout<<"RECORD DOESNT EXIST!!!!";
}
getch();
file5.close();
file6.close();

transfertransportdata1();
}


void travel::transfertransportdata1()
{
fstream oldfile3,newfile3;
oldfile3.open("temp2.dat",ios::binary | ios::in);
newfile3.open("C:\\TRAVEL.DAT",ios::binary | ios::out);
  while(oldfile3.read((char*)&t,sizeof(t)))
  newfile3.write((char*)&t,sizeof (t));
oldfile3.close();
newfile3.close();
} */



void travel::print(int a,int b)
{

    int seatnumber,number;
 repeat:   cout<<"Enter number of seats to be reserved\n";
    cin>>number;
    cout<<"Enter seat number of your choice or if many enter the first seat number\n";
    cin>>seatnumber;
    if(note[seatnumber]==1)
    {
	cout<<"Seat reserved. Choose another\n";
	goto repeat;
    }
    clrscr();
    cout<<"\t\tConfirm the reservation\n";
    cout<<"\t\t------------------------";
    cout<<"\n\n\n\n\n";
    if(a==1&&b==1)
    {
	cout<<"\t\tBus:MB01\n";
	cout<<"\t\tArival:08:00\n";
	cout<<"\t\tDeparture:16:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{
check1:if(note[seatnumber]==1)
{
    seatnumber++;
    goto check1;

}
	   else{

	cout<<seatnumber<<" "; ch[seatnumber]=1;
	    seatnumber++;
	}
	}
    }
 else if(a==1&&b==2)
    {
	cout<<"\t\tBus:MB02\n";
	cout<<"\t\tArival:13:00\n";
	cout<<"\t\tDeparture:04:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{
check2: if(note[seatnumber]==1)
{
    seatnumber++; goto check2;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" "; ch[seatnumber]='1';
	    seatnumber++;
	}
	}
}
 else if(a==1&&b==3)
    {
	cout<<"\t\tBus:MB03\n";
	cout<<"\t\tArival:21:00\n";
	cout<<"\t\tDeparture:09:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

   check3:         if(note[seatnumber]==1)
{
    seatnumber++; goto check3;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;            seatnumber++;
	}
	}
}
 else if(a==2&&b==1)
    {
	cout<<"\t\tBus:HP01\n";
	cout<<"\t\tArival:08:00\n";
	cout<<"\t\tDeparture:16:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

       check4:     if(note[seatnumber]==1)
{
    seatnumber++; goto check4;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 else if(a==2&&b==2)
    {
	cout<<"\t\tBus:HP02\n";
	cout<<"\t\tArival:21:00\n";
	cout<<"\t\tDeparture:09:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

      check5:      if(note[seatnumber]==1)
{
    seatnumber++; goto check5;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 if(a==3&&b==1)
    {
	cout<<"\t\tBus:JD01\n";
	cout<<"\t\tArival:08:00\n";
	cout<<"\t\tDeparture:16:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

      check6:      if(note[seatnumber]==1)
{
    seatnumber++; goto check6;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 if(a==3&&b==2)
    {
	cout<<"\t\tBus:JD02\n";
	cout<<"\t\tArival:13:00\n";
	cout<<"\t\tDeparture:04:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

      check7:      if(note[seatnumber]==1)
{
    seatnumber++; goto check7;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 if(a==3&&b==3)
    {
	cout<<"\t\tBus:JD03\n";
	cout<<"\t\tArival:15:00\n";
	cout<<"\t\tDeparture:06:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

     check8:       if(note[seatnumber]==1)
{
    seatnumber++; goto check8;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";   ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 if(a==3&&b==4)
    {
	cout<<"\t\tBus:JD04\n";
	cout<<"\t\tArival:21:00\n";
	cout<<"\t\tDeparture:09:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

      check9:     if(note[seatnumber]==1)
{
    seatnumber++; goto check9;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";  ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
 if(a==4&&b==1)
    {
	cout<<"\t\tBus:UM01\n";
	cout<<"\t\tArival:21:00\n";
	cout<<"\t\tDeparture:09:00\n";
	cout<<"\t\tSeats reserved:";
	for(int i=0;i<number;i++)
	{

	  check:  if(note[seatnumber]==1)
{
    seatnumber++; goto check;
    cout<<seatnumber<<" ";
}
	   else{

	cout<<seatnumber<<" ";   ch[seatnumber]=1;
	    seatnumber++;
	}
	}
}
}
void travel::busbooking()
{
 int a,b;
again: clrscr();
   cout<<"\t\t-------------------------------------";
   cout<<"\n\t\t!ONLINE BUS RESERVATION PORTAL!\n";
   cout<<"\t\t-------------------------------------";
   cout<<"\t\t\n\n\nENTER YOUR CHOICE";
   cout<<"\n\t\t1.MANGALORE-BANGALORE";
   cout<<"\n\t\t2.HYDERABAD-PUNE";
   cout<<"\n\t\t3.TRIVANDRUM-MADIKERI";
   cout<<"\n\t\t4.UDUPI-MYSORE";
   cout<<"\n\t\t5.Exit\n";
   cin>>a;
   if(a==1)
   {
  clrscr();
	cout<<"\nBUSES AVAILABLE\t\tARRIVAL\t\tDEPARTURE\n";
	 cout<<"-------------------------------------------";
	cout<<"\n1.MB01\t\t08:00\t\t16:00";
	cout<<"\n2.MB02\t\t13:00\t\t04:00";
	cout<<"\n3.MB03\t\t21:00\t\t09:00";
	cout<<"\nCHOOSE ANY\n";
	cin>>b;
	switch(b)
	{
	case 1:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
	       if(i==3||i==8||i==15||i==17||i==11||ch[i]==1)
		{    ch[i]=1;
		     cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
	{         ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}

	    }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 2:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
		if(i==13||i==18||i==05||i==07||i==01||ch[i]==1)
		{          ch[i]=1;
		    cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
		{
			    ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		} }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 3:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {              ch[i]=1;
		cout<<i<<"."<<ch[i]<<"\n"; note[i]=1;
		}
		cout<<"Sorry no seats available";
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    default:{cout<<"Invalid choice\n";cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
   }
	}
   }
     else if(a==2)
     {clrscr();
	cout<<"\nBUSES AVAILABLE\t\tARRIVAL\t\tDEPARTURE\n";
	 cout<<"------------------------------------------";
	cout<<"\n1.HP01\t\t08:00\t\t16:00";
	cout<<"\n2.HP02\t\t21:00\t\t09:00";
	cout<<"\nCHOOSE ANY";
	cin>>b;
	switch(b)
	{
	case 1:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
		if(i==3||i==8||i==15||i==17||i==13||i==5||i==9||i==18||i==20||i==05||i==1||i==6||ch[i]==1)
	       {           ch[i]=1;
		    cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
		{
			    ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}
	    }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 2:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
		if(i==2||i==4||i==5||i==6||i==7||i==8||i==9||i==11||i==12||i==13||ch[i]==1)
	       {           ch[i]=1;
		    cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
		{
			    ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}
	    }
	    print(a,b);
	    cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 3:
	    {clrscr();
	    for(int i=0;i<31;i++)
	    {              ch[i]=1;
		cout<<i<<"."<<ch[i]<<"\n"; note[i]=1;
		}
		cout<<"Sorry no seats available";
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    default:{cout<<"Invalid choice\n";cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
   }
	}
     }
     else if(a==3)
     {
	 clrscr();
	cout<<"\nBUSES AVAILABLE\t\tARRIVAL\t\tDEPARTURE\n";
	 cout<<"------------------------------------------";
	cout<<"\n1.JD01\t\t08:00\t\t16:00";
	cout<<"\n2.JD02\t\t13:00\t\t04:00";
	cout<<"\n3.JD03\t\t15:00\t\t06:00";
	cout<<"\n4.JD04\t\t21:00\t\t09:00";
	cout<<"\nCHOOSE ANY";
	cin>>b;
	switch(b)
	{
	case 1:
	   {

	   clrscr();
	    for(int i=1;i<21;i++)
	    {
		cout<<i<<"."<<ch[i]<<"\n";
		}
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 2:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
		if(i>15||ch[i]==1)
	       {           ch[i]=1;
		   cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
	    {               ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}
	    }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 3:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {              ch[i]=1;
		cout<<i<<"."<<ch[i]<<"\n"; note[i]=1;
		}
		cout<<"Sorry no seats available";
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }
	    case 4:
	     {

	     clrscr();
		for(int i=1;i<21;i++)
		{

		if(ch[i]==1)
	       {           ch[i]=1;
		   cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
	    {               ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}
	    }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;

		}
	    default:{cout<<"Invalid choice\n";cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    }
	}
     }
   else if(a==4)
   {
       clrscr();
	cout<<"\nBUSES AVAILABLE\t\tARRIVAL\t\tDEPARTURE\n";
	 cout<<"------------------------------------------";
	cout<<"\n1.UM01\t21:00\t\t09:00";
	cout<<"\nCHOOSE ANY";
	cin>>b;
	switch(b)
	{
	case 1:
	    {clrscr();
	    for(int i=1;i<21;i++)
	    {
		if(i==3||i==8||i==15||i==07||i==01||i==2||i==7||i==14||i==19||i==20||i==14||i==6||ch[i]==1)
	       {                 ch[i]=1;
		   cout<<i<<"."<<ch[i]<<"\n";
		 note[i]=1;
		}
		else
		{
			    ch[i]=0; note[i]=0;
		cout<<i<<"."<<ch[i]<<"\n";
		}
	    }
		print(a,b);
		cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
	    break;
	    }   //case
	    default:{cout<<"Invalid choice\n";cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
   } //switch
   }
   }
   else if(a==5)
   {
    getch();

   }
     else
     {
	 cout<<"Invalid choice";cout<<"\nEnter 1 to go back to main\n";
		int k;
		cin>>k;
		if(k==1)
		    goto again;
     }
   }
 void TRAVEL()
{
back: clrscr();
//  travel t;
  fstream file;
 int op;

  cout<<"\n\n\n\t\t\t TRAVEL BOOKINGS";

  do
 {
 clrscr();
 cout<<"\n\n\t\t1.BOOK DOMESTIC FLIGHT TICKETS"
       <<"\n\n\t\t2.BOOK DOMESTIC HOTELS"
       <<"\n\n\t\t3.BUS TICKET BOOKING"
//       <<"\n\n\t\t4.IRCTC INDIAN RAILWAYS TICKET"
       //<<"\n\n\t\t4.VIEW EXISTING BOOKINGS"
       <<"\n\n\t\t4.EXIT"
       <<"\n\n\t\t\tPLEASE ENTER YOU OPTION between(1-4) : ";
   cin>>op;
   switch(op)
  {  case 1:clrscr();
	    cout<<"\n\n\t\t1.BOOK DOMESTIC FLIGHT TICKETS";
	    t.inflight();
	    file.open("C:\\TRAVEL.DAT",ios::app|ios::binary);
	    file.write((char*)&t,sizeof(t));
	    file.close();
	    break;

    case 2: clrscr();
	    Hotels();

	    break;

    case 3:clrscr();
	   cout<<"\n\n\t\t3.BUS TICKET BOOKING";
	   t.busbooking();
	   file.open("C:\\TRAVEL.DAT",ios::app|ios::binary);
	   file.write((char*)&t,sizeof(t));
	   file.close();
	   break;

    case 4:break;
   // case 6:break;
    default:cout<<"\n\n\t\tENTER AN OPTION BETWEEN 1-5";
 }}while(op!=4);


getch();
}