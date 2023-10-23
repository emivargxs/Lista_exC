  #include <stdio.h>

int main() {
    int count = 0;

    for (int num = 1000000; num <= 10000000; num++) {
        int tem33 = 0; // Flag para indicar se o número contém "33".

        while (num > 0) {
            if (num % 100 == 33) {
                tem33 = 1; // O número contém "33".
                break;
            }
            num /= 10; // Remove o último dígito.
        }

        if (!tem33) {
            count++; // Incrementa o contador se o número não contiver "33".
        }
    }

    printf("Quantidade de números entre 1 milhão e 10 milhões que não contêm '33': %d\n", count);

    return 0;
}
