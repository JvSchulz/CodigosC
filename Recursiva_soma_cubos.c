#include <stdio.h>
#include <stdlib.h>

int somaCubos(int N){
	if(N==0)
	return 0;
	else
	return (N*N*N) + somaCubos(N-1);
	
}
int main(){

	printf("Soma dos N primeiros Cubos de 1 a 7: %d",somaCubos(7));
	return 0;
}

	
	
	
	
	
	
	
