#include <stdio.h>
int main() {
    float n1, n2, media, comparacao, comp;
    int ra;
    comparacao = 0;
    comp = 10;
    while (1) {
        printf("\nDigite o RA (0 para sair): ");
        scanf("%d", &ra);
        if (ra == 0) {
            break;
        }
        printf("\nDigite a sua primeira nota: ");
        scanf("%f", &n1);
        printf("\nDigite a sua segunda nota: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        if (media > comparacao) {
            comparacao = media;
        }
        if (media < comp) {
            comp = media;
        }
        if (media >= 6) {
            printf("\naprovado");
        } else {
            printf("\nreprovado");
        }
    }
    printf("\nA maior média é %.2f", comparacao);
    printf("\nA menor média é %.2f", comp);
    return 0;
}

