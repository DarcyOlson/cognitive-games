/* 

This file contains the greeting messages for the user interface

*/

//Here we make the definitions we want to use

#define GAME_1 "Mental Math"
#define GAME_2 "Numeric Memory"
#define NUMBER_OF_GAMES 2

//Here we include the libraries we'll need to use

#include <stdio.h> //We'll need this because we're going to do a lot of outputting here

//Here we begin writing the functions

//Just prints a simple greeting to the user
void welcome_message(){
	printf("\n\nWelcome to Cognitive Games! \n\n");
}

void print_menu_helper_1(){
	printf("Choose the Game You Want to Play \n\n");
}

void print_menu_helper_2(){
	printf("\t %s", "1) ");
	printf("\t %s\n", GAME_1);
	printf("\t %s", "2)");
	printf("\t %s\n", GAME_2);
}

/* 
This displays the menu of games currently offered by the cognitive games suite (mental math and
numeric memory as of December 28, 2017.)
*/

void print_menu(){
	print_menu_helper_1();
	print_menu_helper_2();
}

void opening_message(){
	welcome_message();
	print_menu();
}