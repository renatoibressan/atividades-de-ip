#include <stdio.h>

int main() {
    double n, m, a, b;
    int i, c;
    double d;

    // printf("Entre com o valor de n: ");
    scanf("%lf", &n);

    // atribui o valor de 10 ao multiplicador m;
    m = 10;

    i = 0;
    for(i; i < 3; i++) {
        // multiplica o número por m;
        a = n * m;
        // soma o produto a 0.5;
        b = a + 0.5;
        // atribui o valor de b a outra variável
        c = b;
        // obtém-se o número final;
        d = c/m;
        printf("%.6lf\n", d);

        m *=10;
    }

    return 0;
}