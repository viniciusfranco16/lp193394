/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C
Problema    : jogo.C
Data        : 23/06/2026
Objetivo    : Desenvolver um jogo de Sudoku interativo.
Aprendizado : Manipulação de arqs, validação de Sudoku e interação com o usuário.
-------------------------------------------------------------------------- */

#include <stdio.h>

int grade[9][9];
int fixo[9][9]; 

int conferirLinha(int linha)
{
    int usado[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int num = grade[linha][i];
        if (num == 0) return 0;
        if (usado[num]) return 0;
        usado[num] = 1;
    }
    return 1;
}

int conferirColuna(int coluna)
{
    int usado[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int num = grade[i][coluna];
        if (num == 0) return 0;
        if (usado[num]) return 0;
        usado[num] = 1;
    }
    return 1;
}

int conferirQuadrante(int inicioLinha, int inicioColuna)
{
    int usado[10] = {0};
    for (int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for (int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            int num = grade[i][j];
            if (num == 0) return 0;
            if (usado[num]) return 0;
            usado[num] = 1;
        }
    }
    return 1;
}

int sudokuResolvido()
{
    for (int i = 0; i < 9; i++)
    {
        if (!conferirLinha(i) || !conferirColuna(i))
            return 0;
    }
    for (int linha = 0; linha < 9; linha += 3)
    {
        for (int coluna = 0; coluna < 9; coluna += 3)
        {
            if (!conferirQuadrante(linha, coluna))
                return 0;
        }
    }
    return 1;
}

int movimentoValido(int linha, int coluna, int num)
{
    for (int j = 0; j < 9; j++)
    {
        if (j != coluna && grade[linha][j] == num)
            return 0;
    }
    for (int i = 0; i < 9; i++)
    {
        if (i != linha && grade[i][coluna] == num)
            return 0;
    }
    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;
    for (int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for (int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            if ((i != linha || j != coluna) && grade[i][j] == num)
                return 0;
        }
    }
    return 1;
}

void mostrarGrade()
{
    printf("\n    ");
    for (int j = 0; j < 9; j++)
    {
        if (j == 3 || j == 6) printf("  ");
        printf("Col%d ", j + 1);
    }
    printf("\n");

    printf("    ");
    for (int j = 0; j < 9; j++)
    {
        if (j == 3 || j == 6) printf("  ");
        printf("----- ");
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
            printf("\n");

        printf("L%d |", i + 1);

        for (int j = 0; j < 9; j++)
        {
            if (j == 3 || j == 6) printf("  ");
            if (grade[i][j] == 0)
                printf("  [ ] ");
            else if (fixo[i][j])
                printf("  <%d> ", grade[i][j]);
            else
                printf("  [%d] ", grade[i][j]);
        }
        printf("\n");
    }
    printf("\n  Legenda: <N> = numero original  |  [N] = sua jogada  |  [ ] = vazio\n\n");
}

int lerPuzzle(const char *arqPuzzle)
{
    FILE *arq = fopen(arqPuzzle, "r");
    if (arq == NULL)
    {
        printf("Erro: nao foi possivel abrir o arq '%s'.\n", arqPuzzle);
        return 0;
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fscanf(arq, "%d", &grade[i][j]) != 1)
            {
                printf("Erro: arq com formato invalido.\n");
                fclose(arq);
                return 0;
            }
            fixo[i][j] = (grade[i][j] != 0) ? 1 : 0;
        }
    }

    fclose(arq);
    return 1;
}

int main()
{
    char arqPuzzle[100];

    printf("===========================================\n");
    printf("          BEM-VINDO AO SUDOKU!             \n");
    printf("===========================================\n\n");

    printf("Digite o nome do arq com o puzzle: ");
    scanf("%s", arqPuzzle);

    if (!lerPuzzle(arqPuzzle))
        return 1;

    printf("\nPuzzle carregado com sucesso!\n");
    printf("Preencha as casas marcadas com [ ].\n");
    printf("Digite 0 em qualquer campo para sair.\n");

    mostrarGrade();

    while (!sudokuResolvido())
    {
        int linha, coluna, numero;

        printf("Digite a linha  (1-9): ");
        scanf("%d", &linha);
        if (linha == 0) break;

        printf("Digite a coluna (1-9): ");
        scanf("%d", &coluna);
        if (coluna == 0) break;

        printf("Digite o numero (1-9): ");
        scanf("%d", &numero);
        if (numero == 0) break;

        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || numero < 1 || numero > 9)
        {
            printf("\nValores invalidos! Linha, coluna e numero devem estar entre 1 e 9.\n\n");
            continue;
        }

        int l = linha - 1;
        int c = coluna - 1;

        if (grade[l][c] != 0)
        {
            printf("\nEssa casa ja esta preenchida, tente novamente.\n\n");
            continue;
        }

        if (!movimentoValido(l, c, numero))
        {
            printf("\nVoce errou, tente novamente.\n\n");
            continue;
        }

        grade[l][c] = numero;
        printf("\nVoce acertou, parabens!\n\n");

        mostrarGrade();
    }

    if (sudokuResolvido())
        printf("Sudoku concluido. Fim de jogo.\n");
    else
        printf("\nJogo encerrado. Ate a proxima!\n");

    return 0;
}
