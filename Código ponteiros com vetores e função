#include<stdio.h>
#include<stdlib.h>

void pedir(float *p){
	int i;
	for(i=0;i<4;i++){
		printf("\nDigite um valor:");
		scanf("%f",p+i);
	}
}

float calcular(float *p){
	float soma=0;
	int i;
	for(i=0;i<4;i++){
		soma=soma+*(p+i);
	}
	return soma;
}

void apresentar(float p){
	printf("\nA media %f",p/4);
}

int main(){
	float *a,soma;
	a=(float*)malloc(4*sizeof(float));
	pedir(a);
	soma=calcular(a);
	apresentar(soma);
}
