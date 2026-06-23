/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : Ler um vetor de inteiros, encontrar o menor valor e exibir
              sua posição no vetor.
Aprendizado : Manipulação de vetores, busca de elementos e comparação
              de valores durante a leitura dos dados.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N;
    int X[1000];
    int i;
    int menor;
    int posicao;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    menor = X[0];
    posicao = 0;

    for(i = 1; i < N; i++)
    {
        if(X[i] < menor)
        {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
