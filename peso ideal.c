#include<stdlib.h>
#include<stdio.h>

int main(){
	float altura,peso_ideal;
	char sexo;
	printf("Digite sua altura e sexo (F ou M) respectivamente:  \n");
	scanf("%f %c",&altura,&sexo);
	if(sexo == 'F'){
		peso_ideal = 62.1*altura - 44.7;
	}
	else{
		peso_ideal = 72.7*altura - 58;
	}
	printf("Altura = %.2f\n Sexo = %c \n Peso ideal = %.2f \n",altura,sexo,peso_ideal);
	
	return 0;
}
