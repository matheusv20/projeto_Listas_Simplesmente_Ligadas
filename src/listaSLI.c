#include "listaSLI.h"


ListaSLI * criarListaSLI()
{
    ListaSLI *nova = (ListaSLI *) malloc(sizeof(ListaSLI));
    nova->tamanho = 0;
    nova->inicio = NULL;
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


// Deve inserir esse valor nessa posicao, "deslocando" os elementos
// para a direita
// TAM = 3 | 3 -> 7 -> 5 -> NULL
//           0    1    2  (posicao)
// lista vazia -> avisar o usuario que esta vazia, nao inserir e retornar 0
// posicao negativa -> avisar o usuario, nao inserir e retornar 0
// posicao > (tamanho -1) -> avisar o usuario, nao inserir e retornar 0
// posicao valida:
// TAM = 3 | 3 -> 7 -> 5 -> NULL, inserirPosicao(9, 1, lista)
// TAM = 4 | 3 -> 9 -> 7 -> 5 -> NULL, return 1
int inserirPosicaoLSLI(int valor, int posicao, ListaSLI *pontLista)
{
    if (posicao >= 0)
    {   
        NoSLI *novo = criarNoSLI(valor, NULL);

        //VAZIA
        if (pontLista->tamanho == 0)
        {
            printf("Lista Vazia!");
            return 0;
        }

        //1 ELEMENTO
        else if (pontLista->tamanho == 1)
        {
            InserirInicioSLI(valor, pontLista);
            return 1;
        }

        // + DE 1 ELEMENTO
        else
        {
            if (posicao == 0)
            {
                InserirInicioSLI(valor, pontLista);
            }
            
            else
            {
                NoSLI *pontAux = pontLista->inicio;
                            
                int contador = 0;

                while (contador != (posicao - 1))
                    {
                        pontAux = pontAux->proximo;
                        contador++;
                    }
                            
                novo->proximo = pontAux->proximo;

                pontAux->proximo = novo;

                novo->valor = valor;

                pontLista->tamanho++;
            }
            return 1;
        }
    }
    else
    {
        printf("Não existe posição negativa! \n\n");
        return 0;
    }
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


// 0 -  NÃO REMOVEU
// 1 - REMOVEU
int removerInicioLSLI(ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->inicio == NULL)
    {
        printf("Lista Vazia! ");
        return 0;
    }

    // 1 ou + DE 1 ELEMENTO
    else
    {
        NoSLI *pontAux = pontLista->inicio; //guarda o endereço do primeiro nó

        pontLista->inicio = pontAux->proximo; //faz o inicio da lista apontar para o segundo nó

        free(pontAux); //remove o antigo primeiro nó da memória

        pontLista->tamanho--; //diminuindo o tamanho da lista

        return 1;
    }
}

// 0 -  NÃO REMOVEU
// 1 - REMOVEU
int removerFimLSLI(ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->inicio == NULL)
    {
        printf("Lista Vazia! ");
        return 0;
    }

    // 1 ou + DE 1 ELEMENTO
    else
    {
        NoSLI *pontAux = pontLista->inicio;
        while (pontAux->proximo->proximo != NULL)
        {
            pontAux = pontAux->proximo;
        }
        free(pontAux->proximo);
        pontAux->proximo = NULL;
        pontLista->tamanho--;
        return 1;
    }
}


void limparLSLI(ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->tamanho == 0)
    {
        printf("Lista Vazia!");
    }

    //1 ou + DE 1 ELEMENTO
    else
    {   
        NoSLI *pontAux = pontLista->inicio; //guarda o endereço do primeiro nó

        NoSLI *pontAux2 = pontAux->proximo; //guarda o endereço do próximo nó

        while (pontAux2 != NULL)
        {
            free(pontAux); //limpou o primeiro nó
            pontAux = pontAux2; //fez o primeiro apontar para o proximo
            pontAux2 = pontAux2->proximo; //fez o próximo apontar para o outro próximo
        }
        free(pontAux); //limpou o último que ficou

        pontLista->tamanho = 0; //diminuiu o tamanho pra 0
    }
}


void destruirLSLI(ListaSLI **pontPontLista)
{
    limparLSLI(*pontPontLista);
    free(*pontPontLista);
    *pontPontLista = NULL;
}

int trocarValorInicioLSLI(int valor, ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->tamanho == 0)
    {
        printf("Impossível Trocar o Valor de uma Lista Vazia!");
        return 0;
    }
    // 1 ou + DE 1 ELEMENTO
    else
    {
        pontLista->inicio->valor = valor;
        return 1;
    }
}

int trocarValorFimLSLI(int valor, ListaSLI *pontLista)
{
    //VAZIA
    if (pontLista->tamanho == 0)
    {
        printf("Impossível Trocar o Valor de uma Lista Vazia!");
        return 0;
    }
    // 1 ou + DE 1 ELEMENTO
    else
    {
        NoSLI *pontAux = pontLista->inicio; //guarda o endereço do primeiro nó

        while (pontAux->proximo != NULL)
        {
            pontAux = pontAux->proximo;
        }

        pontAux->valor = valor;

        return 1;
    }
}


