/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 23/06/2026
Objetivo    : Calcular um número da sequência de Fibonacci utilizando
              recursão e informar a quantidade de chamadas realizadas.
Aprendizado : Uso de funções recursivas, contagem de chamadas de função
              e compreensão da árvore de recursão do algoritmo de Fibonacci.
-------------------------------------------------------------------------- */

#include <stdio.h>

int chamadas;

/* Função recursiva para calcular Fibonacci */
int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    chamadas += 2; /* chamadas para fib(n-1) e fib(n-2) */

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int N;
    int n;
    int resultado;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &n);

        chamadas = 0;
        resultado = fibonacci(n);

        printf("fib(%d) = %d calls = %d\n", n, chamadas, resultado);
    }

    return 0;
}
