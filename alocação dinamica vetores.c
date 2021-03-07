#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    float *v;
    int i,tam;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d",&tam);
    v=calloc(tam, sizeof(float));
    for(i=0;i<tam;i++){
            printf("Elemento %d?\n",i);
            scanf("%f",v+i);
            printf("Li valor %.1f\n",*(v+i));
    }

    free(v);

*/

printf("^^~^^Exemplo 18^^~^^\n");
double *v1,*v2,prodint;
int i,n;
printf("Digite o tamanho dos vetores: ");
scanf("%d",&n);
v1 = (double*)malloc(n*sizeof(double));
v2 = (double*)malloc(n*sizeof(double));
printf("Digite os valores do primeiro vetor:  \n");
for(i=0;i<n;i++)
    scanf("%lf",&v1[i]);
printf("Digite os valores do segundo vetor: \n");
for(i=0;i<n;i++)
    scanf("%lf",&v2[i]);
    for(i=0;i<n;i++)
prodint = prodint+(v1[i]*v2[i]);
printf("Soma dos produtos dos vetores foi : %.0lf",prodint);
    return 0;
}
