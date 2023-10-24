  #include <stdio.h>

int main() {
    int numero; //Numero que o usuario solicita
    int somaPares = 0; //
    int somaImpares = 0;
    int contadorPares = 0;
    int contadorImpares = 0;

    printf("Digite 10 inteiros:\n");

    for (int i = 0; i < 10; i++) { //I inicia em 0, enquanto i for menor que 10, roda o loop
        scanf("%d", &numero);

        if (numero % 2 == 0) {//Se a divisao por 2 tiver resto igual a 0 entao ele é par
            somaPares = somaPares + numero; //Contador de pares inicia em 0 entao soma o numero digitado com o anterior
            contadorPares = contadorPares +1; //Contador de pares inicia em 0 entao soma 1 ao anterior
        } else { //Se a divisao por 2 nao tiver resto igual a 0 entao
            somaImpares = somaImpares + numero; //Contador de impares inicia em 0 entao soma o numero digitado
            contadorImpares = contadorImpares + 1;
        }
    }
  //Imprime a soma dos pares e dos impares
  float mediaPares; //Declara a media de pares
  if (contadorPares > 0) { //Se o contador de pares for maior que 0 entao
      mediaPares = (float)somaPares / contadorPares; //Calcula a media de pares, e transforma o resultado em float. Soma pares é dividido pelo contador de pares, somaPares é a soma de todos os pares e contadorPares é o contador de pares
  } else {
      mediaPares = 0.0; // Valor padrão se nenhum número par for fornecido
  }

  float mediaImpares; //Declara a media de impares
  if (contadorImpares > 0) { //Se o contador de impares for maior que 0 entao
      mediaImpares = (float)somaImpares / contadorImpares;
  } else { //Se o contador de impares for menor que 0 entao
      mediaImpares = 0.0; // Valor padrão se nenhum número ímpar for fornecido
  }

    printf("Média dos valores pares: %.2f\n", mediaPares);
    printf("Média dos valores ímpares: %.2f\n", mediaImpares);

    return 0;
}
