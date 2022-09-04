#include "quizq.h"
#include "random.h"
int countr =0;

/**********************************************************************************************************************************************/
/** FUNCTION NAME : case7                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
		void case7()
	{
		printf("\n\nHow many time zones are there in Mother Russia ?");
		printf("\n\nA.13\t\tB.10\n\nC.11\t\tD.8");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.11");getch();
		       scorulet();
		       }}

/**********************************************************************************************************************************************/
/** FUNCTION NAME : case8                                                                                                                                                  */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/

		void case8()
		{

		printf("\n\n\nWhat's the national flower of Japan ?");
		printf("\n\nA.Red Rose\t\tB.Cherry Blossom\n\nC.Bellflower\t\tD.Sunflower");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cherry Blossom");getch();
		      scorulet();
		       }}


/**********************************************************************************************************************************************/
/** FUNCTION NAME : case9                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case9()
	{
		printf("\n\n\nHow many stripes are there on the US flag ? ");
		printf("\n\nA.10\t\tB.13\n\nC.21\t\tD.0");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else
		        {printf("\n\nWrong!!! The correct answer is B.13");getch();
		      scorulet();
		       }}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case10                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case10()
	{
		printf("\n\n\nWhat’s the national animal of Australia ?");
		printf("\n\nA.Red Kangaroo\t\tB.Tasmanian Devil\n\nC.Koala\t\tD.Emu");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

               		{printf("\n\nWrong!!! The correct answer is A.Red Kangaroo");getch();
		      scorulet();
		      }}

/**********************************************************************************************************************************************/
/** FUNCTION NAME : case11                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case11()
	{
		printf("\n\n\nHow many days does it take for the Earth to orbit the Sun ?");
		printf("\n\nA.364 days\t\tB.365 days\n\nC.24 hours\t\tD.1 day");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

			{printf("\n\nWrong!!! The correct answer is B.365 days");
		       getch();
		    scorulet();
			}}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case12                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
		void case12()
	{

		printf("\n\n\nWhich of the following empires had no written language: Incan, Aztec, Egyptian, Roman ?");
		printf("\n\nA.Incan\t\tB.Aztec\n\nC.Egyptian\t\tD.Roman");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

		       {printf("\n\nWrong!!! The correct answer is A.Incan");scorulet();
		       getch();
		       }}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case13                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case13()
    {
		printf("\n\n\nUntil 1923, what was the Turkish city of Istanbul called ?");
		printf("\n\nA.Antalya\t\tB.Cluj\n\nC.Efes\t\tD.Constantinople");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

		       {printf("\n\nWrong!!! The correct answer is D.Constantinople");getch();
		      scorulet();
		       }}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case14                                                                                                                                                   */
/** DESCRIPTION : prints the question and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case14()
    {
		printf("\n\n\nWhat country has the most islands in the world ?");
		printf("\n\nA.Brazil\t\tB.North Korea\n\nC.Sweden\t\tD.Norway");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

		       {printf("\n\nWrong!!! The correct answer is C.Sweden");getch();
		      scorulet();
		       }}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case15                                                                                                                                                   */
/** DESCRIPTION : prints the wuestion and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
 		void case15()
 		{

		printf("\n\n\nWhich artist painted the ceiling of the Sistine Chapel in Rome?");
		printf("\n\nA.Nicolae Brancusi\t\tB.Michelangelo\n\nC.Da Vinci\t\tD.Donatello");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else

              		{printf("\n\nWrong!!! The correct answer is B.Michelangelo");getch();
              		scorulet();
		      }}
/**********************************************************************************************************************************************/
/** FUNCTION NAME : case16                                                                                                                                                  */
/** DESCRIPTION : prints the wuestion and checks if it's the right answer; if not, it prints out the answer and stops the game   **/
/**********************************************************************************************************************************************/
        	void case16()
        	{

		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Dunarea\n\nC.Niger\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;
			getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();
			scorulet();
		      }}


