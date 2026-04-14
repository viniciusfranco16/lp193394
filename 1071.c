#include <stdio.h>

int main() {
    int x, y, min, max, soma = 0;
    scanf("%d %d", &x, &y);
    
    // Define os limites do loop
    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }
    
    // Soma os ímpares
    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    return 0;
}
