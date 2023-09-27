#include <stdio.h>

int main() {
    float p1, p2, p3, t1;
    float media_aluno;
    float ultima_nota_necessaria;

    printf("Digite suas notas (P1, P2, P3 e T1):\n");
    scanf("%f %f %f %f", &p1, &p2, &p3, &t1);

    // Calcula a média
    if (t1 == 0) {
        media_aluno = (p1 + p2 + p3) / 3;
        ultima_nota_necessaria = (7 * 4) - (media_aluno * 3); // Peso igual para todas as notas
    } else {
        media_aluno = (p1 + p2 + p3 + t1) / 4;
    }

    // Imprimindo a média ou a nota necessária
    if (t1 == 0) {
        printf("A média atual do aluno é: %.2f\n", media_aluno);
        printf("Para obter a média 7, o aluno deve tirar pelo menos: %.2f\n", ultima_nota_necessaria);
    } else {
        printf("A média do aluno é: %.2f\n", media_aluno);
    }

    return 0;
}