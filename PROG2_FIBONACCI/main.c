#include <stdio.h>

int contagemChamadas = 0;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        contagemChamadas += 2;
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, valor = 30;
    for (n = 0; n < valor; n++) {
        printf("%d ", fibonacci(n));
    }
    printf("\n");
    printf("Contagem chamadas: %d ", contagemChamadas);
}
