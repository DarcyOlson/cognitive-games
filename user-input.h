//In this header we write functions used to determine which game the user wants to play

#include <stdio.h>

#define MAX_INPUT 5000
#define DIGITS 2
#define TRUE 1
#define FALSE 0

char user_input[MAX_INPUT];

//This function gets the user input.
void user_choice(){
	scanf("%s", user_input);
}

//This function helps is_integer determine if the input is valid
int is_integer_helper(char input[], int test_value){
	for(int i = 0;i < DIGITS;i++){//This loop checks if the first digit is anything we can use
		/*
		printf("%s", "We compare: ");
		printf("%c", user_input[0]);
		printf("%s", "with");
		printf("%c", input[i]);
		*/
		if(user_input[0] == input[i]){//If it is
			//printf("%s", "\n and determine them to be equal \n");
			test_value = TRUE;//We take the input
			break;
		}else{
			//printf("%s", "\n and find them unequal \n");
		}
	}//If we exit the loop without detecting valid input, we return false to indicate the input is invalid.
	//printf("We return %d \n", test_value);
	return test_value;
}
//This function determines if input is valid or not
int is_valid(){
	char acceptable_characters[DIGITS] = {'1','2'}; //List of acceptable digits
	int is_an_integer = FALSE;//We start by assuming the input is false
	is_an_integer = is_integer_helper(acceptable_characters, is_an_integer);//We then determine here whether it is appropriate or not
	//printf("is_integer returns %d", is_inte)
	return is_an_integer;//And here we return either true or false
}
//This function returns the integer version of what the user entered. It only ever handles valid inputs.
int give_input(){
	return (int)user_input[0];
}
//A simple message if the user gives a bad input.
void error_message(){
	printf("%s\n","Invalid input. Please try again");
}

int grand_input_function(){
	int return_value;
	user_choice();
	int input = is_valid();
	//printf("We compare %d with %d \n",input, TRUE);
	while(input != TRUE){
		error_message();
		user_choice();
		input = is_valid();
	}
	return_value = (int)user_input[0]-48;
	return return_value;
}