/*
									***INTRODUCTION***

This is a piece of code to make a nice interface for all the other code I have written for
the cognitive games code. Its goal is to give the user a choice bar to select different
games. Previously, users had no option to play both of numeric memory and math at the same
time. Now, they can play both using the interface designed below.

*/

#include <stdio.h>
#include <stdlib.h>
#include "decisions.h"
#include "welcome-messages.h"
#include "user-input.h"

int main(){
	opening_message();
	int test = grand_input_function();
	printf("We execute choose game\n");
	choose_game(test);
	return 0;	
}