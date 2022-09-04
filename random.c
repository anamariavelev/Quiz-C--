#include "random.h"
#include<stdio.h>
char playername[20];
int count=0;
char choice;
int countr;
float score = 0;
/* jucatorul isi scrie numele*/
void nume()
{
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
     gets(playername); //numele jucatorului
}
/* verifica daca dupa partea de training, sunt raspunsuri corecte la minim 3 intrebari, iar daca sunt, jucatorul este trimis la quiz-ul in sine, daca nu, apare mesajul cu not eligible*/
void not_eligible()
{if(count>=3)
	{test();}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
    mainhome();
	}


}
/*e functia cu modul de desfasurare al jocului si poisibilitatea de a incepe jocul*/
void info()
{ system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,warmup and challange round");
    printf("\n >> In warmup round you will be asked a total of 6 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give at least 3");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 0.2 bonus points on your exam!");
    printf("\n    By this way you can win up to ONE PASSED EXAM!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, until right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");

}

/*functia care, in functie de litera apasata, ii ofera jucatorului anumite optiuni*/
	void make_choice()
{   choice = toupper(choice);
    if (choice=='V')
	{
	show_record();
	  printf("\n Press any other key to return to the main menu!");
    getch();

	}
     else if (choice=='H')
	{ info();

	getch();

	}

	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");
     home();

}
combo();
}


/*un ajutor care combina afisarea meniului cu posibilitatea de a apasa o litera in functie de optiunea dorita*/
 void combo()
 {
     meniu();
     make_choice();
 }
////void quiz_home()
/*
   //  if (toupper(getch())=='Y') // sa nu stea sa dea caps
		{
		    home(); //parte de intrebari de warmup
        }
	else//
		{//
        mainhome(); //parte de  info?
       system("cls");
       }//
}//*/

/*in functie de noul scor, il pune in score.txt , daca noul scor e mai mare decat best-ul de pana acum*/
void edit_score(float score, char plnm[20])
{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}



/* ne arata punctajul maxim de pana acum si numele jucatorului*/
    void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}


/* calculeaza scorul in functie de nr de intrebari la care a raspuns corect*/
void scorulet()
	{
	 system("cls");
	score=(float)countr*0.2;
	if(score>0.00 && score<2.00)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won %.2f bonus points on your computer programming exam",score); go();}

	 else if(score==2.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won %.2f bonus points on your computer programming exam",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY BONUS POINTS ON YOUR COMPUTER PROGRAMMING EXAM ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");go();}
       combo();
	}
/* afisarea meniului*/
void meniu()
{   system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME AN INTEGRALIST!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());

}
