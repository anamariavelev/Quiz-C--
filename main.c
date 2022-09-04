//******************************************************************************/
/**Authors: Velev Ana Maria                       **/
/**Version : 07.01.2021                                                                             */
//*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "training.h"
#include "casa.h"
#include "quizq.h"
#include "random.h"

int countr,r,r1,i,n;
float score;

char playername[20];

int main()
{
    nume();
    combo();
    mainhome();
    home();
    test();
    game();
    scorulet();
    go();
}
