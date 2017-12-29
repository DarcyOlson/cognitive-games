
//Compares two inputted arrays to see if they have identical entries

int compare_numbers(char input_1[], char input_2[], int size){
	int is_identical = 1;
	for(int i = 0;i < size;i++){
		if(input_1[i] != input_2[i]){
			is_identical = 0; 
		}
	}
	return is_identical;
}

void intitialize_character_array(char input[], int size){
	for(int i = 0;i < size;i++){
		input[i] = '~';
	}
}

int find_length(char input[], int size){
	int length = 0;
	int index = 0;
	int length_found = 0;
	while(length_found != 1){
		if(input[index] == '~'){
			length_found = 1;
		}else{
			length++;
		}
		index++;
	}
	return length;
}