#include<stdio.h>
#include<stdlib.h>

struct 	produto{
	char nome[10];
	float preco;
	int cod;	
};

int main(){
	produto *p;
	p=(produto*)malloc(sizeof(produto));
	printf("\nDigite o nome do produto:");
	gets(p->nome);
	printf("\nDigite o preco do seu produto:");
	scanf("%f",&p->preco);
	printf("\nDigite o codigo do produto:");
	scanf("%d",&p->cod);
	printf("\nO produto %s tem preco %f e codigo %d",p->nome,p->preco,p->cod);
}
