/////////// BUILDING LOGIC - 4 //////////////
//////////// DECISION MAKING ///////////////



// trash function for decision making
char getResult (char userPick, char PCPick){

    // condition for draw
    if (PCPick == userPick){
        return 'd';
    }

    // conditions for user to win
    else if (userPick == 'p' && PCPick == 'r'){
        return 'w';
    }
    else if (userPick == 'r' && PCPick == 's'){
        return 'w';
    }
    else if (userPick == 's' && PCPick == 'p'){
        return 'w';
    }

    // all other conditions result in user losing
    else {
        return 'l';
    }
}