#include <stdio.h>

int main() {

    int testes;
    int casas;

    scanf("%d", &testes);

    while (testes > 0) {

        scanf("%d", &casas);

        unsigned long long graos = 1;
        unsigned long long total = 0;

        for (int i = 1; i <= casas; i++) {

            total += graos;

            graos = graos * 2;
        }

        printf("%llu kg\n", total / 12000);

        testes--;
    }

    return 0;
}

