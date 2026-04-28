/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<Vinicius Franco Silva>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 28/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma.
Aprendizado : <<<usar o if, for e else>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int x, y, min, max, soma = 0;
    scanf("%d %d", &x, &y);
    
    // Define os limites do loop
    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }
    
    // Soma os ímpares
    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    return 0;
}
