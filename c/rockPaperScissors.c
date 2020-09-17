#include<stdlib.h>
#include<stdio.h>
#include<time.h>

char MOVES[3][9] = { "Rock", "Paper", "Scissors" };

typedef enum {
  ROCK = 1,
  PAPER,
  SCISSORS
} Move;

typedef enum {
  TIE = 1,
  HUMAN,
  COMPUTER
} Player;


/**
 * This function converts a Move to a human readable string
 * This function has been done for you.
 */
char *moveToString(Move m);

/**
 * This function randomly selects a valid move.
 * This function has been done for you.
 */
Move getComputerMove();

/**
 * Given the moves of the two players, this function
 * determines a winner if any or returns a value to
 * indicate a tie.
 *
 * TODO: You need to implement this function
 */
Player getWinner(Move human, Move computer);

/**
 * This method prompts the user to input their move
 * (rock, paper or scissors).  If the user gives
 * invalid input, it reprompts them until valid
 * input is provided.  The function returns one of
 * the enumerated Move values corresponding to the
 * player's choice.
 *
 * TODO: You need to implement this function
 */

 
Move getPlayerInput();

int main(int argc, char **argv) {

  //nothing in the main function needs to change.
  srandom(time(NULL));

  Move player = getPlayerInput();

  Move computer = getComputerMove();
  Player winner = getWinner(player, computer);

  if(winner == TIE) {
    printf("Tie, you both chose %s, don't think like a computer!\n", moveToString(player));
  } else if(winner == HUMAN) {
    printf("A winner is you!  Your %s defeats the computer's %s\n", moveToString(player), moveToString(computer));
  } else if(winner == COMPUTER) {
    printf("The computer's mighty %s defeats your pathetic %s\n", moveToString(computer), moveToString(player));
  }


}


char *moveToString(Move m) {
  return MOVES[m-1];
}

Move getComputerMove() {
  return random() % 3 + 1;
}

Player getWinner(Move human, Move computer) {

  if(human == computer){
	return TIE;
  }else if(human == ROCK && computer == PAPER){
	return COMPUTER;
  }else if(human == PAPER && computer == SCISSORS){
	return COMPUTER;
  }else if(human == SCISSORS && computer == ROCK){
	 return COMPUTER;
  }else if(human == ROCK && computer == SCISSORS){
	return HUMAN;
  }else if(human == PAPER && computer == ROCK){
	return HUMAN;
  }else if(human == SCISSORS && computer == PAPER){
	 return HUMAN;
  }
  
  
}

Move getPlayerInput() {
	
	int playerio;
   printf("Type in your move: ");
 
	scanf("%d", playerio);
 return playerio;
 

 
}