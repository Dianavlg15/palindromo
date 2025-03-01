#include <stdio.h>
#include <stdbool.h>

bool esPalindromo(int num) {
    if (num < 0) return false;
    int original = num;
    int reverso = 0;
    while (num > 0) {
        reverso = reverso * 10 + (num % 10);
        num /= 10;
    }
    return original == reverso;
}

int main() {
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    if (esPalindromo(numero)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
