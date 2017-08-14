#include "stdafx.h"
#include "stdio.h"


void main()
{
	int English;
	int Irish;
	int French;
	int Maths;
	int Science;


	printf("Enter English Mark: ");
	scanf_s("%d", &English);

	printf("Enter Irish Mark: ");
	scanf_s("%d", &Irish);

	printf("Enter French Mark: ");
	scanf_s("%d", &French);

	printf("Enter Maths Mark: ");
	scanf_s("%d", &Maths);

	printf("Enter Science Mark: ");
	scanf_s("%d", &Science);
		
	float average = (float(English) + float(Irish) + float(French) + float(Maths) + float(Science)) / 5;
	printf("\nAverage Mark = %.2f \n", average);

	
	printf("Fails: ");

	if (English < 40) {
		printf("English, ");
	}
	
	if (Irish < 40) {
		printf("Irish, ");
	}

	if (French < 40) {
		printf("French, ");
	}

	if (Maths < 40) {
		printf("Maths, ");
	}

	if (Science < 40) {
		printf("Science, ");
	}

	if (English > 40 && Irish > 40 && French > 40 && Maths > 40 && Science > 40) {
		printf("None");
	}


	printf("\nPasses: ");

	if (English >= 40) {
		printf("English, ");
	}

	if (Irish >= 40) {
		printf("Irish, ");
	}

	if (French >= 40) {
		printf("French, ");
	}

	if (Maths >= 40) {
		printf("Maths, ");
	}

	if (Science >= 40) {
		printf("Science, ");
	}

	if (English < 40 && Irish < 40 && French < 40 && Maths < 40 && Science < 40) {
		printf("None \n");
	}


	printf("\nHighest Mark: ");

	if (English > Irish && English > French && English > Maths && English > Science) {
		printf("%d in English \n", English);
	}

	if (Irish > English && Irish > French && Irish > Maths && Irish > Science) {
		printf("%d in Irish \n", Irish);
	}

	if (French > Irish && French > English && French > Maths && French > Science) {
		printf("%d in French \n", French);
	}

	if (Maths > Irish && Maths > English && Maths > French && Maths > Science) {
		printf("%d in Maths \n", Maths);
	}

	if (Science > Irish && Science > English && Science > French && Science > Maths) {
		printf("%d in French \n", Maths);
	}
}
