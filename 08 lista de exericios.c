#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, x3, x4, x5, media, DP, quant;
    printf("Digite o valor do primeiro X: ");
    scanf("%f", &x1);

    printf("Digite o valor do segundo X: ");
    scanf("%f", &x2);

    printf("Digite o valor do terceiro X: ");
    scanf("%f", &x3);

    printf("Digite o valor do quarto X: ");
    scanf("%f", &x4);
    
    printf("Digite o valor do quinto X: ");
    scanf("%f", &x5);

    media = (x1 + x2 + x3 + x4 + x5) / 5;
    
    DP = sqrt ((pow(x1-media,2) + pow(x2-media,2) + pow(x3-media,2) + pow(x4-media,2) + pow(x5-media,2)) / 5);

    quant = 0;
    if (x1 < media){
        quant++;
    }
    if (x2 < media){
        quant++;
    }
    if (x3 < media){
        quant++;
    }
    if (x4 < media){
        quant++;
    }
    if (x5 < media){
        quant++;
    }

    printf("A media dos 5 X`s foi: %.2f \n", media);
    printf("O desvio padrao dos 5 X`s foi: %.2f \n", DP);
    printf("A quantidade de numeros maiores que a media dos 5 X`s foi: %f \n", quant);

    return 0;
}