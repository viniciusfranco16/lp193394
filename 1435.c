/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : Construir uma matriz quadrada cujos valores aumentam em
              camadas concêntricas até o centro.
Aprendizado : Manipulação de matrizes, cálculo de distâncias às bordas
              e formatação de saída com largura fixa.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N;
    int i, j;
    int menor;
    int matriz[100][100];

    while (scanf("%d", &N) == 1 && N != 0)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                menor = i;

                if (j < menor)
                    menor = j;

                if (N - 1 - i < menor)
                    menor = N - 1 - i;

                if (N - 1 - j < menor)
                    menor = N - 1 - j;

                matriz[i][j] = menor + 1;
            }
        }

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (j == 0)
                    printf("%3d", matriz[i][j]);
                else
                    printf(" %3d", matriz[i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
