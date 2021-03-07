#include <stdio.h>
#include <stdlib.h>

int somatorio(int N){
	if(N==0)
	return 0;
	else
	return N + somatorio(N-1);
	
}
int main(){

	printf("Somatorio: %d",somatorio(2));
	return 0;
}

	
	
	
	
	
	
	
