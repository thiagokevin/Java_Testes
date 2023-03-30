#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\n %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nErro: divisao por zero\n");
            } else {
                resultado = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
        default:
            printf("\nOperador invalido\n");
            break;
    }

    return 0;
}