/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 23/06/2026
Objetivo    : Gerar a Sequência de Granizo (Collatz) a partir de um valor
              inicial e determinar o maior número encontrado na sequência.
Aprendizado : Uso de estruturas de repetição, condicionais e manipulação
              de números inteiros para simular uma sequência matemática.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    long long h;
    long long maior;

    while (scanf("%lld", &h) == 1 && h != 0)
    {
        maior = h;

        while (h != 1)
        {
            if (h % 2 == 0)
            {
                h = h / 2;
            }
            else
            {
                h = 3 * h + 1;
            }

            if (h > maior)
            {
                maior = h;
            }
        }

        printf("%lld\n", maior);
    }

    return 0;
}
