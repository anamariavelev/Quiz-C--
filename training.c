#include "training.h"
#include "random.h"
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case1                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case1()
{   printf("\n\nWhat is the most common colour of toilet paper in France?");
		printf("\n\nA.white\t\tB.red\n\nC.pink\t\tD.the same colours as their flag");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    }


		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.pink");
		           getch();

		       }
}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case2                                                                                                                                                  */
/** DESCRIPTION : prints the wuestion and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case2()
{
    printf("\n\n\nHenry VIII introduced which tax in England in 1535?");
		printf("\n\nA.being stupid tax\t\tB.glasses tax\n\nC.beard tax\t\tD.woman tax");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();}

		else
		       {printf("\n\nWrong!!! The correct answer is C.beard tax");
		       getch();
		     }
}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case3                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case3()
{
    printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		      }

}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case4                                                                                                                                                   */
/** DESCRIPTION : prints the wuestion and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case4()
{
    printf("\n\n\nThe average person does what thirteen times a day?");
		printf("\n\nA.pee\t\tB.laughs\n\nC.puts their hand on their face\t\tD.blinks");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.laughs");
		       getch();
		      }
}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case5                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case5()
{
     printf("\n\n\nWhere was the fortune cookie invented?");
        printf("\n\nA.China\t\tB.San Francisco\n\nC.Japan\t\tD.Chinatown");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
               }
        else
		{printf("\n\nWrong!!! The correct answer is B.San Francisco");
		       getch();
		      }
}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case6                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
void case6()
{
    printf("\n\n\nWhat is the collective noun for a group of unicorns?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.An army\t\tD.A blessing");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();}

		else
		       {printf("\n\nWrong!!! The correct answer is D.A blessing");
		       getch();
		      }

}
