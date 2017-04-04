/**********************************************************
*   File: smithjack.c
*   Purpose: play blackjack
*   Programmer:  Mai Ling Fong Wilson
*   Date:  04/03/17
**********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**********************************************************
*
*   Variable Declaration Area
*
**********************************************************/
int ace1 = 1;
int ace11 = 11;
int card
int cking = 10;
int cqueen = 10;
int cjack = 10;
int card;
int cardsum;
char Y;
char N;
char yn;
double dscore = dscore + dpoints;
double pscore = pscore + ppoints;
int dcard1, dcard2, dcard3, dcard4, dcard5, dcard6;
int pcard1, pcard2, pcard3, pcard4, pcard5, pcard6;
double dpoints;
double ppoints;
/**********************************************************
*
*   Main Routine
*
***********************************************************/
int main()
{
printf("Welcome to the awesome game of smithjack!");
    
    while (no != 'y')
printf("Lets play!\n");
{
    srand(time(NULL));
    card = 1 + rand() % 14;
    
    switch(card){
        case 1:
            1 = ace1;
            ace1 = 1;
            break;
        case 2:
            2 = ace11;
            ace11 = 11;
            break;
        case 3:
            3 = c2;
            c2 = 2;
            break;
        case 4:
            4 = c3;
            c3 = 3;
            break;
        case 5:
            5 = c4;
            c3 = 3;
            break;
        case 6:
            6 = c5;
            c5 = 5;
            break;
        case 7:
            7 = c6;
            c6 = 6;
        case 8:
            8 = c7;
            c7 = 7;
            break;
        case 9:
            9 = c8;
            c8 = 8;
            break;
        case 10:
            10 = c9;
            c9 = 9;
            break;
        case 11:
            11 = c10;
            c10 = 10;
            break;
        case 12:
            12 = cking;
            cking = 10;
            break;
        case 13:
            13 = cqueen;
            cqueen = 10;
            break;
        case 14:
            14 = cjack
            cjack = 10;
            break;

        
          }
     if (cardsum<=21)
     {
     ace=11;
} 
    else if(cardsum>=21)
    {
        ace=1;
     
    }
    printf("The score is:\n");// only if user has ended program
    printf("---------------\n");
    printf("Dealer:%d   Player:%d \n", dealerscore, playerscore);
    printf("Would you like to do another?(enter y for Yes or n for No)\n"); //prompt user for a repitition
        scanf (" %c", &no);          //scans in answer and if y==0 stops the loop

}

        if(playerscore<=dealerscore)
    {
    printf("To bad! Thankyou for your money! Checks to be written out to Freeman R. George\n");
    }
        else(playerscore>=dealerscore)
    {
        printf("Well done! Il'll get you next time!\n");
    }
printf("Have a nice day");
    return 0;
}    


Contact GitHub API Training Shop Blog About
© 2017 GitHub, Inc
    printf("Thank you for playing\n");
    return 0;
}
