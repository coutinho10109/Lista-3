#include <stdio.h>

int main() {
    int i;
    float nota1, nota2, aluno[10];

    for (i = 0; i < 10; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nota 1 = ");
        scanf("%f", &nota1);
        printf("Nota 2 = ");
        scanf("%f", &nota2);
        aluno[i] = (nota1 + nota2) / 2;
        printf("\n");
    }

    printf("Mídias\n\n");

    for (i = 0; i < 10; i++) {
        printf("Aluno %d = %.2f\n", i + 1, aluno[i]);
    }

    return 0;
}
