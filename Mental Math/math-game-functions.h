#include <stdio.h> //This is used for all input and output
#include <stdlib.h> //This is included rand
#include <string.h>
#include <time.h> //this is included so we can use the time function to seed our rand() PRNG

#include "input.h"
#include "output.h"

#define FALSE 0
#define TRUE 1
#define TIME_SEED 0

void generate_summands(int summands[], int size){
	srand(time(TIME_SEED));
	for(int i = 0;i < size;i++){
		summands[i] = rand()%10;
	}
}

void play_math_game(){
	int is_incorrect = FALSE;
	int user_answer;
	int summands[2];
	int counter = 0;
	while(is_incorrect == FALSE){
		generate_summands(summands, 2);
		print_question(summands[0], summands[1]);
		user_answer = gets_answer();
		if(user_answer != summands[0] + summands[1]){
			is_incorrect = TRUE;
			counter++;
		}
	}
}