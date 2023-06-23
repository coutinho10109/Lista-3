#include <stdio.h>

int main() {
    int soma = 0, numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
    }

    printf("A soma desse número é %.2d\n", soma);

    return 0;
}

