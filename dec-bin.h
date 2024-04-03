#include <stdio.h>
#include <stdlib.h>

void dec_bin(int dec){
    int n;

    if (dec/2 != 0){
        n = dec/2;
        dec_bin(n);
        printf("%d", dec%2);
    } else {
        printf("%d", dec%2);
    }
}

void principal_dec_bin() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    system("clear");
    printf("A conversão de %d para binário é: ", n);
    dec_bin(n);
    printf("\n\n\n");
}