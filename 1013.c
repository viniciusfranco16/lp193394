/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinicius Franco Silva>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 28/04/2026
Objetivo    : Mostrar o maior numero.
Aprendizado : <<Aprendi a mostrar o maior entre dois numeros, fazendo uma comparacao com o codigo>>
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(){
    int a, b, c, resposta;

    scanf("%d %d %d", &a, &b, &c);
    
    resposta = maior(a, maior(b, c));

    printf("%d eh o maior\n", resposta);

    return 0;
}
