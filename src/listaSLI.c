#include "listaSLI.h"


ListaSLI * criarListaSLI()
{
    ListaSLI * nova = (ListaSLI *) malloc(sizeof(ListaSLI));
    nova->tamanho = 0;
    nova->tamanho = NULL;
    return nova;
}


void mostrarListaSLI(ListaSLI *pontLista)
{
    printf("Tamanho da Lista = %d\n", pontLista->tamanho); // SEMPRE MOSTRAR O TAMANHO
    
    //VAZIA

    if (pontLista->tamanho == 0)
    {
        printf("Lista Vazia\n");
    }

    // 1 OU + ELEMENTOS
    
    else
    {
        NoSLI *pontAux = pontLista->inicio;
        while (pontAux != NULL)
        {
            printf("%d -> ", pontAux->valor);
            pontAux = pontAux->proximo;
        }
        printf("NULL\n");
    }
}


void inserirFimSLI(int valor, ListaSLI *pontLista)
{
    NoSLI *novo = criarNoSLI(valor, NULL); // A mesmo passo para todas as opções

    // VAZIA
    if (pontLista->inicio == NULL) // serve os dois: (lista->tamanho == 0) ou (lista->inicio == NULL)
    {
        pontLista->inicio = novo; //B
    }

    // 1 ou + DE 1 ELEMENTO
    else
    {
        NoSLI *pontAux = pontLista->inicio;
        while (pontAux->proximo != NULL) //Andar o ponteiro na lista
        {
            pontAux = pontAux->proximo;
        }
        pontAux->proximo = novo; //B
    }

    pontLista->tamanho++; // C mesmo passo para todas opções 

}

void InserirInicioSLI(int valor, ListaSLI *pontLista)
{
    NoSLI *novo = criarNoSLI(valor, NULL); // A mesmo passo para todas as opções

    // VAZIA
    if (pontLista->inicio == NULL) // serve os dois: (lista->tamanho == 0) ou (lista->inicio == NULL)
    {
        pontLista->inicio = novo; //B
    }

    // 1 ou + DE 1 ELEMENTO

    else
    {   
        novo->proximo = pontLista->inicio;
        pontLista->inicio = novo; //B
    }

    pontLista->tamanho++; //C mesmo passo para todas opções 

}

int obterValorInicioSLI(ListaSLI *pontLista)
{
    // VAZIA
    if (pontLista->inicio == NULL)
    {
        printf("Lista Vazia! ");
        return 0;
    }

    // 1 OU + DE 1 ELEMENTO
    else
    {
        return pontLista->inicio->valor;
    }


}

int obterValorFimSLI(ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->inicio == NULL)
    {
        printf("Lista Vazia! ");
        return 0;
    }

    // 1 OU + DE 1 ELEMENTO
    else
    {
        NoSLI *pontAux = pontLista->inicio;
        while (pontAux->proximo != NULL)
        {
            pontAux = pontAux->proximo;
        }
        return pontAux->valor;
    }
}

