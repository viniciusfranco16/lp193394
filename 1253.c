/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 23/06/2026
Objetivo    : Realizar a decodificação de mensagens criptografadas por deslocamento de caracteres (cifra de César), deslocando letras para trás no alfabeto.
Aprendizado : Manipulação de strings, operações com caracteres ASCII e lógica de criptografia simples.
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main(){
    char alfabeto[51];
    int N, deslocamento;

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", &alfabeto);
        scanf("%d\n", &deslocamento);

        for(int j = 0; j < strlen(alfabeto); ++j){
            alfabeto[j] = ((alfabeto[j] - 'A' - deslocamento + 26) % 26) + 'A';
        }

        printf("%s\n", alfabeto);
    }

    return 0;
}
