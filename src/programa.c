#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilidades.h"
#include "listaSLI.h"


int main()
{
    ListaSLI * lista = criarListaSLI();
    espaco();

    ListaSLI * lista2 = criarListaSLI();
    espaco();

    printf("+--------------------------------+\n");
    printf("| INSERIR ELEMENTOS EM UMA LISTA |\n");
    printf("+--------------------------------+\n");
    espaco();

    printf("-> PELO FIM: ");
    espaco();

    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista));
    espaco();

    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista));
    espaco();
    espaco();

    mostrarListaSLI(lista);
    espaco();

    inserirFimSLI(10, lista);
    mostrarListaSLI(lista);
    espaco();

    inserirFimSLI(20, lista);
    mostrarListaSLI(lista);
    espaco();

    inserirFimSLI(30, lista);
    mostrarListaSLI(lista);
    espaco();

    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista));
    espaco();

    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista));
    espaco();
    espaco();

    printf("-> PELO INÍCIO: ");
    espaco();

    mostrarListaSLI(lista2);
    espaco();

    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista2));
    espaco();

    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista2));
    espaco();
    espaco();

    InserirInicioSLI(55, lista2);
    mostrarListaSLI(lista2);
    espaco();

    InserirInicioSLI(67, lista2);
    mostrarListaSLI(lista2);
    espaco();

    InserirInicioSLI(100, lista2);
    mostrarListaSLI(lista2);
    espaco();

    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista2));
    espaco();

    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista2));
    espaco();

    printf("Fim!");


    
    return 0;
}