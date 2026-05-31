#include<stdio.h>
int main(){
    float n1,n2,i,ra,media,comp,aprovado,reprovado,comparacao;
    comparacao=0;
    comp=10;
    i=0;
    for(i=0;i<10;i++){
        printf("\nDigite a sua primeira nota:");
        scanf("%f",&n1);
        printf("\nDigite a sua segunda nota:");
        scanf("%f",&n2);
        media=(n1+n2)/2;
        if(comparacao<(n1+n2)/2){
            comparacao=(n1+n2)/2;
        }if(comp>(n1+n2)/2){
            comp=(n1+n2)/2;
        }
        if(media>=6){
            printf("\naprovado");
        }else{
        printf("\nreprovado");
        }
    }
    printf("\nA maior media e %f",comparacao);
    printf("\nA menor media e %f",comp);
}


