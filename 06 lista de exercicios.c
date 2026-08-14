#include <stdio.h>

int main()
{
    float x, y, calc;
    int op;

    printf("Digite o valor de X: ");
    scanf("%f", &x);

    printf("Digite o valor de Y: ");
    scanf("%f", &y);

    printf("Digite qual operação deseja fazer: 1 = +, 2 = -, 3 = *, 4 = /");
    scanf("%d", &op);

    switch(op){
        case 1: 
        calc = x + y;
        printf("O valor da soma: %.2f", calc);
        break;

        case 2:
        calc = x - y;
        printf("O valor da subtração: %.2f", calc);
        break;

        case 3:
        calc = x * y;
        printf("O produto deu: %.2f", calc);
        break;

        case 4:
        if (x == 0){
            printf("Não pode um denominador que seja igual a zero para dividir");
        }
        else{
            calc = x / y;
            printf("O valor da divisão: %.2f", calc);
        }
        default:
            printf("Não tem essa opção");
    }


    return 0;
}