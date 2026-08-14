#include <stdio.h>

int main(){
    float fria, morna, quente, temperatura;

    printf("Qual temperatura vc quer medir?: ");
    scanf("%f", &temperatura);

    if(temperatura < 25){
        printf("Água fria, temperatura menor que 25ºC");
    }
    else if(temperatura > 30){
        printf("Água Quente, temperatura maior que 30ºC");
    }
    else {
        printf("Água Morna, temperatura entre 25ºC e 30ºC");
    }
    return 0;
}