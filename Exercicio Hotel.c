#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float Taxa, Lucro;
	char Nome_Cliente;
	int i,n, Diarias;
	printf(" Diaria = R$50.00\n Taxa por dia:\n 1-14 dias -> R$4.00\n 15 dias -> R$3.60\n+15 dias -> R$3.00\n");
	printf("Digite a quantidade de quartos disponiveis no hotel: \n");
	scanf("%i",&n);
	for(i=1;i<=n;i++){	
	printf("\n");
	printf("Quarto %i:\n",i);
	Taxa = 0;
	printf("Digite a inicial do seu nome e quantos dias vai ficar no hotel: \n");
	scanf(" %c",&Nome_Cliente);
	scanf("%i", &Diarias);
	if(Diarias < 15){
	Taxa = (Diarias*50) + (Diarias*4);
	}
	else{
		if(Diarias == 15){
			Taxa = (Diarias*50)+(Diarias*3.60);
		}
		else{
			Taxa = (Diarias*50)+(Diarias*3);
		}
	}
	printf("Incial do cliente: %c, \nValor a pagar: %.2f Reais\n",Nome_Cliente, Taxa);
	printf("\n");
	Lucro = Lucro + Taxa;
}
printf("Lucro total do hotel = %.2f Reais",Lucro);
	
	
	
	
	
	
	return 0;
}
