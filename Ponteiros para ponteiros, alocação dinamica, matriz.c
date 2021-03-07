#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Exemplos 27,28,29,30,31
    Exercicios 15 16 17 18 19 20
    */
   /* int a=5,*b,**c;
    b=&a;
    c=&b;
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",*(*c));


int **p,i,j;
p = calloc(3,sizeof(int*));
for(i=0;i<3;i++){
    p[i] = calloc(3,sizeof(int));
}
printf("Digite os valores da matriz\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    scanf("%d",&p[i][j]);}
printf("Matriz lida \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d",p[i][j]);
    }
    printf("\n");
}
for(i=0;i<3;i++){
    free(p[i]);
}
free(p);

int **mat,i,j,n,m;
printf("Numero de linhas: \n");
scanf("%d",&n);
printf("Numero de colunas: \n");
scanf("%d",&m);
mat = (int**)malloc(n*sizeof(int *));
for(i=0;i<n;i++){
    mat[i]=(int*)malloc(m*sizeof(int));
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        mat[i][j]=i*j;
    }

}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
}
for(i=0;i<n;i++){
    free(mat[i]);

}
free(mat);
*/


    return 0;
}
