/********************************
File: smithjack.cPurpose: simple cardgame with one player against the computer.
   Programmer: Freeman George, Mei Ling Fong, 
   Date: 3/23/2017
********************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
/**********************************
*
*Variable declaration area
*
*********************************/
int no;    //variable for yes/no 
double playerscore; //variable for the dealer's score
double dealerscore; //variale for the players score
int facedown;  //represents the first card for the dealer and player wich acnnot be seen.
int faceup;
int playercounter;
int dealercounter;
int ace;
int cking;
int cqueen;
int cjack;
int c10;
int c9;
int c8;
int c7;
int c6;
int c5;
int c4;
int c3;
int c2;
int card;
int cardsum;

/*********************************
*
*   Main routine
*
*********************************/
       

int main()
{
printf("Welcome to the awesome game of smithjack!");

    
    while (no != 'y')
printf("Lets play!\n");
{
    srand(time(NULL));
    card = 1 + rand() % 14;
    switch(card)
    {
        case '1':
            ace = 1;
            break;
        case '3':
            c2 = 2;
            break;
        case '4':
           c3=3;
            break;
        case '5':
            c3 = 3;
            break;
        case '6':
            c5 = 5;
            break;
        case '7':
            c6 = 6;
        case '8':
            c7 = 7;
            break;
        case '9':
            c8 = 8;
            break;
        case '0':
            c9 = 9;
        break;
        case 10:
            c10 = 10;
            break;
        case 11:
            cking = 10;
            break;
        case 12:
            cqueen = 10;
            break;
        case 14:
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


