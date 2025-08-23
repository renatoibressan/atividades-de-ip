#include <stdio.h>

int main() {
    float preco, x, y;
    float z;

    // printf("Entre com o valor do preço: ");
    scanf("%f", &preco);

    // verifica se x está no range [0, 100];
    do {
        // printf("Entre com o valor em percentual do distribuidor: ");
        scanf("%f", &x);
        if (x < 0 || x > 100) {
            printf("Erro\n");
        }
    } while (x < 0 || x > 100);

    // verifica se y está no range [0, 100];
    do {
        // printf("Entre com o valor em percentual dos impostos: ");
        scanf("%f", &y);
        if (y < 0 || y > 100) {
            printf("Erro\n");
        }
    } while (y < 0 || y > 100);

    // calcula o custo final do carro;
    z = preco + (preco * (x/100)) + (preco * (y/100));
    printf("O VALOR DO CARRO E = %.2f\n", z);

    return 0;
}