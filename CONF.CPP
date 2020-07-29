//conferance hall reservation
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

class conf
{
int room_no;
char name[30];
char address[50];
long int phone;

public:
void main_menu(); //to dispay the main menu
void add();         //to book a room
void display();         //to display the customer record
void rooms(); //to display alloted rooms
void edit();         //to edit the customer record
int check(int); //to check room status
void modify(int);         //to modify the record
void delete_rec(int); //to delete the record
};

void conf::main_menu()
{
int choice;
while(choice!=5)
{
clrscr();
cout<<"\n\n\t\t\t*************";
cout<<"\n\n\t\t\t* MAIN MENU *";
cout<<"\n\n\t\t\t*************";
cout<<"\n\n\t\t1.BOOK A HALL";
cout<<"\n\n\t\t2.CUSTOMER RECORD";
cout<<"\n\n\t\t3.HALLS ALLOTED";
cout<<"\n\n\t\t4.EDIT RECORD";
cout<<"\n\n\t\t5.EXIT";
cout<<"\n\n\t\t Please Enter Your Choice: ";
cin>>choice;
switch(choice)
{
case 1: add();
break;
case 2: display();
break;
case 3: rooms();
break;
case 4: edit();
break;
case 5: break;
default:
{
cout<<"\n\n\tWrong choice..!";
getch();
}
}
}
}

void conf::add()
{
clrscr();
int r,flag;
ofstream fout("Record.dat",ios::app);

cout<<"\n\n\t ENTER CUSTOMER DETAILS.";
cout<<"\n\t*******************";
cout<<"\n Hall no(a state has 10 halls,select your nearest one from previous page): ";
cin>>r;
flag=check(r);

if(flag)
cout<<"\n\n\t Sorry..:( Hall is already booked. :( ";

else
{
room_no=r;
cout<<"\n\n\t Name: ";
gets(name);
cout<<"\n\n\t Address: ";
gets(address);
cout<<"\n\n\t Phone No: ";
cin>>phone;
fout.write((char*)this,sizeof(conf));
cout<<"\n\n\t YOUR HALL IS BOOKED! \1";
}
getch();
fout.close();
}

void conf::display()
{
clrscr();
ifstream fin("Record.dat",ios::in);
int r,flag;
cout<<"\n\n\t Enter hall no: ";
cin>>r;

while(!fin.eof())
{
fin.read((char*)this,sizeof(conf));
if(room_no==r)
{
clrscr();
cout<<"\n\n\t CUSTOMER DETAILS.";
cout<<"\n\t ---------------";
cout<<"\n\n\t Hall no: "<<room_no;
cout<<"\n\n\t Name: "<<name;
cout<<"\n\n\t Address: "<<address;
cout<<"\n\n\t Phone no: "<<phone;
flag=1;
break;
}
}

if(flag)
cout<<"\n SORRY.. :( HALL NUMBER NOT FOUND OR VACANT.";
getch();
fin.close();

}

void conf::rooms()
{
clrscr();
ifstream fin("Record.dat",ios::in);
cout<<"\n\n\n\t    List Of Halls Allotted";
cout<<"\n\t---------------------------";
cout<<"\n\n\t Hall No.\tName\t\tAddress\t\t\tPhone No.\n\n";

while(!fin.eof())
{
clrscr();
fin.read((char*)this,sizeof(conf));
cout<<" \n\n\t "<<room_no<<"\t"<<name;
cout<<"\t\t"<<address<<"\t\t\t"<<phone;
}
getch();
fin.close();
}

void conf::edit()
{
clrscr();
int choice,r;

cout<<"\n\n\t EDIT MENU";
cout<<"\n\t -----------";
cout<<"\n\n\t 1.MODIFY RECORD";
cout<<"\n\n\t 2.DELETE RECORD";

cout<<"\n\n\t ENTER YOUR CHOICE: ";
cin>>choice;
clrscr();
cout<<"\n ENTER HALL NUMBER: ";
cin>>r;

switch(choice)
{
case 1: modify(r);
break;
case 2: delete_rec(r);
break;
default: cout<<"\n\n\t WRONG CHOICE. :/ ";
}
getch();
}

int conf::check(int r)
{
int flag=0;
ifstream fin("Record.dat",ios::in);
while(!fin.eof())
{
fin.read((char*)this,sizeof(conf));
if(room_no==r)
{
flag=1;
break;
}
}

fin.close();
return(flag);
}

void conf::modify(int r)
{
long pos,flag;
fstream file("Record.dat",ios::in|ios::out|ios::binary);
while(!file.eof())
{
pos=file.tellg();
file.read((char*)this,sizeof(conf));
if(room_no==r)
{
cout<<"\n\n\t ENTER NEW DETAILS";
cout<<"\n\t ------------------";
cout<<"\n\n\t NAME: ";
gets(name);
cout<<"\n\n\t ADDRESS: ";
gets(address);
cout<<"\n\n\t PHONE NUMBER: ";
cin>>phone;

file.seekg(pos);
file.write((char*)this,sizeof(conf));
cout<<"\n\t RECORD MODIFIED. \1";
flag=1;
break;
}
}

if(flag)
cout<<"\n\t SORRY HALL NO. NOT FOUND OR VACANT.. :(!";
file.close();
}

