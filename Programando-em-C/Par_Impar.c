#include <stdio.h>
#include <stdlib.h>

int* preencheVetor(int n) 
{
    int i;
    int* vetor = (int*) malloc(n * sizeof(int)); // aloca dinamicamente o vetor
    
    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &vetor[i]); // preenche o vetor com valores informados pelo usuário
    }
    
    return vetor; // retorna o vetor preenchido
}

int* elementosPares(int* vetor, int n, int* tamanho) 
{
    int i;
    int* vetorPares;
    int j = 0;
    
    vetorPares = (int*) malloc(n * sizeof(int)); // aloca dinamicamente o vetor de elementos pares
    
    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0) { // se o elemento atual for par, adiciona ao vetor de elementos pares
            vetorPares[j] = vetor[i];
            j++;
        }
    }
    
    *tamanho = j; // atualiza o tamanho do vetor de elementos pares
    
    return vetorPares; // retorna o vetor de elementos pares
}

int main() 
{

    int n;
    int* vetor;
    int* vetorPares;
    int tamanho;
    int i;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    
    vetor = preencheVetor(n); // preenche o vetor dinamicamente
    
    vetorPares = elementosPares(vetor, n, &tamanho); // retorna um vetor com os elementos pares do vetor preenchido
    
    printf("Vetor de elementos pares:\n");
    for (i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetorPares[i]); // imprime o vetor de elementos pares
    }
    printf("\n");
    
    free(vetor); // libera a memória alocada para o vetor preenchido
    free(vetorPares); // libera a memória alocada para o vetor de elementos pares
    
    return 0;
}
