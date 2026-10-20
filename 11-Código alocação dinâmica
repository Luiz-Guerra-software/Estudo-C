#include<stdio.h>
#include<stdlib.h>

void ler(float *a){
	printf("\nDigite um valor:");
	scanf("%f",a);
}

void calculo(float *b,float *c){
	*b= (9* *c/5) + 32;
}

void apresentar(float *d,float *e){
	printf("\nO valor digitado e %f e ele convertido e %f",*d,*e);
}

int main(){
	float *p;
	float *po;
	p=(float*)malloc(sizeof(float));
	po=(float*)malloc(sizeof(float));
	ler(p);
	calculo(po,p);
	apresentar(p,po);
}
