#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
     int countr,i;
     float score;
     char choice;
     char playername[20];
     clrscr();
     mainhome:
     printf("\t\t\t  << QUIZ GAME >>\n");
     printf("\n\t\t**********************************");

     printf("\n\t\t\t      WELCOME\n ");
     printf("\n\t\t\t         TO\n ");
     printf("\n\t\t\t    THE QUIZ GAME ");
     printf("\n\t\t");
     printf("\n\t\t**********************************");
     printf("\n\t\t**********************************");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t__________________________________\n\n");
     choice=toupper(getch());

     if(choice=='V')
	 {
	 system("cls");
	 show_record();
	 system("cls");
	 goto mainhome;
	 }

     else if(choice=='H')
	 {
	 system("cls");
	 help();
	 getch();
	 system("cls");
	     goto mainhome;
	 }

     else if(choice=='R')
	 {
	 system("cls");
	 reset_score();
	     getch();
	     goto mainhome;
      }

     else if (choice=='Q')
	 {
	 exit(0);
     }

    else if(choice=='S')
    {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
	gets(playername);

	system("cls");
	printf("\n **** Welcome %s to C Program Quiz Game ******",playername);
	printf("\n\n Here are some tips you might wanna know before playing:");
	printf("\n ****************************");
	printf("\n >> There is only one round in this Quiz Game 'CHALLENGE ROUND'....");
	printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
	printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
	printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option.");
	printf("\n >> You will be asked questions continuously, till right answers are given");
	printf("\n >> No negative marking for wrong answers!");
	printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	printf("\n\n\n Press Y  to start the game!\n");
	printf("\n Press any other key to return to the main menu!");

       if (toupper(getch())=='Y')
		{
	    system("cls");
		    goto test;
	}

       else
		{
	    system("cls");
	    goto mainhome;
	}



     test:
     system("cls");

     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
     {
			      goto game;
     }


     game:
     countr=0;
     for(i=1;i<=10;i++)
     {
		       system("cls");


     switch(i)
     {
		case 1:system("cls");
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
				  printf("\n\nCorrect!!!");
				  countr++;
				  getch();


	 }


	else
	{
				  printf("\n\nWrong!!! The correct answer is C : Printer");
				  getch();



	}


	case 2: system("cls");
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
		    printf("\n\nCorrect!!!");
		    countr++;
		    getch();

		}


		else
		{
		    printf("\n\nWrong!!! The correct answer is A.Movie file");
		    getch();



		}

	case 3: system("cls");
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D')
		{
		     printf("\n\nCorrect!!!");
		     countr++;
		     getch();

		}
		else
	    {
		    printf("\n\nWrong!!! The correct answer is D.Optical disk");
		    getch();


		    }

	case 4: system("cls");
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
				  printf("\n\nCorrect!!!");
				  countr++;
				  getch();

				  }

	else
	{
		printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
		getch();


	}


	case 5:system("cls");
		printf("\n\n\nWhich of he following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}

		else
	{
		       printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		       getch();


		       }

	case 6: system("cls");
		printf("\n\n\nWhat kind of file extension .bak?,");
		printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}
		else
	{
		       printf("\n\nWrong!!! The correct answer is A.Backup file");
		       getch();


		       }

		case 7:system("cls");
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}
		else
	{
		       printf("\n\nWrong!!! The correct answer is D.CDROM");
		       getch();


		       }
	case 8:system("cls");
		printf("\n\n\nThe ___ shows all the web sites any pages that you have visited one of recent time ");
		printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		if(toupper(getch())=='A')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}
		else
		{
		       printf("\n\nWrong!!! The correct answer is A.Hisory list");
		       getch();


		       }
	case 9:system("cls");
		printf("\n\n\nA 32 bit word computer can access __ bytes at a time ");
		printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		if(toupper(getch())=='D')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}
		else
	{
		       printf("\n\nWrong!!! The correct answer is D.4");
		       getch();


		       }
	case 10:system("cls");
	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
				 printf("\n\nCorrect!!!");
				 countr++;
				 getch();

		}
		else
		{
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();

		}

		goto score;
		break;

	}
  }


    score:
    system("cls");
    score=(float)countr*10;
    if(score>0&&score<101)
    {
	    printf("\t\tYour score is %2f",score);
	    printf("\n**********************************");
	    printf("\n\t\t Thanks for your participation");
	    goto go;
     }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to exit the game");
	if (toupper(getchar())=='Y')
	{
		edit_score(score,playername);
		    goto mainhome;
	}

      }
}

void show_record()
{

	 char name[20];
	 float scr=0;
	 FILE *f;
	 f=fopen("score.txt","r");
	 fscanf(f,"%s%f",&name,&scr);
	 printf("\n\n\t\t*********************");
	 printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
	 printf("\n\n\t\t*********************");
	 fclose(f);
	 getch();
}

void reset_score()
{
    float sc;
	char nm[20];
	FILE *f;
	 system("cls");
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLENGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLENGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t********BEST OF LUCK************");
	printf("\n\n\t**C PROGRAM QUIZ GAME is Devloped by ****");}

void edit_score(float score, char playernm[20])
{

	float sc;
	char nm[20];
	FILE *f;
	 system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  {
	sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playernm,sc); //prints player name
	    fclose(f);
      }
}