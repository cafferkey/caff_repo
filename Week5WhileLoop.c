
#include "stdafx.h"
#include "stdio.h"


void main()
{
	int ages[10];

	printf("Program to calculate average of up to 10 ages\n");
	printf("Enter up to 10 ages <-1 to end input>\n\n");

	int i = 1;

	while (i <= 10) {

		printf("#%d: ", i);
		scanf_s("%d", &ages[i - 1]);

		if (ages[i - 1] == -1) {
			break;
		}

		i++;

	}

	int k;
	double total = 0;
	double averageAge;

	for (k = 0; k < (i - 1); k++) {
		total = total + ages[k];
	}

	averageAge = total / (i - 1);
	printf("\nAverage age: %.2lf \n", averageAge);

	int maxAge = ages[0];
	int j = 0;

	for (j = 0; j < i; j++) {

		if (ages[j] > maxAge) {
			maxAge = ages[j];
		}
	}

	printf("Maximum age: %d\n", maxAge);


	int minAge = ages[0];
	int x = 0;

	for (x = 0; x < i; x++) {

		if (ages[x] > maxAge) {
			maxAge = ages[x];
		}
	}

	printf("Minimum age: %d\n", minAge);

}
