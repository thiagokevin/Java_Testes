#Calculadora

A primeira linha do código é uma declaração de importação, onde importamos a classe Scanner do pacote java.util. Isso nos permite usar a classe Scanner para ler as entradas do usuário. Em seguida, declaramos uma classe chamada "Calculadora". Esta classe contém o método principal que é executado quando o programa é iniciado.

O método principal é o ponto de entrada para o nosso programa Java. Ele é o primeiro método a ser executado quando o programa é iniciado. Recebe um array de strings como argumento que pode ser usado para passar informações para o programa. Neste exemplo, não estamos usando os argumentos.

Criamos um objeto Scanner chamado "input" para ler as entradas do usuário. O objeto Scanner é inicializado com a entrada padrão do sistema (System.in).

Declaramos quatro variáveis: duas para os números que o usuário irá digitar (nu1 e nu2), uma para o resultado e outra para o operador matemático que o usuário irá escolher (+, -, *, ou /).

Pedimos ao usuário que digite o primeiro número, o operador matemático que ele deseja usar e o segundo número. A classe Scanner lê as entradas do usuário e as armazena nas variáveis correspondentes.

Usamos um switch statement para executar a operação matemática correspondente ao operador que o usuário digitou. O switch statement verifica o valor da variável "operador" e executa o bloco de código correspondente ao caso (case) que corresponde a esse valor. Se o operador não corresponder a nenhum dos casos, o bloco de código padrão (default) é executado.

Finalmente, fechamos o objeto Scanner "input" para evitar vazamentos de recursos. Isso é importante para garantir que o programa libere todos os recursos que ele alocou.