#include <stdio.h>

int main() {
    int i, soma = 0, x;

    for (i = 0; i < 10; i++) {
        printf("Entre com o valor: ");
        scanf("%d", &x);
        soma += x;
    }

    printf("Resultado: %d\n", soma);

    return 0;
}


