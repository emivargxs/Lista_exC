//Aqui está uma função em C que recebe um vetor de caracteres (uma string) e retorna o número de vogais presentes na string:


#include <stdio.h>

// Função que conta o número de vogais em uma string

int contarVogais(const char *str) { //A função nao mudara o conteudo da string, ela so ira ler o conteudo da string e verificar quantas vogais tem
    int numVogais = 0; //numVogais para manter o contador do número de vogais. Inicializamos essa variável com zero.
  

    for (int i = 0; str[i] != '\0'; i++) { //A iteração começa com i = 0 e continua até que o caractere atual seja o caractere nulo '\0', que indica o final da string.
        char ch = str[i]; //pegamos o caractere atual da string usando char ch = str[i].

        // Verifica se o caractere é uma vogal (maiúscula ou minúscula)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            numVogais = numVogais + 1;
        }
    }

    return numVogais;
}

int main() {
    char minhaString[] = "Esta é uma string de exemplo.";
    int numVogais = contarVogais(minhaString); //Chamamos a função contarVogais com minhaString como argumento e armazenamos o resultado na variável numVogais.

    printf("Número de vogais na string: %d\n", numVogais);

    return 0;
}
