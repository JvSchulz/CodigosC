#include <stdio.h>
#include <stdlib.h>

float Serie(float N){
	if(N==0)
	return 1;
	else
	return (N*N+1/N) + Serie(N-1);
}
int main (){
	printf("Valor da serie: %.2f",Serie(5));
	return 0;
}
	
	
	
	
	
