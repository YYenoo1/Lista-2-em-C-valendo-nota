#include <stdio.h>

int main(){
    
    float h, peso;
    char s;

    printf("Digite qual é o seu sexo: ");
    scanf("%c", &s);
    
    printf("Digite a sua altura: ");
    scanf("%f", &h);

    if (s == "H")
    {
        peso = 72.7 * h - 58.0;
    }
    else if (s == "M")
    {
        peso = 62.1 * h - 44.7;
    }
    else
    {
        printf("Erro! Genero inexistente");
    }
    printf("Seu sexo é: %c, e o seu peso ideal é: %.2f", s, h);
    
    return 0;
}