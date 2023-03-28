#include <stdio.h>
#include <stdlib.h>

int* preencheVetor(int n) 
{
    int i;
    int* vetor = (int*) malloc(n * sizeof(int)); // aloca dinamicamente o vetor
    
    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]); // preenche o vetor com valores informados pelo usuário
    }
    
    return vetor; // retorna o vetor preenchido
}

int verificaOrdemCrescente(int* vetor, int n) 
{
    int i;
    
    for (i = 0; i < n - 1; i++) 
    {
        if (vetor[i] > vetor[i + 1]) 
        { // se o elemento atual é maior que o próximo, o vetor não está ordenado em ordem crescente
            return 0; // retorna falso
        }
    }
    
    return 1; // se o vetor passou pelo loop acima, está ordenado em ordem crescente, retorna verdadeiro
}

int main() 
{
    int n;
    int* vetor;
    int ordenado;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    
    vetor = preencheVetor(n); // preenche o vetor dinamicamente
    
    ordenado = verificaOrdemCrescente(vetor, n); // verifica se o vetor está ordenado em ordem crescente
    
    if (ordenado == 1) 
    {
        printf("O vetor está ordenado em ordem crescente.\n");
    } else 
    {
        printf("O vetor não está ordenado em ordem crescente.\n");
    }
    
    free(vetor); // libera a memória alocada para o vetor
    
    return 0;
}
