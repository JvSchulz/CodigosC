#include <stdio.h>
#include <stdlib.h>
//Exercicio 5
	int conversor(int H,int M,int S);
	
	int main(){
		int Hora, Minuto, Segundo,total;
		printf("Digite a hora os minutos e segundos respectivamente: \n");
		scanf("%i %i %i",&Hora,&Minuto,&Segundo);
		total = conversor(Hora, Minuto, Segundo);
	printf("Total de segundos e: %i \n",total);
	
	return 0;
}

int conversor(int H, int M, int S){
	int hora = (H * 60) *60;
	int minuto = M*60;
	int segundo  = S;
	int soma = hora + minuto + segundo;
	return soma;
}
