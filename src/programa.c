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

    printf("+--------------+\n");
    printf("| -> PELO FIM  |\n");
    printf("+--------------+\n");
    espaco();

    printf("// Mostrando o primeiro elemento da lista: \n");
    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista));
    espaco();

    printf("// Mostrando o último elemento da lista: \n");
    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista));
    espaco();

    printf("// Mostrando a lista: \n");
    mostrarListaSLI(lista);
    espaco();

    printf("// Inserindo o primeiro elemento da lista pelo fim e mostrando ela: \n");
    inserirFimSLI(10, lista);
    mostrarListaSLI(lista);
    espaco();

    printf("// Inserindo mais um elemento na lista pelo fim e mostrando ela: \n");
    inserirFimSLI(20, lista);
    mostrarListaSLI(lista);
    espaco();

    printf("// Inserindo mais um elemento na lista pelo fim e mostrando ela: \n");
    inserirFimSLI(30, lista);
    mostrarListaSLI(lista);
    espaco();

    printf("// Removendo o primeiro elemento da lista e mostrando ela: \n");
    printf("Remover o primeiro elemento da lista (se deu certo = 1, errado = 0):  %d\n\n", removerInicioLSLI(lista));
    mostrarListaSLI(lista);
    espaco();
    espaco();

    printf("// Mostrando o primeiro elemento da lista: \n");
    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista));
    espaco();

    printf("// Mostrando o último elemento da lista: \n");
    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista));
    espaco();

    printf("// Removendo o último elemento da lista e mostrando ela: \n");
    printf("Remover último elemento da lista (se deu certo = 1, errado = 0): %d\n\n", removerFimLSLI(lista));
    mostrarListaSLI(lista);
    espaco();
    espaco();

    printf("+----------------+\n");
    printf("| -> PELO INÍCIO |\n");
    printf("+----------------+\n");
    espaco();

    mostrarListaSLI(lista2);
    espaco();

    removerInicioLSLI(lista2);

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

    printf("Remover o primeiro elemento da lista(se deu certo = 1, errado = 0): %d\n\n", removerInicioLSLI(lista2));
    mostrarListaSLI(lista2);
    espaco();

    printf("Primeiro Elemento da Lista: %d", obterValorInicioSLI(lista2));
    espaco();

    printf("Ultimo Elemento da Lista: %d", obterValorFimSLI(lista2));
    espaco();

    printf("// Limpando lista");
    limparLSLI(lista2);
    espaco();

    mostrarListaSLI(lista2);

    printf("Fim!");
    espaco(); 


    
    return 0;
}