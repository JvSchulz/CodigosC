#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
FILE *arq;
char nome[20]= "Ricardo";
int i = 30;
float a = 1.74;
int result;
arq = fopen("C:\\Users\\UDESC\\Desktop\\Aula\\aula.txt","w");
if(arq == NULL){
    printf("Problemas na abertura do arquivo");
    system("pause");
    exit(1);
}
fprintf(arq,"Nome: %s\n",nome);
fprintf(arq,"Idade: %d\n",i);
fprintf(arq,"Altura: %.2f\n",a);
fclose(arq);
*/

int id;
char texto[20],nome[30];
float h;
int conta;
char nomes[30];
float saldo;
FILE *f,*x;

if((f = fopen("C:\\Users\\UDESC\\Desktop\\Aula\\aula.txt", "w"))== NULL){
    printf("Arquivo nao pode ser aberto \n");
    return(1);

}
else{
    scanf("%d%s%f",&conta,nomes,&saldo);
    while(!feof(stdin)){
        printf("Conta: %d\nNome: %s\nSaldo: %.2f\n",conta,nomes,saldo);
        fprintf(f,"Conta: %d\nNome: %s\nSaldo: %.2f\n",conta,nomes,saldo);
        scanf("%d%s%f",&conta,nomes,&saldo);
    }
    int fclose(FILE *f);
}

system("pause");

if((x = fopen("C:\\Users\\UDESC\\Desktop\\Aula\\aula.txt","r"))== NULL){
    printf("Arquivo nao pode ser aberto");
    return(1);
}
else{
    fflush(stdin);
    fscanf(x,"%s%d\n",texto,&id);
    printf("%s%d\n",texto,id);
    fflush(stdin);
    fscanf(x,"%s %s",texto,nome);
    printf("%s%s\n",texto,nome);
    fflush(stdin);
    fscanf(x,"%s %f\n",texto,&h);
    printf("%s %f\n",texto,h);
}
fclose(x);
    return 0;

}
