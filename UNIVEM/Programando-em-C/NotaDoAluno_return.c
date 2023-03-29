#include <stdio.h>

float CalcularMedia(float n1, float n2, float *media)
{
*media = (n1 + n2) /2;
return(n1 > n2)? n1 : n2;
}

main()
{
    float nota1, nota2, media, maiorNota;
    printf("Digite a primeira nota:-> ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota:-> ");
    scanf("%f",&nota2);

    maiorNota = CalcularMedia(nota1, nota2, &media);

    printf("Maior nota:-> %.2f\n",maiorNota);
    printf("Media:-> %.2f\n", media);
    return 0;
}
