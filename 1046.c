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
    int hora_ini, hora_fim;

    scanf("%d %d", &hora_ini, &hora_fim);

    if (hora_fim <= hora_ini)
        hora_fim += 24;

    printf("O JOGO DUROU %d HORA(S)\n", hora_fim - hora_ini);

    return 0;
}
