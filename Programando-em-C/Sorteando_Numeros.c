#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(0));  // Inicializa o gerador de números aleatórios com o tempo atual

    int numeroSorteado = rand() % 100;  // Gera um número aleatório entre 0 e 100

    printf("O número sorteado é: %d\n", numeroSorteado);

    return 0;
}