#include<stdio.h>
#include "func.c"

int main(int argc, char *argv[]) {
	/*Set Variables*/

	/*Check for correct number of arguements*/
	if(argc > 3 || argc < 2){
		printf("Incorrect number of arguments\n");
	}

	printf("%s %lu  %s\n",argv[1],(sizeof(argv[1])/sizeof(argv[1][0])),argv[2]);

	/*for(int ii=0; ii<sizeof(ar*/
	return 0;
}

