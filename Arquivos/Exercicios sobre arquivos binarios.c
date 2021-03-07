#include <stdio.h>
#include <stdlib.h>
struct cadastro {
    char nome[20],endereco[30];
    int idade;
};


int main()
{
//*****************************************************************
    /*
    int gravados,v[5]={1,2,3,4,5};
    char str[20]="abcdefghij";
    float x = 5;
    FILE *arq;
    arq = fopen ("C:\\Users\\UDESC\\Desktop\\aula\\aula.txt","wb");
    if(arq==NULL){
        printf("Arquivo nao pode ser aberto \n");
        system("pause");
        return(1);
    }
    else{
        gravados = fwrite(v,sizeof(int),5,arq);
        if(gravados!=5){
            printf("erro na escrita do arquivo!");
            system("pause");
            exit(1);
        }
    fwrite(str,sizeof(char),20,arq);
    fwrite(&x,sizeof(int),1,arq);
    fclose(arq);
    }
//*****************************************************************
    int v[5],total;
    char str[20];
    FILE *arq;
    arq = fopen("C:\\Users\\UDESC\\Desktop\\aula\\aula.txt","rb");
    if(arq==NULL){
        printf("Arquivo nao pode ser aberto \n");
        system("pause");
        return(1);
    }
    else{
        total = fread(v,sizeof(int),5,arq);
        if(total!=5){
            printf("erro na leitura do arquivo!");
            system("pause");
            exit(1);
        }
        total = fread(str,sizeof(char),20,arq);
        if(total !=20){
            printf("Erro na leitura do arquivo!");
            system("pause");
            exit(1);
        }
        fclose(arq);
        printf("%d,%d,%d,%d,%d\n",v[0],v[1],v[2],v[3],v[4]);
        printf("%s\n",str);
        system("pause");
    }
*********************************************************************
    FILE *arq;
    arq = fopen("C:\\Users\\UDESC\\Desktop\\aula\\aula.txt","wb");
    char str[20] = "Hello World";
    float x = 5;
    int v[5] = {1,2,3,4,5};
    fwrite(str,sizeof(char),strlen(str),arq);
    fwrite(str,sizeof(char),5,arq);
    fwrite(&x,sizeof(float),1,arq);
    fwrite(v,sizeof(int),5,arq);
    fwrite(v,sizeof(int),2,arq);
    fclose(arq);

//********************************************************************
FILE *arq;
arq = fopen("C:\\Users\\UDESC\\Desktop\\aula\\aula.txt","w+");
if(arq == NULL){
    printf("Arquio nao pode ser aberto \n");
    system("pause");
    return(1);
}
else{
    struct cadastro cad = {"João da silva","Rua tenente antonio joão",22};
    fwrite(&cad,sizeof(struct cadastro),1,arq);
    fclose(arq);
    system("pause");


}
*/
struct cadastro cad;
FILE *arq;
arq = fopen("C:\\Users\\UDESC\\Desktop\\aula\\aula.txt","rb");
if(arq==NULL){
    printf("Arquivo nao pode ser aberto");
    system("pause");
    return(1);
}
else{
    fread(&cad,sizeof(struct cadastro),1,arq);
    printf("%s\n%s\n%d\n",cad.nome,cad.endereco,cad.idade);
}
fclose(arq);
    return 0;
}
