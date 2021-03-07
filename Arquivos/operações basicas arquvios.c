#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
int account;
char name[30];
double balance;

FILE *cfPtr;
if((cfPtr = fopen("Clients.dat","w"))== NULL){
    printf("Arquivo não pode ser aberto \n");
}
else{
    printf("Digite o numero de conta, o nome e o saldo. \n");
    printf("Digite fim de arquivo para terminar a entrada.\n");
    printf("? ");
    scanf("%d%s%lf",&account, name, &balance);

}
while (!feof(stdin)){
    fprintf(cfPtr, "%d%s%.2f \n",account,name, balance);
    printf("?");
    scanf("%d%s%lf",&account, name, &balance);
}
fclose(cfPtr);

int i;
char texto[30] = "Disciplina de LPG";
FILE *f;
if((f = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Clients.dat","w"))==NULL){
    printf("Arquivo nao pode ser aberto\n");
system("pause");
return(1);

}
else{
        for(i=0;i<strlen(texto);i++){
            fputc(texto[i],f);

        }
        int fclose(FILE *f);
}

int i;
char c;
FILE *f;
if((f=fopen("C:\\Users\\UDESC\\Desktop\\aula\\Clients.dat","r"))== NULL){
    printf("Arquivo nao pode ser aberto!\n");
}

else{
    c = fgetc(f);
    while(c!=EOF){
        printf("%c",c);
        c= fgetc(f);
    }
    int fclose(FILE *f);

    }



int i;
char c;
FILE *f1, *f2;
f1 = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Clients.dat","r");
f2 = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Clients2.dat", "w");
if(f1==NULL || f2 == NULL){
    printf("Arquivo nao pode ser aberto");
    system("pause");
    return (i);
}
else{
    c = fgetc(f1);
    while(c!=EOF){ //ou pode ser usado foef que é a função que verifica o final do arquivo.
        printf("%c",c);
        fputc(toupper(c),f2);
        c=fgetc(f1);

    }
    int fclose(FILE *f1);
    int fclose (FILE *f2);

}
*/
int i;
char c;
FILE *f1;
 f1 = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Clients2.dat", "w");
 if (f1 ==NULL)
 {
 printf( "ARQUIVO NAO PODE SER ABERTO \N");
 system("pause");
 return(1);
 }
else {
 fputs("disciplina de LPG0001", f1);
 fputc('\n',f1);
 fputs("nome do aluno:", f1);
 }
fclose(f1);

    return 0;
}
