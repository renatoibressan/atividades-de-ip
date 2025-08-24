#include <stdio.h>

int main() {
    float n;
    int m;

    // printf("Entre com o valor de n: ");
    scanf("%f", &n);

    // calcula o primeiro arredondamento;
    m = n * 10 + 0.5;
    printf("%f\n", m / 10.0);
    // calcula o segundo arredondamento;
    m = n * 100 + 0.5;
    printf("%f\n", m / 100.0);
    // calcula o terceiro arredondamento;
    m = n * 1000 + 0.5;
    printf("%f\n", m / 1000.0);

    return 0;

}
