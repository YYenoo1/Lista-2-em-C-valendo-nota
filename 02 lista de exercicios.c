#include <stdio.h>

int main() {
    int X1, X2, D, modulo;

    printf("Digite um valor para X1: ");
    scanf("%d", &X1);

    printf("Digite um valor para X2: ");
    scanf("%d", &X2);

    D = X1 - X2;

    if (D > 0){
        modulo = D;
    }
    else {
        modulo = -D;
    }
    printf("O modulo de X1 é %d \n", modulo);

    return 0;
}