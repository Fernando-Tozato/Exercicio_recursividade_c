#include <stdio.h>
// definição de sistema operacional do usuário
#ifdef __unix__         
    #include <unistd.h>
    #include <stdlib.h>

#elif defined(_WIN32) || defined(WIN32) 

   #define OS_Windows

   #include <windows.h>

#endif

// limpa o console utilizando o argumento correto para o sistema operacional do usuário
void limpar_console() {
    #ifdef OS_Windows
        system("cls");
    #else
        system("clear");
    #endif 
}