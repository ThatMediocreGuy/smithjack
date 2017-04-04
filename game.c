/**********************************************************
*   File: smithjack.c
*   Purpose: play blackjack
*   Programmer:  Mai Ling Fong Wilson
*   Date:  04/03/17
**********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**********************************************************
*
*   Variable Declaration Area
*
**********************************************************/
int ace1 = 1;
int ace11 = 11;
int c2 = 2;
int c3 = 3;
int c4 = 4;
int c5 = 5;
int c6 = 6;
int c7 = 7;
int c8 = 8;
int c9 = 9;
int c10 = 10;
int cking = 10;
int cqueen = 10;
int cjack = 10;
int card;
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
int main() {

    printf("Welcome to SmithJack!\n\n");
    printf("Let's play!\n");
    
    switch(card){
        case '1':
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

    while (yn != 'N') {
        
        srand(time(NULL));
        n = 1 + rand() % 10;
        y = 1 + rand() % 10;
        
        while ( x != n*y ) {

            printf("First number is %d and", n);
            printf(" the second number is %d\n", y);

            printf("Enter your initial guess of the product of these two numbers\n");
            scanf("%d", &x);

            if (x == n*y) {
                printf("Correct! That's the answer\n");
            }
            else if (x > n*y) {
                printf("Too high, try again\n");
            }
            else if (x < n*y) {
                printf("Too low, try again\n");
            }
        }

        printf("Would you like to play again?(Y or N)\n");
        scanf(" %c", &yn);
    }
    printf("Thank you for playing\n");
    return 0;
}
