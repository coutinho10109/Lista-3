#include <stdio.h>

int main() 
{
    int soma = 0, quantidade = 0, numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            soma += numero;
            quantidade++;
        }

        printf("Digite um número: ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        float media = (float) soma / quantidade;
        printf("A média dos números pares é: %.2f\n", media);
    } else {
        printf("Nenhum número par foi digitado\n");
    }

    return 0;
}