#include <stdio.h>

int main(){
    float caixas, preco;
    printf("Quantas caixas vc vai comprar? ");
    scanf("%f", &caixas);

    if (caixas > 10) {
        preco = caixas * 9.50;
    }
    else {
        preco = caixas * 12;
    }

    printf("O valor total da compra sera de: %f", preco);

    return 0;
}