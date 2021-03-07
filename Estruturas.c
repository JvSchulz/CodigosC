#include <stdio.h>
#include <stdlib.h>



struct aluno {
 int num_aluno;
 float nota1,nota2,nota3;
 float media;
 char nome[10];
 };

 struct cadastro{
    char nome[5];
    int idade;
    char sexo;
    float altura;
    };

int main()
{

    //Exemplo 6
    /*
 struct aluno a[3];
 int i;
 printf("Digite o Numero do aluno, nota1, nota2, nota3 respectivamente \n");
 for(i=0;i<3;i++){
    scanf("%d",&a[i].num_aluno);
    scanf("%f",&a[i].nota1);
    scanf("%f",&a[i].nota2);
    scanf("%f",&a[i].nota3);
    a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
 printf("Digite o numero do aluno, nota1, nota2, nota3 respectivamente \n");

 }
for(i=0;i<3;i++){
printf("Aluno N%d\n",a[i].num_aluno);
    printf("Nota do aluno %d :%.2f\n",a[i].num_aluno,a[i].nota1);
    printf("Nota do aluno %d :%.2f\n",a[i].num_aluno,a[i].nota2);
    printf("Nota do aluno %d :%.2f\n",a[i].num_aluno,a[i].nota3);
    printf("Media do aluno %d:%.2f\n",a[i].num_aluno,a[i].media);


}
*/

int i;
int numAlunos =2;
struct cadastro aluno[numAlunos];
fflush(stdin);
for(i=0;i< numAlunos;i++){
    printf("Aluno%d----------\n",i);
    printf("Digite o nome: \n");
    gets(aluno[i].nome);
    printf("%s\n",aluno[i].nome);
    fflush(stdin);
    printf("Digite a idade:\n");
    scanf("%d",&aluno[i].idade);
    printf("%d\n",aluno[i].idade);
    fflush(stdin);
    printf("Digite o sexo: ");
    scanf("%c",&aluno[i].sexo);
    printf("%c\n",aluno[i].sexo);
    fflush(stdin);
    printf("Digite a altura:\n");
    scanf("%f",&aluno[i].altura);
    printf("%f",aluno[i].altura);
    printf("---------------\n");

}
 return 0;

}
