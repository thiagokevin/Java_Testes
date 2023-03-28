#include <stdio.h>

main()
{
    float notas[10], media = 0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("\nInforme a nota do Aluno %d:-> ",(i+1));
        scanf("%f", &notas[i]);
        media += notas[i];

    }
    media /= 10;
    printf("\nNotas dos Alunos\n");
    for(i=0;i<10;i++)
    {
        printf("\nAlunos %2d - Nota = %5.2f",(i+1));
        printf("\nMedia total dos alunos:-> %.2f",media);
    }
}