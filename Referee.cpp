#include "Referee.h"
#include <iostream> 

char Referee::refGame(Human player1, Computer player2){
    char WinOrLoss; 
    
    char computer = player2.makeMove(); 
    char player = player1.makeMove();

    if(player == computer){WinOrLoss = 'T';}
    else if (player == 'S' && computer == 'R'){WinOrLoss = 'L';}
    else if (player == 'P' && computer == 'R'){WinOrLoss = 'W';}

    return WinOrLoss; 
}