#include <stdlib.h>
#include <time.h>

// Generates a random number to display to the user for memorization

void number_generator(char input[], int length){
	srand(time(NULL));
	char char_digit;
	for(int i = 0;i < length;i++){
		char_digit = rand()%10 + '0';
		input[i] = char_digit;
	}
}