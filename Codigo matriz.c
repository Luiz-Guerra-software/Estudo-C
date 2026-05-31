#include<stdio.h>
int main(){
    int mat1[3][3],mat2[3][3],mult[3][3],j,i;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor da Matriz 1[%d][%d]:",i,j);
            scanf("%d",mat1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor da Matriz 2[%d][%d]:",i,j);
            scanf("%d",mat2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mult[i][j]=mat1[i][j]*mat2[i][j];
        }
    }
    printf("\nA matriz 1 ficou:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz 2 ficou:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz multiplicada ficou:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",mult[i][j]);
        }
        printf("\n");
    }
}
