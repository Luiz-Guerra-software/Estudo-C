#include<stdio.h>
#include<string.h>
struct aluno{
    char nome[250];
    int ra;
    float nota[4];
};
 typedef struct aluno aluno;
 int main(){
    aluno a[5];
    int i,j;
    for(i=0;i<5;i++){
        printf("\nDigite o seu nome:");
        scanf("%s",a[i].nome);
        printf("\nDigite o seu Ra:");
        scanf("%d",&a[i].ra);
        for(j=0;j<4;j++){
            printf("\nDigite a nota %d:",j);
            scanf("%f",&a[i].nota[j]);
        }
    }
    for(i=0;i<5;i++){
        printf("\nNome do aluno %s",a[i].nome);
        printf("\nNumero do RA:%d",a[i].ra);
        for(j=0;j<4;j++){
            printf("\nNota %d:%.2f",i+1,a[i].nota[j]);
        }
    }
}
