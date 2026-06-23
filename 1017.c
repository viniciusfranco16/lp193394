/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 23/06/2026
Objetivo    : Calcular a quantidade de combustível necessária para uma viagem, com base no tempo gasto e na velocidade média, considerando um consumo de 12 km/L.
Aprendizado : Utilização de operações aritméticas, leitura de dados de entrada e manipulação de números reais para resolver problemas do cotidiano.

-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    int tempo, velocidade;
    double distancia, litros;

    scanf("%d\n%d", &tempo, &velocidade);

    distancia = velocidade * tempo;
    litros = distancia/12.0;

    printf("%.3lf\n", litros);

    return 0;
}
