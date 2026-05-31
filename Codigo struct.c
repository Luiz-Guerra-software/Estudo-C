#include <stdio.h>
int main() {
    float n1, n2, media, comparacao, comp;
    int ra;
    comparacao = 0;
    comp = 10;
    do {
        printf("\nDigite o RA (0 para sair): ");
        scanf("%d", &ra);
        if (ra == 0) {
            break;
        }
        printf("Digite a sua primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a sua segunda nota: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        if (media > comparacao) {
            comparacao = media;
        }
        if (media < comp) {
            comp = media;
        }
        if (media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    } while (ra != 0);
    printf("\nA maior média é %.2f", comparacao);
    printf("\nA menor média é %.2f\n", comp);
    return 0;
}