void conf::delete_rec(int r)
{
int flag;
char ch;
ifstream fin("Record.dat",ios::in);
ofstream fout("temp.dat",ios::out);
while(!fin.eof())
{
fin.read((char*)this,sizeof(conf));
if(room_no==r)
{
cout<<"\n\n\t Name: "<<name;
cout<<"\n\n\t Address: "<<address;
cout<<"\n\n\t Phone No: "<<phone;
cout<<"\n\n\t DO YOU WANT TO DELETE THIS RECORD? (y/n): ";
cin>>ch;

if(ch=='\n')
fout.write((char*)this,sizeof(conf));
flag=1;
}
else
fout.write((char*)this,sizeof(conf));
}

fin.close();
fout.close();
if(flag)
cout<<"\n\n\t Sorry Hall no. not found or vacant!!";
else
{
remove("Record.dat");
rename("temp.dat","Record.dat");
}
}


void confe()
{
clrscr();
int op;
char place[50];
do
{
clrscr();
   cout<<"\n\t\t:::::::::::::::::::::::::::::::::::::";
   cout<<"\n\t\t::                                 ::";
   cout<<"\n\t\t::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n\t\t::     @                     @     ::";
   cout<<"\n\t\t::     @      CONFERANCE     @     ::";
   cout<<"\n\t\t::     @     HALL BOOKINGS   @     ::";
   cout<<"\n\t\t::     @               by... @     ::";
   cout<<"\n\t\t::     @                     @     ::";
   cout<<"\n\t\t::     @   Rainbow Travels   @     ::";
   cout<<"\n\t\t::     @                     @     ::";
   cout<<"\n\t\t::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n\t\t::                                 ::";
   cout<<"\n\t\t:::::::::::::::::::::::::::::::::::::\n\n";
   cout<<"\n\t CHOOSE A CATEGORY.";
   cout<<"\n\n\t 1.FEATURES OF THE ROOMS.";
   cout<<"\n\n\t 2.GET AVAILIBILITY.";
   cout<<"\n\n\t 3.BILLING.";
   cout<<"\n\n\t 4.EXIT";
   cout<<"\n\n\t PLEASE ENTER YOUR OPTION: ";
   cin>>op;
   switch(op)
   {
   case 1:
   {
   clrscr();
   cout<<"\n\n#########################################################################";
   cout<<"\n\n\t Our organisation has almost 50 halls all over South India,";
   cout<<"\n\t\t 10 in each of the 5 states";
   cout<<"\n\n\t All the halls are of same design and thus have same features.";
   cout<<"\n\t\tThe features of our hall are: ";
   cout<<"\n\n\t\t * STORAGE CAPACITY: 1500 people(max.).";
   cout<<"\n\n\t\t * 13 Fans and 9 air conditioners.";
   cout<<"\n\n\t\t * Well vntilated rooms.";
   cout<<"\n\n\t\t * Provision for projectors, mikes and stage.";
   cout<<"\n\n\t\t * Provision for food stalls.";
   cout<<"\n\n#########################################################################";
   getch();
   }
   break;
   case 2:
   {
   clrscr();
   conf h;
	//textmode(C80);
	//textbackground(WHITE);
	//textcolor(RED);

	clrscr();
	cout<<"\n\n\t\t****************";
	cout<<"\n\n\t\t* BOOKINGS *";
	cout<<"\n\n\t\t****************";
	cout<<"\n\n  ENTER THE STATE WHERE THE CONFERANCE/MEETING";
	cout<<" IS TO BE HELD(IN SOUTH INDIA) :  ";
	gets(place);
	clrscr();
	cout<<"\n\n\t THE HALLS AVAILABLE NEAR YOUR AREA ARE: ";
	cout<<"\n\n\t\t       PLACE                       PRICE       ";
	cout<<"\n\n\t\t     1.Rajiv Chowk                Rs.15,000   ";
	cout<<"\n\n\t\t     2.Gandhi nagar               Rs.15,200   ";
	cout<<"\n\n\t\t     3.MG Road                    Rs.15,100   ";
	cout<<"\n\n\t\t     4.Lokmanya Tilak Road        Rs.15,250   ";
	cout<<"\n\n\t\t     5.LBS Marg                   Rs.15,225   ";
	cout<<"\n\n\t\t     6.King's Circle              Rs.15,050   ";
	cout<<"\n\n\t\t     7.Ram nagar                  Rs.15,150   ";
	cout<<"\n\n\t\t     8.Hiranandan Gardens         Rs.15,025   ";
	cout<<"\n\n\t\t     9.S V Road              	 Rs.15,075   ";
	cout<<"\n\n\t\t     10.Linking Road              Rs.15,300   ";
	getch();
	h.main_menu();
       break ;
       }
   case 3:{
	   clrscr();
	   cout<<"\n\n\t BILLING";
	   cout<<"\n\t---------";
	   break;
	  }
   case 4: break;
   default: cout<<"\n\n\t PLEASE ENTER A VALID OPTION.";
    }//SWITCH
    }while(op!=4);
    getch();
   }//end