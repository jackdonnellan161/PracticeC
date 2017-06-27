int * allCel(int min, int max, int step){
	int ii=0;
	int newC = min-step;
	static int allC[100];
	while(newC <= max){
		newC = newC + step;
		allC[ii] = newC;
		ii++;
	}
	return allC;
}

float CtoF(float C){
	int F = C*(9/5)+32;
	return F;
} 

