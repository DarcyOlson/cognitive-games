#include <stdio.h>

#define NUMBER_OF_DIGITS 10 // This is 10 because that is how many digits are in the decimal system we use for this game

//This function checks a character array to see if it contains target

int contains(char input[], char target, int size){
	int is_contained = 0;
	for(int i = 0;i < size;i++){//scans the array
		if(input[i] == target){//if any of the input equal the target
			is_contained = 1; // then the array contains the target and we set is_contained to 1 or true
		}
	}
	return is_contained; //return is_contained
}

//This functions determines if a character array is an integer (e.g. tells '120' an integer from 'abc' just a regular old string)

int is_integer(char input[], int size){
	int is_int = 1;
	char acceptable_character[NUMBER_OF_DIGITS] = {'0','1','2','3','4','5','6','7','8','9'};
	for(int i = 0;i < size;i++){
		if(contains(acceptable_character, input[i], NUMBER_OF_DIGITS) == 0){
			is_int = 0;
		}
	}
	return is_int;
}

//This function will convert a character array into an integer array assuming the char array was determined to be an integer

void char_to_array(char number[], int array_number[], int size){
	if(is_integer(number, size) == 1){
		for(int i = 0;i < size;i++){
			array_number[i] = number[i] - '0';
		}
	}else{
		printf("We decided not to print it this time \n");
	}
}

