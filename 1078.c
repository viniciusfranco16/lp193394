/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinicius Franco Silva>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    :
Aprendizado : <<<Fazer um algoritimo que mostre a tabuada>>>
-------------------------------------------------------------------------- */


#include <stdio.h>

int main(){
    int i,num,res;
    
    scanf("%d",&num);
    
    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",i,num,num*i);
    }
return 0;
}
