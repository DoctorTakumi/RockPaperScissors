#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// function to get computer's choice
// returns either 'r', 'p', or 's' for rock, paper or scissors
// later switch char to string?
char getPCsChoice(){

    // generate random number based on current time
    srand(time(NULL));

    // random num between 1 and 3
    int randomNum = (rand() % 3) +1;
    // variable to store PC choice
    char PCsChoice;

    // switch...case to assign rock/paper/scissors to 1/2/3 respectively
    switch(randomNum){
        case 1:
        PCsChoice = 'r';
        break;

        case 2:
        PCsChoice = 'p';
        break;

        case 3:
        PCsChoice = 's';
        break;
    }

    return PCsChoice;
}

// function to get user input
// take user input and return it
char getUserInput(){

    // variable to store user input
    char userInput;

    printf ("Enter your choice\n(r for rock, p for paper, s for scissors): ");     //// redo this later when converting to strings
    scanf ("%c", &userInput);

    // set input to lowercase
    userInput = tolower(userInput);

    return userInput;
}

// function to compare user input and computer's choice
// return either 'w', 'l' or 'd' for win, loss or draw, respectively
// convert char to string later
// logical operators can be written more readable!!!
char getResult (char userPick, char PCsPick){

    // condition for user to draw
    if (userPick == PCsPick){
        return 'd';
    }

    // conditions for user to win
    else if (userPick == 'p' && PCsPick == 'r'){
        return 'w';
    }
    else if (userPick == 'r' && PCsPick == 's'){
        return 'w';
    }
    else if (userPick == 's' && PCsPick == 'p'){
        return 'w';
    }

    // all other conditions will result in user losing
    else{
        return 'l';
    }
}

int main(){

    // functions call
    char PCsPick = getPCsChoice();

    // resolving the possible wrong inputs
    
    char userPick;
    while (1){
        userPick = getUserInput();
        if (userPick == 'r' || userPick == 'p' || userPick == 's'){        ///// redo this later, char to string
            break;
        }
    }

    char result = getResult (userPick, PCsPick);

    // switch...cases to print out the results
    switch(result){
        case 'w':
        printf ("PC picked %c\n", PCsPick);
        printf ("You picked %c\n", userPick);
        printf ("You won!");
        break;

        case 'l':
        printf ("PC picked %c\n", PCsPick);
        printf ("You picked %c\n", userPick);
        printf ("You lost!");
        break;

        case 'd':
        printf ("PC picked %c\n", PCsPick);
        printf ("You picked %c\n", userPick);
        printf ("Draw!");
        break;
    }

    return 0;
}