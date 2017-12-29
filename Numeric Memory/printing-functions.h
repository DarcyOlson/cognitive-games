#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_LINE 150

// Prints 100 new lines to conceal a previous output from the user

void print_space(){
	for(int i = 0;i < 100;i++){
		printf("\n");
	}
}

// prints an inputted array

void print_array(char input[], int length){
	for(int i = 0; i < length;i++){
		printf("%c", input[i]);
	}
	printf("\n");
}

// Lets the user know they've lost

void defeat_message(int level, char input_1[], char input_2[], int size_1, int size_2){
	printf("You have lost, my lord. \n");
	printf("The target string was: ");
	print_array(input_1, size_1);
	printf("You thought the target string was: ");
	print_array(input_2, size_2);
	printf("\nYour final score is %d \n", level);
}

// Lets the user know they've beaten the level

void congratulatory_message(int level){
	printf("Congratulations, you advance to level %d \n", level);
	sleep(3);
	print_space();
}

void print_char_array(char input[], int size){
	for(int i = 0;i < size;i++){
		printf("%c",input[i]);
	}
	printf("\n");
}

void print_high_scores(){
	FILE * file_pointer;
	file_pointer = fopen("high-scores.txt", "r");
	char file_line[MAX_LINE];
	while(!feof(file_pointer)){
		fgets(file_line, MAX_LINE, file_pointer);
		puts(file_line);
	}
	fclose(file_pointer);
}