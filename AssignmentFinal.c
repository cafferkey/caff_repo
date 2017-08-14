#include "stdafx.h"
#include "stdio.h"

int countVowels(char string[]);
int numberOfVowels = 0;

char string[100];

void main() {

	printf("Enter string: \n");
	scanf_s("%s", &string);
	
}

int countVowels(char[]) {
	
	int i;

	for (i = 0; string[i] != '\0'; i++) {
		
		if (string[i] == 65  || string[i] == 69  ||
			string[i] == 73  || string[i] == 79  ||
			string[i] == 85  || string[i] == 97  ||
			string[i] == 101 || string[i] == 105 ||
			string[i] == 111 || string[i] == 117)

		{
			numberOfVowels++;
		}
	}

	return numberOfVowels;
}

