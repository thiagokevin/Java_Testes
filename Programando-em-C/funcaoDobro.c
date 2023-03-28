#include <stdint.h>

int dobro(int *x)
{
*x *=2;
}


int main()
{
    int x = 5;
    printf("Antes da chamada da funcao:-> %d\n", x);
    dobro(&x);
    printf("Depois da chamada da funcao:-> %d\n", x);
    return 0;
}