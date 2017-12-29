#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 150

void record_score(int level){
	char user_name[NAME_LENGTH];
	printf("Please enter your name for the high score table: ");
	scanf("%s", user_name);
	FILE * file_pointer;
	file_pointer = fopen("high-scores.txt", "a");
	fprintf(file_pointer, "%s", user_name);
	fprintf(file_pointer, "%s", "		");
	fprintf(file_pointer, "%d", level);
	fprintf(file_pointer,"%c",'\n');
	fclose(file_pointer);
}