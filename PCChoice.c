/////////////////// BUILDING LOGIC - 2 /////////////////////
/////////// PC CHOICE - ROCK/PAPER/SCISSORS ///////////////



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// returns either 'r', 'p' or 's'
char getPCChoice (){

    // generates random num based on time
    srand (time(NULL));

    // random num between 1 and 3
    int randomNum = (rand() % 3) + 1;

    // variable to store PC choice
    char PCChoice;

    // switch...case to assign rock/paper/scissors to 1/2/3 respectively
    switch(randomNum){
        case 1:
        PCChoice = 'r';
        break;
        case 2:
        PCChoice = 'p';
        break;
        case 3:
        PCChoice = 's';
        break;
    }
    return PCChoice;
}

int main(){

    // function call
    char choice = getPCChoice();

    // switch...case to print out the PC choice
    switch(choice){
        case 'r':
        printf ("rock");
        break;
        case 'p':
        printf ("paper");
        break;
        case 's':
        printf ("scissors");
        break;
    }

    return 0;
}