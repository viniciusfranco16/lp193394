/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinicius Franco Silva>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    :
Aprendizado : <<<ler vários números automaticamente com vetores>>>
-------------------------------------------------------------------------- */

#include <limits.h>
#include <stdio.h>

int main()
{
    int i, maior, maior_pos;
    int v[100]; // vetor para armazenar os 100 números

    // leitura dos valores
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &v[i]);
    }

    // inicializa com o primeiro valor do vetor
    maior = v[0];
    maior_pos = 0;

    // percorre o vetor para achar o maior
    for (i = 1; i < 100; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            maior_pos = i;
        }
    }

    // +1 porque posição humana começa em 1
    printf("%d\n%d\n", maior, maior_pos + 1);

    return 0;
}
