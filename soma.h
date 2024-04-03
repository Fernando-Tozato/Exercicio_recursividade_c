#include <stdio.h>
#include <stdlib.h>

int soma(int n) {
    int result;
    if (n == 1) {
        return 1;
    } else {
        result = n + soma(n - 1);
    }
    return result;
}

void principal_soma() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    system("clear");
    printf("A soma cumulativa de %d é %d\n\n\n", n, soma(n));
}