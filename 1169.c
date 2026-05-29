/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinicius Franco Silva>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    :
Aprendizado : <<aprender a fazer uma progressão geometrica atraves da programação>>
-------------------------------------------------------------------------- */


#include <stdio.h>

unsigned long long calcularGraos(int casas, unsigned long long graosAtual) {

    // Caso base
    if (casas == 0) {
        return 0;
    }

    // Soma os grãos atuais + chamada recursiva
    return graosAtual + calcularGraos(casas - 1, graosAtual * 2);
}

int main() {

    int testes;
    int casas;

    scanf("%d", &testes);

    while (testes > 0) {

        scanf("%d", &casas);

        unsigned long long total = calcularGraos(casas, 1);

        printf("%llu kg\n", total / 12000);

        testes--;
    }

    return 0;
}
