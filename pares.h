#include <stdio.h>
#include <stdlib.h>

int pares(int n, int v[], int count) {
    if (n == 0){
        return count;
    } else {
        count = pares(n-1, v, count);
        if (v[n - 1] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void principal_pares() {
    int n;
    printf("Escolha o tamanho do vetor: ");
    scanf("%d",&n);

    int v[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    system("clear");
    printf("O número de pares no vetor é: %d\n\n\n", pares(n, v, 0));
}