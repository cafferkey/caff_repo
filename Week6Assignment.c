#include "stdafx.h"
#include "stdio.h"


void main()
{
	char string1[] = "id2Ux2EgWyv0TRWm2d7f";
	char string2[] = "TeoPOiN1blA9w8ZSsmIj";
	char string3[] = "knhEesV2EzGsrAzT7y1y";
	int i;
	int totalString1 = 0;
	int totalString2 = 0;
	int totalString3 = 0;

	printf("BEFORE:\n");
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n", string2);
	printf("string3 = %s\n", string3);


	for (i = 0; i < 20; i++) {
		
		if ((string1[i] > 47) && (string1[i] < 58)) {

			string1[i] = ' ';
			totalString1++;

		}

		if ((string2[i] > 64) && (string2[i] < 91)) {

			string2[i] = string2[i] + 32;
			totalString2++;

		}

		if ((string3[i] > 96) && (string3[i] < 122)) {

			string3[i] = string3[i] - 32;
			totalString3++;

		}
	}


	printf("\nAFTER:\n");
	printf("string1 = %s <%d digits replaced>\n", string1, totalString1);
	printf("string2 = %s <%d characters converted to lowercase>\n", string2, totalString2);
	printf("string3 = %s <%d characters converted to UPPERCASE>\n", string3, totalString3);
}
