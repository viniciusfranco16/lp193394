/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Vinicius Franco Silva
Linguagem   : C++
Problema    : Josephus Problem (BeeCrowd 1030)
Data        : 23/06/2026
Objetivo    : Resolver o problema de Josephus para múltiplos casos de teste.
Aprendizado : Implementação de lógica iterativa para resolver recorrência clássica (Josephus).
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int josephus(int n, int k) {
    int res = 0; // base: n = 1 => posição 0 (indexado em 0)
    
    for (int i = 2; i <= n; i++) {
        res = (res + k) % i;
    }
    
    return res + 1; // ajusta para indexação começando em 1
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int NC;
    cin >> NC;

    for (int i = 1; i <= NC; i++) {
        int n, k;
        cin >> n >> k;

        int ans = josephus(n, k);

        cout << "Case " << i << ": " << ans << "\n";
    }

    return 0;
}
