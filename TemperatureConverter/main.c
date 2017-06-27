#include<stdio.h>
#include "func.c"


int main() {

	/*Declare Variables*/
	double initC;
	double finC;
	double step;
	double betC;
	double betF;

	/*Ask and scan for user defined variables (initC, finC, step)*/
	printf("Pick an initial Celcius temperature (>-20): ");
	scanf("%lf", &initC);
	while(initC < -20){
		printf("Please choose a suitable value: ");
		scanf("%lf", &initC);
	}

	printf("Pick a final celcius temperature (<1000): ");
	scanf("%lf", &finC);
	while(finC >= 1000){
		printf("Please choose a suitable value: ");
		scanf("%lf", &finC);
	}

	printf("Pick a step size: ");
	scanf("%lf", &step);
	while(step > (finC-initC)){
		printf("Please choose a suitable value");
		scanf("%lf", &step);
	}

	betC = initC; /*So that it can be used properly later.*/

	/*Begin to print table*/
	printf("\nCelcius       Farenheight\n");
	printf("-------       -----------\n");

	/*Print C Values, Compute F Values, and Print F values*/
		while(betC <= finC) {
		betF = CtoF(betC); /*Computes conversion*/
		printf("%10lf     %10lf\n",betC,betF); /*Prints*/
		betC = betC + step;
	}

	return 0;
}


