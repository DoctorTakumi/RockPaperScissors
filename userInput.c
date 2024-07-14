//////////// BUILDING LOGIC - 3 ////////////////
//////////// TAKING USER INPUT ///////////////



#include <stdio.h>
#include <ctype.h>

// function to get user inputs
char getUserInput(){
    char userInput;

    printf ("Enter your choice: ");
    scanf ("%c", &userInput);

    userInput = tolower(userInput);

    return userInput;
}

int main(){

    // function call
    char result = getUserInput();

    switch (result) {
    case 'r':
    printf("rock");
    break;
    case 'p':
    printf("paper");
    break;
    case 's':
    printf("scissors");
    break;
  }
 
  return 0;
}