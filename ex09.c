#include <stdio.h>

int main() {
    double n, m, a, b;
    int i, c;
    double d;

    // printf("Entre com o valor de n: ");
    scanf("%lf", &n);

    // atribui os valores de 10, 100 e 1000 ao multiplicador m;
    m = 10;

    i = 0;
    for(i; i < 3; i++) {
        // multiplica o número por m;
        a = n * m;
        // soma o produto a 0.5 para fazer o arredondamento;
        b = a + 0.5;
        // remove a parte decimal;
        c = b;
        // obtém-se o número final;
        d = c/m;
        printf("%.6lf\n", d);

        m *=10;
    }

    return 0;

}
