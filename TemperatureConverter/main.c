#include<stdio.h>
#include "func.c"


int main() {

	/*Declare Variables*/
	float allF;
	int initC;
	int finC;
	float step;
	int *list;

	/*Ask and scan for user defined variables (initC, finC, step)*/
	printf("Pick an initial Celcius temperature: ");
	scanf("%d", &initC);
	printf("Pick a final celcius temperature: ");
	scanf("%d", &finC);
	printf("Pick a step size: ");
	scanf("%f", &step);

	/*Determine all the temperatures to be converted and store them in an array*/
	list = allCel(initC,finC,step);

	/*Print all C values*/
	for(int ii=0;ii<100;ii++){
		printf("%d\n",*(list+ii));
	}

	return 0;
}


