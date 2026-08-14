#include <stdio.h>
#include <math.h>

int main(){
    float medlado, areaT, areaQ;
    int numlado;

    printf("Coloque a quantidade de lados da forma: ");
    scanf("%d", &numlado);

    if (numlado !=3 && numlado !=4 && numlado !=5){
        printf("ERRO!!!");
        return 0;
    }

    printf("Coloque a medida de um dos lados das formas: ");
    scanf("%f", &medlado);

    switch (numlado){
        case 3:
            printf("A forma com 3 lados eh um TRIANGULO! \n");
            areaT = (sqrt(3) / 4) * pow(medlado,2);
            printf("A area do triangulo eh: %.1f \n", areaT);
            break;
        
        case 4:
            printf("A forma com 4 lados eh um QUADRADO!\n");
            areaQ = pow(medlado,2);
            printf("A area do quadrado eh: %.1f \n", areaQ);
            break;
        
        case 5:
            printf("A forma com 5 lados eh um PENTAGONO!");
            break;
    }
    return 0;
}