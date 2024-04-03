// inclusão de bibliotecas
#include <stdio.h>
#include <stdbool.h>

// inclusão de funções
#include "limpa.h"
#include "soma.h"
#include "dec-bin.h"
#include "maior.h"
#include "potencia.h"
#include "pares.h"

// função principal
int main(void) {
    int escolha;
    bool running = true;
    
    limpar_console();
    printf("ALGORITMOS COM RECURSIVIDADE.\n\n");
    while (running) {
        printf("Escolha o algoritmo que deseja executar:\n");
        printf("1 - Soma cumulativa.\n");
        printf("2 - Conversão decimal-binário.\n");
        printf("3 - Busca de maior número.\n");
        printf("4 - Potenciação de um número.\n");
        printf("5 - Contar pares em um vetor.\n");
        printf("0 - Sair.\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        if (0 > escolha | escolha > 5) {
            limpar_console();
            printf("Escolha inválida, tente novamente.");
            continue;
        }

        limpar_console();
        switch(escolha){
            case 1:
                principal_soma();
                break;
            case 2:
                principal_dec_bin();
                break;
            case 3:
                principal_maior();
                break;
            case 4:
                principal_potencia();
                break;
            case 5:
                principal_pares();
                break;
            case 0:
                printf("Adeus!\n");
                running = false;
                break;
        }
    }
}