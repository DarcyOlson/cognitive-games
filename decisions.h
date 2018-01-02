/* Here we store the functions that decide which game is being played*/

#include "/Users/darcy/Desktop/cognitive-games/Numeric Memory/numeric-memory-game-functions.h"
#include "/Users/darcy/Desktop/cognitive-games/Mental Math/math-game-functions.h"

void choose_game(int user_choice){
	printf("We compare %d to %d",user_choice,1);
	if(user_choice == 1){
		play_math_game();
	}else{
		play_numeric_memory_game();
	}
}