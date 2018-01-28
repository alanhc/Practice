#include <stdio.h>

typedef struct irregular_word {
	char singular[100];
	char plural[100];
} ir_word;

//An array save irregular words
ir_word ir_dictionary[50];

//save irregular
void save_ir_word(char line[], int i) {
	
	char *pc = line;
	int char_i = 0;
	while ((*pc) != ' ') {
		ir_dictionary[i].singular[char_i++] = (*pc);
		pc++;
	}
	pc++; //point the next character after " ".
	char_i = 0;
	while ((*pc) != NULL) {
		ir_dictionary[i].plural[char_i++] = (*pc);
		pc++;
	}
}

void print_data(int L) {
	printf("%s\n", ir_dictionary.singular[10]);
	printf("%s\n", ir_dictionary.plural);
}

int main()
{
	int L, N;
	
	  
	scanf("%d%d", &L, &N);
	char line[100];
	for (int i = 0; i < L; i++) {
		scanf("%s", line);
		save_ir_word(line, i);
		print_data(L);
	}
}
