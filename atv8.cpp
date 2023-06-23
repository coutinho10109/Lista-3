#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite um número: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor && numero != 0) {
            menor = numero;
        }
    }

    printf("O número digitado foi: %d\n", maior);
    printf("O número digitado foi: %d\n", menor);

    return 0;
}