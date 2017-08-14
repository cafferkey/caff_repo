#include "stdafx.h"
#include <stdio.h>

void printString(char *string);
void sortString(char *string);
int getStringLength(char *string);

void main()
{
	char str1[] = "bcGpsWoNaTbFnoZzwX";
	char *s = str1;

	printString("Unsorted String: ");
	printString(str1);
	printString("\n");
	sortString(str1);
	printString("Sorted String:");
	printString(str1);
	printString("\n");
}

int getStringLength(char *string)
{
	int i = 0;
	while (*(string + i) != '\0') {
		i++;
	}
	return i;
}

void printString(char *string) {
	puts(string);
}

void sortString(char *string) {
	int len = getStringLength(string);
	int i = 0;
	char temp;

	for (i = 0; i < len; i++)
	{
		
			if (*(string + i) > *(string + i + 1))
			{
				temp = (*(string + i));
				*(string + i) = *(string + i + 1);
				*(string + i + 1) = temp;
			}
		
	}
}
		
		
