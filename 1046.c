/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 23/06/2026
Objetivo    : Determinar a duração de um jogo em horas, considerando o horário de início e término e tratando o caso em que o jogo ultrapassa a meia-noite.
Aprendizado : Uso de estruturas condicionais e manipulação de horas em problemas de lógica.

-------------------------------------------------------------------------- */


#include <stdio.h>

int main()
{
    int hora_inicial, hora_final;

    scanf("%d %d", &hora_inicial, &hora_final);

    if (hora_final <= hora_inicial)
        hora_final += 24;

    printf("O JOGO DUROU %d HORA(S)\n", hora_final - hora_inicial);

    return 0;
}
