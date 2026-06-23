/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 23/06/2026
Objetivo    : Organizar uma lista de camisetas ordenando por cor,
              tamanho e nome do aluno.
Aprendizado : Uso de estruturas (struct), manipulação de strings e
              ordenação com múltiplos critérios utilizando qsort.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char cor[20];
    char tamanho;
} Camisa;

/* Função de comparação para qsort */
int comparar(const void *a, const void *b)
{
    Camisa *c1 = (Camisa *)a;
    Camisa *c2 = (Camisa *)b;

    /* Cor crescente */
    int cmp = strcmp(c1->cor, c2->cor);
    if (cmp != 0)
        return cmp;

    /* Tamanho decrescente: G > M > P */
    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho;

    /* Nome crescente */
    return strcmp(c1->nome, c2->nome);
}

int main()
{
    int N;
    int primeiroCaso = 1;

    while (scanf("%d", &N) == 1 && N != 0)
    {
        getchar(); /* remove '\n' */

        Camisa camisas[60];

        for (int i = 0; i < N; i++)
        {
            fgets(camisas[i].nome, sizeof(camisas[i].nome), stdin);
            camisas[i].nome[strcspn(camisas[i].nome, "\n")] = '\0';

            scanf("%s %c", camisas[i].cor, &camisas[i].tamanho);
            getchar();
        }

        qsort(camisas, N, sizeof(Camisa), comparar);

        if (!primeiroCaso)
            printf("\n");

        for (int i = 0; i < N; i++)
        {
            printf("%s %c %s\n",
                   camisas[i].cor,
                   camisas[i].tamanho,
                   camisas[i].nome);
        }

        primeiroCaso = 0;
    }

    return 0;
}
