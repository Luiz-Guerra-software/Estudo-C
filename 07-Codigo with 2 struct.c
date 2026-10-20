#include <stdio.h>
#include <string.h>
struct pneumatico {
    float raio, pressao, largura;
};
typedef struct pneumatico pneumatico;
struct carro {
    char marca[200];
    char modelo[200];
    float consumo;
    pneumatico pneu;
};
typedef struct carro carro;
struct aviao {
    char marca[200];
    char modelo[200];
    float consumo;
    pneumatico pneu;
};
typedef struct aviao aviao;
int main() {

    carro c;
    aviao a;
    char veiculo[100];

    printf("\nDigite qual o seu veiculo (carro ou aviao): ");
    scanf("%s", veiculo);

    if (strcmp(veiculo, "carro") == 0) {

        printf("\nDigite a marca do seu carro: ");
        scanf("%s", c.marca);

        printf("\nDigite o modelo do seu carro: ");
        scanf("%s", c.modelo);

        printf("\nDigite o consumo do seu carro: ");
        scanf("%f", &c.consumo);

        printf("\nDigite o raio do seu pneu: ");
        scanf("%f", &c.pneu.raio);

        printf("\nDigite a pressao do seu pneu: ");
        scanf("%f", &c.pneu.pressao);

        printf("\nDigite a largura do pneu: ");
        scanf("%f", &c.pneu.largura);

        printf("\n--- DADOS DO CARRO ---");
        printf("\nMarca: %s", c.marca);
        printf("\nModelo: %s", c.modelo);
        printf("\nConsumo: %.2f", c.consumo);
        printf("\nRaio: %.2f", c.pneu.raio);
        printf("\nPressao: %.2f", c.pneu.pressao);
        printf("\nLargura: %.2f\n", c.pneu.largura);

    } else if (strcmp(veiculo, "aviao") == 0) {

        printf("\nDigite a marca do seu aviao: ");
        scanf("%s", a.marca);

        printf("\nDigite o modelo do seu aviao: ");
        scanf("%s", a.modelo);

        printf("\nDigite o consumo do seu aviao: ");
        scanf("%f", &a.consumo);

        printf("\nDigite o raio do seu pneu: ");
        scanf("%f", &a.pneu.raio);

        printf("\nDigite a pressao do seu pneu: ");
        scanf("%f", &a.pneu.pressao);

        printf("\nDigite a largura do pneu: ");
        scanf("%f", &a.pneu.largura);

        printf("\n--- DADOS DO AVIAO ---");
        printf("\nMarca: %s", a.marca);
        printf("\nModelo: %s", a.modelo);
        printf("\nConsumo: %.2f", a.consumo);
        printf("\nRaio: %.2f", a.pneu.raio);
        printf("\nPressao: %.2f", a.pneu.pressao);
        printf("\nLargura: %.2f\n", a.pneu.largura);

    } else {
        printf("\nVeiculo invalido!\n");
    }

    return 0;
}
