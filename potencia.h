#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n) {
    int result;
    if (n == 1) {
        return x;
    } else {
        result = x * potencia(x, n - 1);
    }
    return result;
}
    
void principal_potencia() {
    int n, x;
    printf("Digite um número x: ");
    scanf("%d", &x);
    printf("Digite um número n: ");
    scanf("%d", &n);

    system("clear");
    printf("O resultado do número %d elevado a %d é: %d\n\n\n", x, n, potencia(x, n));
}