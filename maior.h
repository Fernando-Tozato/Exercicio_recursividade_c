#include <stdio.h>
#include <stdlib.h>

int maior(int n, int v[]) {
    int max;
    if (n == 1) {
        max = v[0];
    } else {
        max = maior(n - 1, v);
        if (max < v[n - 1]) {
            max = v[n - 1];
        }
    }
    return max;
}

void principal_maior() {
    int n;
    printf("Escolha o tamanho do vetor: ");
    scanf("%d",&n);

    int v[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }
    
    system("clear");
    printf("O maior valor do vetor é: %d\n\n\n", maior(n, v));
}