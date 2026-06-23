/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : Gerar e imprimir uma matriz onde os elementos seguem um padrão simétrico, com valores preenchidos em ordem decrescente e crescente.
Aprendizado : Uso de matrizes, laços aninhados e construção de padrões bidimensionais.
-------------------------------------------------------------------------- */

#include <stdio.h>
 
#define MAXN 70
 
int main(void) {
    int N;
    char mat[MAXN][MAXN];
 
    while (scanf("%d", &N) == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i + j == N - 1)
                    *(*(mat + i) + j) = '2';
                else if (i == j)
                    *(*(mat + i) + j) = '1';
                else
                    *(*(mat + i) + j) = '3';
            }
        }
 
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                putchar(*(*(mat + i) + j));
            putchar('\n');
        }
    }
 
    return 0;
}
