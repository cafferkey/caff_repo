#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

FILE *fp;

void  main(int argc, char *argv[])
{
	int patientID = *argv[1];
	float temp = *argv[2];
	int pulseRate = *argv[3];
	int respRate = *argv[4];
	int bpSys = *argv[5];
	int bpDia = *argv[6];

	fp = fopen("log.txt", "a");

	fprintf(fp, __DATE__ );
	fprintf(fp, "\t");
	fprintf(fp, __TIME__);
	fprintf(fp, "\t%d\t", patientID);
	fprintf(fp, "%.2lf\t", temp);
	fprintf(fp, "%d\t", pulseRate);
	fprintf(fp, "%d\t", respRate);
	fprintf(fp, "%d\t", bpSys);
	fprintf(fp, "%d\n", bpDia);
}