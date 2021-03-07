#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 100
int main()
{
    /*
int i,j,matriz1[MAX_TAM][MAX_TAM],matriz2[MAX_TAM][MAX_TAM],matriz3[MAX_TAM][MAX_TAM],numL,numC;
FILE *f;

if((f = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Aula.txt", "r")) == NULL){
    printf("Arquivo não pode ser aberto");
    system("pause");
    exit(1);
}
else{
    fscanf(f,"%d %d",&numL,&numC);

    for(i=0;i<numL;i++){
        for(j=0;j<numC;j++)
            fscanf(f,"%d",&matriz1[i][j]);
    }
     for(i=0;i<numL;i++){
        for(j=0;j<numC;j++)
            fscanf(f,"%d",&matriz2[i][j]);
     }

     for(i=0;i<numL;i++){
        for(j=0;j<numC;j++)
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
     }

 for(i=0;i<numL;i++){
        for(j=0;j<numC;j++){
           printf("%d ",matriz3[i][j]);
        }
           printf("\n");
}
}
Formatação do arquivo
2 5
4 12 1 78 5
98 9 1994 0 52
79 12 458 2 29
47 19 784 12 8




int i,j,matriz1[MAX_TAM][MAX_TAM],matriz2[MAX_TAM][MAX_TAM],matriz3[MAX_TAM][MAX_TAM],numL,numC;
FILE *f;

if((f = fopen("C:\\Users\\UDESC\\Desktop\\aula\\Aula.txt", "r")) == NULL){
    printf("Arquivo não pode ser aberto");
    system("pause");
    exit(1);
}
else{
    fscanf(f,"%d %d",&numL,&numC);

    for(i=0;i<numL;i++){
        for(j=0;j<numC;j++)
            fscanf(f,"%d",&matriz1[i][j]);
        for(j=0;j<numC;j++)
            fscanf(f,"%d",&matriz2[i][j]);
     }

     for(i=0;i<numL;i++){
        for(j=0;j<numC;j++)
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
     }

 for(i=0;i<numL;i++){
        for(j=0;j<numC;j++){
           printf("%d ",matriz3[i][j]);
        }
           printf("\n");
}
}

Formatação do arquivo
2 5
4 12 1 78 5 79 12 458 2 29
98 9 1994 0 52 47 19 784 12 8

*/

    return 0;
}
