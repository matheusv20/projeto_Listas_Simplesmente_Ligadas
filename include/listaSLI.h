#ifndef LISTASLI_H
#define LISTASLI_H 1

#include "noSLI.h"


typedef struct listasimples_int
{
    NoSLI *inicio;
    int tamanho;
} ListaSLI;

ListaSLI *criarListaSLI();

void mostrarListaSLI(ListaSLI *pontLista);

void inserirFimSLI(int valor, ListaSLI *pontLista);
void InserirInicioSLI(int valor, ListaSLI *pontLista);

int obterValorInicioSLI(ListaSLI *pontLista);
int obterValorFimSLI(ListaSLI *pontLista);

int removerInicioLSLI(ListaSLI *pontLista);



#endif