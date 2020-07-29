#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<graphics.h>
#include <math.h>
#include <dos.h>
#include<ctype.h>
#include<stdlib.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		    && square[4] != '4' && square[5] != '5' && square[6] != '6'
		  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

//Function to draw the board of the game.



void board()
{
	clrscr();
	 //settextstyle(GOTHIC font, HORIZ_DIR, 5 );
	 //outtextxy(20, 20, fname[GOTHIC font]);
	cout << "\n\n\tSCARE CROW! \n\n";
	cout<<"\n\t----------------";
	cout << "\n HELPER (Player 1) (X)  -  CROWS(Player 2) (O)" << endl << endl;
	cout << endl;

	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;

	cout << "\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;

	cout << "\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "\t\t     |     |     " << endl << endl;
}
      void tree(int t,int q)
{
int r=15;
r=15;
setcolor(BROWN);
setfillstyle(6,BROWN);
rectangle(150+t,390+q,170+t,340+q);
floodfill(151+t,342+q,BROWN);
setfillstyle(11,GREEN);
fillellipse(142+t,347+q,r,r);
fillellipse(160+t,330+q,r,r);
fillellipse(175+t,340+q,r,r);
fillellipse(180+t,350+q,r,r);

}

void feedbacks()
{
	clrscr();
	int option;
	do
	{
	clrscr();
	cout<<"\n\n\tFEEDBACKS-";
	cout<<"\n\n\t 1.ARE YOU BORED? ";
	cout<<"\n\n\t 2.ENTER FEEDBACK";
	cout<<"\n\n\t 3.EXIT";
	cout<<"\n\n\t PLEASE ENTER YOUR OPTION: ";
	cin>>option;
	switch(option)
	{
	case 1:
		clrscr();
		int op;
		do{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\t\t\t\t SCARE CROW!!!!! ";
		cout<<"\n\t\t\t*******************************";
		cout<<"\n\n\t\t\t 1.INSTRUCTIONS/HOW TO PLAY";
		cout<<"\n\n\t\t\t 2.PLAY THE GAME";
		cout<<"\n\n\t\t\t 3.EXIT";
		cout<<"\n\n\n\n\t\t\t PLEASE ENTER YOUR OPTION: ";
		cin>>op;
		switch(op)
		{
		case 1:
		clrscr();
		textbackground(GREEN);
		textcolor(BLUE);
		cout<<"\n\n\t INSTUCTIONS/HOW TO PLAY: ";
		cout<<"\n\t------------------------------";
		cout<<"\n\n\t *. Minimum 2 players required.";
		cout<<"\n\n\t *.The first player is the helper and second player is the bird. :P ";
		cout<<"\n\n\t *.The birds of Southern India are very stubborn as well as clever.";
		cout<<"\n\t A farmer named Swaminathan has 3 x 3 acre land where he has grown his";
		cout<<"\n\t paddy.";
		cout<<"\n\n\t *.The paddy field of Swaminathan is in danger! The Crows have been ";
		cout<<"\n	\t attacking his paddy field and thereby he does not get a good yield. He";
		cout<<"\n\t is worried.";
		cout<<"\n\n\t *.His helper suggested him to place scarecrows at some places so that";
		cout<<"\n\t the birds do not come.He liked the idea and decided to implement this.";
		cout<<"\n\t But now, he is in a dillema so as to where to place it.Help Swaminathan";
		cout<<"\n\t to place it in such a place so that the crows damage only minimum part";
		cout<<"\n\t of his land.";
		cout<<"\n\n\t *.The objective of Scarecrow is to get three in a row. You play on a";
		cout<<"\n\t three by three game board. The first player is known as X and the";
		 cout<<"\n\t second is O. Players alternate placing Xs and Os on the game board";
		cout<<"\n\t until either oppent has three in a row or all nine squares are";
		cout<<"\n\t filled. X always goes first,and in the event that no one has";
		cout<<"\n\t three in a row, the stalemate is called a cat game.";
		cout<<"\n\n\t *. ALL THE BEST! \1";
		getch();

		break;

		case 2:
		clrscr();
		int i,j,k,t,q,r;
		float x,y;
		setcolor(2);
		rectangle(0,0,getmaxx(),getmaxy());
		for(i=0;i<getmaxx();i+=120)
		{
		line(i,250,i+60,170);
		line(i+60,170,i+120,250);
		}

		t=10;
		line(0,400,getmaxx(),350);
		c:line(50+t,280,50+t,320);
		line(50+t,320,60+t,320);
		line(60+t,320,70+t,320);
		line(70+t,320,80+t,320);
		line(130+t,320,80+t,320);
		line(70+t,320,70+t,300);
		line(60+t,300,60+t,320);
		line(70+t,300,60+t,300);
		line(80+t,320,80+t,280);
		line(130+t,320,130+t,280);
		line(80+t,280,130+t,280);
		line(50+t,280,80+t,280);
		line(50+t,280,65+t,260);
		line(65+t,260,80+t,280);
		line(65+t,260,110+t,260);
		line(130+t,280,110+t,260);

		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(51+t,282,2);

		setfillstyle(SOLID_FILL,RED);
		floodfill(61+t,302,2);

		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(81+t,282,2);

		setfillstyle(SOLID_FILL,MAGENTA);
		floodfill(66+t,270,2);

		setfillstyle(4,BROWN);
		floodfill(100+t,270,2);
		if(t==10)
		{
		t=320;
		goto c;
		}

		tree(0,-10);
		tree(100,-20);
		tree(30,-100);
		tree(350,-60);
		tree(160,-50);




//circle();

		setfillstyle(SOLID_FILL,12);
		fillellipse(150,80,35,35);

		setfillstyle(2,LIGHTBLUE);
		floodfill(10,10,2);

		setfillstyle(SOLID_FILL,CYAN);
		floodfill(1,getmaxy()-1,2);

		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(49,270,2);

//x=150;
//y=80;
		for(i=36;i<80;i++)
		for(j=0;j<=360;j+=10)
		{
		x=150+i*cos(((float)j*3.14)/180);
		y=80+i*sin(((float)j*3.14)/180);

		putpixel(x,y,LIGHTRED);
		}

		for(int h=25;h<50;h++)
		{
		gotoxy(20,26);cout<<"Please wait while we set up the game.";
		gotoxy(h,28);cout<<"Û";
		delay(250);
		}
		textbackground(LIGHTMAGENTA+BLINK);
		int player = 1,choice;

		char mark;
		do
		{
		textbackground(CYAN);
		clrscr();
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move! ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
		}while(i==-1);
		board();
		if(i==1)
		{
		cout<<"==>\a\tPLAYER "<<--player<<" WINS! \1 ";
		if(player==1)
		cout<<"\n\n\t Hurraayyy!! Finally Swaminathan will get a good yield now! \2";
		if(player==2)
		cout<<"\n\n\t KING CROW: HAHAHA...We ain't gonna get scared of this useless scarecrow.                 ATTACCCCKK!!!!!";
		}
		else
		cout<<"==>\a\tGAME DRAW. '_' ";

		cin.ignore();
		cin.get();
		square[0]='o';
		square[1]='1';
		square[2]='2';
		square[3]='3';
		square[4]='4';
		square[5]='5';
		square[6]='6';
		square[7]='7';
		square[8]='8';
		square[9]='9';
		break;

		//end of case 2

			break;
		case 3:break;

		default: cout<<"\n\n\t PLEASE ENTER VALID OPTION.";
		}//end of switch

		}while(op!=3);
		break;

	case 2:
	clrscr();
	char feedbck[100], a[10];
	int rate;
	char email[60];
	cout<<"\n\n\t\t PLEASE ENTER YOUR FEEDBACK ON OUR AGENCY. \1";
	cout<<"\n\n\t\tAnswer the following questions in yes or no(Y/N) :-";
	cout<<"\n\n\t\tWas your journey comfortable? "; gets(a);
	cout<<"\n\n\t\tWere the accomodations up to your expectations? "; gets(a);
	cout<<"\n\n\t\tWould you recommend our agency to your friends? "; gets(a);
	cout<<"\n\n\t\tWould you like to know about our latest travel plans? ";gets(a);
	if(strcmpi(a,"Y")==0 || strcmpi(a,"y")==0)
	{
	 cout<<"\n\n\t Please enter your e-mail address so that we can notiffy you. \1";
	 cout<<"\n\n\t ENTER E-MAIL ID: ";
	 gets(email);
	}
	cout<<"\n\n\t\tYour rating please(1-5)... "; cin>>rate;
	cout<<"\n\n\t\tYOUR SUGGESTIONS :-\n\n\t\t "; gets(feedbck);
	cout<<"\n\n\t Thank you for your suggestions and advices. \n\n\tWe will see to it and try and improve our services. \1\2";
	getch();
	break;

	}


	getch();
	}while(option!=3);

}

