/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : Ler um vetor de 20 posições, inverter sua ordem e exibir
              os valores resultantes.
Aprendizado : Manipulação de vetores, troca de elementos e uso de laços
              de repetição para percorrer estruturas de dados.

-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N[20];
    int i, aux;

    /* Leitura do vetor */
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    /* Troca dos elementos */
    for(i = 0; i < 10; i++)
    {
        aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    /* Exibição do vetor */
    for(i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
