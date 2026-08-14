#include <stdio.h>

int main() {
    int a, b;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

    if (a > b) {
        printf("A é maior que B");
    }
    else if (a == b) {
        printf("A é igual a B");
    }
    else {
        printf("B é maior que A");
    }

    return 0;
}