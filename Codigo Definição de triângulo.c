#include<stdio.h>
int main(){
   float lado1,lado2,lado3;
   printf("\ndigite o valor do primeiro lado:");
   scanf("%f",&lado1);
   printf("\ndigite o valor do segundo lado:");
   scanf("%f",&lado2);
   printf("\ndigite o valor do terceiro lado:");
   scanf("%f",&lado3);
   if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){
    printf("\nE um triangulo");
    if(lado1==lado2 && lado2==lado3){
        printf("\nE um triangulo equilatero");
    }else if(lado1==lado2 && lado2!=lado3 || lado2==lado3 && lado3!=lado1 || lado1==lado3 && lado3!=lado2){
        printf("\nE um triangulo isoceles");
    }else if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
        printf("\nE um triangulo escaleno");
    }
   }else{
       printf("\nNao e um triangulo!");
    }return 0;
}
