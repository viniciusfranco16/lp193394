/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinicius Franco Silva>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    :
Aprendizado : <<<ler vários números automaticamente>>>
-------------------------------------------------------------------------- */



#include <limits.h>
#include <stdio.h>

int main()
{
    int i, N, maior, maior_pos;

    maior = INT_MIN;
    for (i = 1; i <= 100; ++i)
    {
        scanf("%d", &N);
        if (N > maior)
        {
            maior = N;
            maior_pos = i;
        }
    }

    printf("%d\n%d\n", maior, maior_pos);

    return 0;
}
