//////////// BUILDING LOGIC - 1 ////////////////////
/////////// RANDOM NUMBER GENERATOR ///////////////



////// BASIC PSEUDO-RANDOM GENERATOR //////

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){

//     srand (time(NULL));

//     // i<5 generates 5 pseudo-random integers
//     for (int i=0; i<5; ++i){
//         printf ("%d\n", rand());
//     }
//     return 0;
// }



/////// 1-3 RANDOM GENERATOR /////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i;
    int num;

    // srand(time(NULL)) seeds the random number generator with the current time. Since the current time changes with each program run, 
    // the seed will be different each time, resulting in different sequences of random numbers.

    srand (time(NULL));

    // % 3 ensures that the random number generated will be in range 0 to 2. And, when we add 1 to it, the random number will always be between 1 and 3

    for (i=0; i<5; ++i){
        num = (rand() %3) + 1;
        printf ("%d\n", num);
    }

    return 0;
}

