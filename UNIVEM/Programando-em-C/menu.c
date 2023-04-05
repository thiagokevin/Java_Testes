#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} NO;

void Cria_LSE(NO **Inicio){
    *Inicio = NULL;
}

void Ins_Inicio(NO **Inicio, int v){
    NO *p;
    p = (NO*) malloc(sizeof(NO));
    p->valor = v;
    p->prox = *Inicio;
    *Inicio = p;
}

void Ins_Fim(NO **Inicio, int v){
    NO *p, *q;
    p = (NO*) malloc(sizeof(NO));
    p->valor = v;
    p->prox = NULL;
    if (*Inicio == NULL) {
        *Inicio = p;
    } else {
        q = *Inicio;
        while (q->prox != NULL) {
            q = q->prox;
        }
        q->prox = p;
    }
}

int Rem_Inicio(NO **Inicio, int *v){
    NO *p;
    if (*Inicio == NULL) {
        return 1;
    }
    p = *Inicio;
    *v = p->valor;
    *Inicio = p->prox;
    free(p);
    return 0;
}

int Rem_Fim(NO **Inicio, int *v){
    NO *p, *q;
    if (*Inicio == NULL) {
        return 1;
    }
    if ((*Inicio)->prox == NULL) {
        *v = (*Inicio)->valor;
        free(*Inicio);
        *Inicio = NULL;
    } else {
        p = *Inicio;
        while (p->prox != NULL) {
            q = p;
            p = p->prox;
        }
        *v = p->valor;
        q->prox = NULL;
        free(p);
    }
    return 0;
}

NO *Acesso(NO *Inicio, int v){
    NO *p;
    for (p = Inicio; p != NULL; p = p->prox) {
        if (p->valor == v) {
            return p;
        }
    }
    return NULL;
}

void Imprime(NO *Inicio){
    NO *p;
    printf("LISTA: ");
    for (p = Inicio; p != NULL; p = p->prox) {
        printf("%d ", p->valor);
    }
    printf("\n");
}

int main()
{
	NO *L, *onde;
	int op, valor;
	Cria_LSE(&L);
	do
	{
		system("cls");
		printf("\nMENU DE OPCOES\n");
		printf("\n01 - Inserir no inicio");
		printf("\n02 - Inserir no fim");
		printf("\n03 - Remover no inicio");
		printf("\n04 - Remover no fim");
		printf("\n05 - Acessar");
		printf("\n09 - Listar");
		printf("\n10 - Sair");
		printf("\n\nOpcao => ");
		fflush(stdin);
		scanf("%d",&op);
	   
	   	switch (op)
	   	{
			case 1: printf("Inserir qual valor? -> ");
				scanf("%d", &valor);
				Ins_Inicio(&L, valor);
				printf("\nInsercao efetuada!!\n");
				system("pause");
				break;
				    
			case 2: printf("Inserir qual valor? -> ");
				scanf("%d", &valor);
				Ins_Fim(&L, valor);
				printf("\nInsercao efetuada!!\n");
				system("pause");
				break;
				    
			case 3: if (Rem_Inicio(&L, &valor)==0)
				printf("\nLista vazia!! Impossivel remover\n");
		      		else
					printf("\nRemocao com sucesso!!\nValor removido => %d\n",valor);
		      			system("pause");
		      			break;
		      		
		    	case 4: if (Rem_Fim(&L, &valor)==0)
			 		printf("\nLista vazia!! Impossivel remover\n");
		      	  	else
			 		printf("\nRemocao com sucesso!!\nValor removido => %d\n",valor);
		      			system("pause");
		      			break;
			
			case 5: printf("Procura qual valor? -> ");
				scanf("%d", &valor);
				if (Acesso(L, valor) == NULL)
				printf("\nValor nao encontrado!!\n");
				else
					printf("\nValor encontrado!!\n");
					system("pause");
					break;
				    
			case 9: Imprime(L);
				system("pause");
				break;
			
			case 10: printf("\nFIM DE PROGRAMA");
			         break;
			
			default: printf("\nOpcao invalida!!\n\n");
			         system("pause");
	   	}	    
	} while (op != 10);
	return 0;	
}