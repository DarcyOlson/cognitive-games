#include <stdio.h> //This is used for all input and output
#include <stdlib.h> //This is included rand
#include <string.h>
#include <time.h> //this is included so we can use the time function to seed our rand() PRNG

#define FALSE 0
#define TRUE 1
#define TIME_SEED 0

//#define STRING_LENGTH 1000

void generate_summands(int summands[], int size){
	srand(time(TIME_SEED));
	for(int i = 0;i < size;i++){
		summands[i] = rand()%10;
	}
}

int gets_answer(){
	int user_input;
	scanf("%d", &user_input);
	return user_input;
}

void welcome_message(){
	printf("%s", "Welcome to the Math Game!\n");
}

void print_question(int summand_1, int summand_2){
	printf("%s \n", "Welcome");
	printf("%d \n", summand_1);
	printf("%d \n", summand_2);
}

void play_game(){
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

int main(){
	play_game();
	return 0;
}