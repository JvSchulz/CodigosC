#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
	if(n==0)
	return 1;
	else
	return n* fatorial(n-1);
}
	
	
	
int comb(int m, int n){
	if(n>m){
	int aux=n;
	n=m;
	m=aux;
	}
	return fatorial(m)/(fatorial(n)*fatorial(m-n));
}
int main(){
	printf("Comb :%i",comb(4,2));
	return 0;
}
