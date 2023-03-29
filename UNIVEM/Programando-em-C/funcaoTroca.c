#include <stdio.h>

troca( int *a, int *b)
{
	int aux;
	aux= *a;
	*a = *b;
	*b = aux;
}

main()
{
	int x = 5, y = 10;
	printf ("X = %d e Y = %d", x, y);
	troca (&x, &y);   // endereço de x e de y
	printf ("\nX = %d e Y = %d", x,y);
}