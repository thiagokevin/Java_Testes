# Programando-em-C

# Gerando Numeros Aleatorios
Este é um programa em C que gera um número aleatório entre 0 e 99 e o imprime no console.

A função srand(time(0)) inicializa o gerador de números aleatórios com o tempo atual como semente, tornando cada execução do programa única. A função rand() gera um número aleatório entre 0 e a constante RAND_MAX definida em stdlib.h, que é pelo menos 32767. Para garantir que o número gerado esteja dentro do intervalo de 0 a 99, usamos o operador módulo % para obter o resto da divisão por 100.

Em seguida, imprimimos o número gerado na tela usando a função printf(). 

Por fim, a função main() retorna 0, indicando que o programa foi executado com sucesso.
# Testando printf


