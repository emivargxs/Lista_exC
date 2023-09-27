#include <stdio.h>

int main() {
    int k, a, b, c;
    int L, s, nova_posicao;

    printf("Insira Quatro Numeros inteiros:\n ");
    scanf("%d %d %d %d", &k, &a, &b, &c);

    L[1000]; // Vetor com 1000 inteiros
    L[0] = k;    // O primeiro valor é o k.

    int posicaolista = 0; // Inicia em 0 a posição inicial na lista
    int passinhos = 0;    // Inicia em 0 a contagem dos passinhos dados

    while (1) { // Como não sabemos quantos passos serão dados, ficará em um loop infinito até alguma condição quebrar esse loop.
        
        s = L[posicaolista]; //Ovalor 

        if (s == 0) { // Se o jogador cair em um zero acaba o jogo
            printf("Acabou!!! Parou na posição %d depois de dar %d passos!\n\n", posicaolista, passinhos);
            break;
        }

        nova_posicao = (posicaolista + s) % 1000; // Calcula a nova posição

        if (nova_posicao < 0) {
            nova_posicao += 1000; 
        }

        // Atualiza a lista e a posição
        L[posicaolista] = ((L[posicaolista] * a) % b) + c;
        posicaolista = nova_posicao;

        passinhos++;
    }
    return 0;
}