/*   void feedbacks()
   {
	clrscr();
	int option;
	do
	{
	clrscr();
	cout<<"\n\n\tFEEDBACKS-";
	cout<<"\n\n\t 1.Are you Boreedd? :P ";
	cout<<"\n\n\t 2.ENTER FEEDBACK";
	cout<<"\n\n\t 3.EXIT";
	cout<<"\n\n\t PLEASE ENTER YOUR OPTION: ";
	cin>>option;
	switch(option)
	{
	case 1:
		clrscr();
		int op;
		do{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\t\t\t\t SCARE CROW!!!!! ";
		cout<<"\n\t\t\t*******************************";
		cout<<"\n\n\t\t\t 1.INSTRUCTIONS/HOW TO PLAY";
		cout<<"\n\n\t\t\t 2.PLAY THE GAME";
		cout<<"\n\n\t\t\t 3.EXIT";
		cout<<"\n\n\n\n\t\t\t PLEASE ENTER YOUR OPTION: ";
		cin>>op;
		switch(op)
		{
		case 1:
		clrscr();
	       //	textbackground(GREEN);
		//textcolor(BLUE);
		cout<<"\n\n\t INSTUCTIONS/HOW TO PLAY: ";
		cout<<"\n\t------------------------------";
		cout<<"\n\n\t *. Minimum 2 players required.";
		cout<<"\n\n\t *.The first player is the helper and second player is the bird. :P ";
		cout<<"\n\n\t *.The birds of Southern India are very stubborn as well as clever.";
		cout<<"\n\t A farmer named Swaminathan has 3 x 3 acre land where he has grown his";
		cout<<"\n\t paddy.";
		cout<<"\n\n\t *.The paddy field of Swaminathan is in danger! The Crows have been ";
		cout<<"\n	\t attacking his paddy field and thereby he does not get a good yield. He";
		cout<<"\n\t is worried.";
		cout<<"\n\n\t *.His helper suggested him to place scarecrows at some places so that";
		cout<<"\n\t the birds do not come.He liked the idea and decided to implement this.";
		cout<<"\n\t But now, he is in a dillema so as to where to place it.Help Swaminathan";
		cout<<"\n\t to place it in such a place so that the crows damage only minimum part";
		cout<<"\n\t of his land.";
		cout<<"\n\n\t *.The objective of Scarecrow is to get three in a row. You play on a";
		cout<<"\n\t three by three game board. The first player is known as X and the";
		 cout<<"\n\t second is O. Players alternate placing Xs and Os on the game board";
		cout<<"\n\t until either oppent has three in a row or all nine squares are";
		cout<<"\n\t filled. X always goes first,and in the event that no one has";
		cout<<"\n\t three in a row, the stalemate is called a cat game.";
		cout<<"\n\n\t *. ALL THE BEST! \1";
		getch();
		}
		break;
		case 2:
		clrscr();
		int gd=DETECT,gm;
		int i,j,k,t,q,r;
		float x,y;
		initgraph(&gd,&gm," ");
		setcolor(2);
		rectangle(0,0,getmaxx(),getmaxy());
		for(i=0;i<getmaxx();i+=120)
		{
		line(i,250,i+60,170);
		line(i+60,170,i+120,250);
		}

		t=10;
		line(0,400,getmaxx(),350);
		c:line(50+t,280,50+t,320);
		line(50+t,320,60+t,320);
		line(60+t,320,70+t,320);
		line(70+t,320,80+t,320);
		line(130+t,320,80+t,320);
		line(70+t,320,70+t,300);
		line(60+t,300,60+t,320);
		line(70+t,300,60+t,300);
		line(80+t,320,80+t,280);
		line(130+t,320,130+t,280);
		line(80+t,280,130+t,280);
		line(50+t,280,80+t,280);
		line(50+t,280,65+t,260);
		line(65+t,260,80+t,280);
		line(65+t,260,110+t,260);
		line(130+t,280,110+t,260);
		setfillstyle(SOLID_FILL,DARKGRAY);
		floodfill(51+t,282,2);
		setfillstyle(SOLID_FILL,RED);
		floodfill(61+t,302,2);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(81+t,282,2);
		setfillstyle(SOLID_FILL,MAGENTA);
		floodfill(66+t,270,2);
		setfillstyle(4,BROWN);
		floodfill(100+t,270,2);
		if(t==10)
		{
		t=320;
		goto c;
		}

		tree(0,-10);
		tree(100,-20);
		tree(30,-100);
		tree(350,-60);
		tree(160,-50);
//circle();

		setfillstyle(SOLID_FILL,12);
		fillellipse(150,80,35,35);

		setfillstyle(2,LIGHTBLUE);
		floodfill(10,10,2);

		setfillstyle(SOLID_FILL,CYAN);
		floodfill(1,getmaxy()-1,2);

		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(49,270,2);

//x=150;
//y=80;
		for(i=36;i<80;i++)
		for(j=0;j<=360;j+=10)
		{
		x=150+i*cos(((float)j*3.14)/180);
		y=80+i*sin(((float)j*3.14)/180);
		putpixel(x,y,LIGHTRED);
		}

		for(int h=25;h<50;h++)
		{
		gotoxy(20,26);cout<<"Please wait while we set up the game.";
		gotoxy(h,28);cout<<"Û";
		delay(250);
		}
		textbackground(LIGHTMAGENTA+BLINK);
		int player = 1,i,choice;

		char mark;
		do
		{
		textbackground(CYAN);
		clrscr();
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move! ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
		}while(i==-1);
		board();
		if(i==1)
		{
		cout<<"==>\a\tPLAYER "<<--player<<" WINS! \1 ";
		if(player==1)
		cout<<"\n\n\t Hurraayyy!! Finally Swaminathan will get a good yield now! \2";
		if(player==2)
		cout<<"\n\n\t KING CROW: HAHAHA...We ain't gonna get scared of this useless scarecrow.                 ATTACCCCKK!!!!!";
		}
		else
		cout<<"==>\a\tGAME DRAW. '_' ";

		cin.ignore();
		cin.get();
		square[0]='o';
		square[1]='1';
		square[2]='2';
		square[3]='3';
		square[4]='4';
		square[5]='5';
		square[6]='6';
		square[7]='7';
		square[8]='8';
		square[9]='9';
		break;

		//end of case 2

		case 3:break;
		default: cout<<"\n\n\t PLEASE ENTER VALID OPTION.";
		}//end of switch
		}while(op!=3);
		getch();
		//SCARE CROW
		break;

	case 2:
	clrscr();
	char feedbck[100], a[10];
	int rate;
	char email[60];
	cout<<"\n\n\t\t PLEASE ENTER YOUR FEEDBACK ON OUR AGENCY. \1";
	cout<<"\n\n\t\tAnswer the following questions in yes or no(Y/N) :-";
	cout<<"\n\n\t\tWas your journey comfortable? "; gets(a);
	cout<<"\n\n\t\tWere the accomodations up to your expectations? "; gets(a);
	cout<<"\n\n\t\tWould you recommend our agency to your friends? "; gets(a);
	cout<<"\n\n\t\tWould you like to know about our latest travel plans? ";gets(a);
	if(strcmpi(a,"Y")==0 || strcmpi(a,"y")==0)
	{
	 cout<<"\n\n\t Please enter your e-mail address so that we can notiffy you. \1";
	 cout<<"\n\n\t ENTER E-MAIL ID: ";
	 gets(email);
	}
	cout<<"\n\n\t\tYour rating please(1-5)... "; cin>>rate;
	cout<<"\n\n\t\tYOUR SUGGESTIONS :-\n\n\t\t "; gets(feedbck);
	cout<<"\n\n\t Thank you for your suggestions and advices. \n\n\tWe will see to it and try and improve our services. \1\2";
	getch();
	break;
	 //feedbacks
	case 3:break;
	}
	getch();
	}while(option!=3);
	}        */


/*void main()
{ int gd= DETECT, gm;
initgraph(&gd, &gm, " ");
feedbacks();
getch();
closegraph();
} */
