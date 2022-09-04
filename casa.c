#include "casa.h"
#include "random.h"


char choice;
int i, r, r1, countr;
/*****************************************************************************************************************/
/**FUNCTION NAME : go                                                                                                                 */
/**DESCRIPTION : At the end of the game, the player either tries again, either goes to the mai menu  */
/***************************************************************************************************************/
void go()
{

    puts("\n\n Press Y if you want to play next game");
    puts(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        home();
    else
    {
        edit_score(score,playername);
        meniu();
    }
}

/****************************************************************************************************************/
/**FUNCTION NAME : mainhome                                                                                                    */
/**DESCRIPTION : It puts on the screen info about the game and sorts out the letter it gets              */
/**************************************************************************************************************/

void mainhome()
{
    info();
    choice=toupper(getch());

}



/************************************************************************************************************************************/
/**FUNCTION NAME : home                                                                                                                                      */
/**DESCRIPTION : Incepe partea de training cu cele 6 intrebari; minim 3 raspunsuri corecte => se poate incepe jocul */
/***********************************************************************************************************************************/
void home()
{
    system("cls");
    count=0;
    for(i=1; i<=6; i++) //6 intrebari
    {
        system("cls");
        r1=i;


        switch(r1)
        {
        case 1:
            case1();
            break;
        case 2:
            case2();
            break;
        case 3:
            case3();
            break;
        case 4:
            case4();
            break;
        case 5:
            case5();
            break;
        case 6:
            case6();
            break;
        }

    }

        if(count>=3)
        {
            test();
        }
        else
        {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            meniu();
        }
    }


/****************************************************************************************************************/
/**FUNCTION NAME : test                                                                                                              */
/**DESCRIPTION : Dupa verificare, daca sunt min 3 intrebari, se afiseaza mesajul si se incepe jocul */
/**************************************************************************************************************/
    void test()
    {
        system("cls");
        printf("\n\n\t*** CONGRATULATIONS %s you are eligible to play the Game ***",playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        getch();
        {
            game();
        }
    }


/*****************************************************************************************************************/
/**FUNCTION NAME : game                                                                                                             */
/**DESCRIPTION : The game itself, which has 10 questions                                                              */
/***************************************************************************************************************/
    void game()
    {
        countr=0;
        for(i=7; i<=16; i++)
        {
            system("cls");
            r1=i;

            switch(r1)
            {
            case 7:
                case7();
                break;
            case 8:
                case8();
                break;
            case 9:
                case9();
                break;
            case 10:
                case10();
                break;
            case 11:
                case11();
                break;
            case 12:
                case12();
                break;
            case 13:
                case13();
                break;
            case 14:
                case14();
                break;
            case 15:
                case15();
                break;
            case 16:
                case16();
                break;
            }
        }
    }

