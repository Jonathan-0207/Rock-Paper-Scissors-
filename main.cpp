#include "Referee.h"
#include <iostream> 

int main(){
    Human humanPlayer; 
    Computer ComputerPlayer; 
    Referee RefereeThing; 

    char MM = RefereeThing.refGame(humanPlayer, ComputerPlayer); 
    std::cout << MM << std::endl; 
}