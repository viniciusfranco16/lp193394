/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 15/06/2026
Objetivo    : Determinar o maior tamanho possível das pilhas de figurinhas
              que dois jogadores podem formar igualmente para realizar uma troca.
Aprendizado : Aplicação do algoritmo de Euclides para calcular o Máximo
              Divisor Comum (MDC), uso de funções e repetição com múltiplos
              casos de teste.
-------------------------------------------------------------------------- */

#include <stdio.h>

/* Função que calcula o MDC */
int calcularMDC(int a, int b)
{
    int resto;

    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main()
{
    int N;
    int F1, F2;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &F1, &F2);

        printf("%d\n", calcularMDC(F1, F2));
    }

    return 0;
}
