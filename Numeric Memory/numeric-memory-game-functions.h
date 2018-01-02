#include "printing-functions.h"
#include "rand.h"
#include <stdio.h>
#include "array.h"
#include "input-output.h"
#include "numeric-memory-scores.h"

#define MAX_INPUT 5000
#define WAIT_TIME 5 //This is the amount of time in seconds the user has to remember the number

void initial_output(char input[], int size){
	print_array(input, size); //This prints the number for the user to see
	sleep(WAIT_TIME); // This pauses the execution for 5 seconds so the user has time to take in the number
	print_space(); //This prints 100 new lines to hide the number
}

void initial_operations(char input[], int size){
	number_generator(input, size);
	initial_output(input, size);	
}

void play_numeric_memory_game(){
	printf("We start the code \n");
	int has_lost = 0; //This contains information on whether the player has lost yet
	int level = 1; //This is our current level
	while(has_lost != 1){//Since 1 is true, this loop continues while the player has not lost
		char target_number[level];//This will store the number we display to the user
		initial_operations(target_number, level);
		char input[MAX_INPUT]; // This is the initial user input which we store as a string so the program doesn't crash if they accidentally type 'a'
		intitialize_character_array(input, MAX_INPUT);
		scanf("%s", input);
		if(compare_numbers(target_number, input, level) != 1){ //If the numbers aren't the same
			has_lost = 1; //You've lost
			int input_length = find_length(input, MAX_INPUT);
			defeat_message(level, target_number, input, level, input_length); //Prints out the message to let them know they've lost
			record_score(level);
			print_high_scores();
		}else{ // Else you've won the level
			level++; // You advance to the next level
			congratulatory_message(level); // And are congratulated for your achievement
		}
	}
}

