#include<stdio.h>
#include<stdlib.h>

//Calculadora de operações básicas

int main(void)
{
    float n1, n2, soma, sub, mult, div;

    printf("\n Informe o valor 1: ");
    scanf("%f", &n1);

    printf("\n Informe o valor 2: ");
    scanf("%f", &n2);

    //Soma
    soma = n1 + n2;
    printf("\n A soma e: %f", soma);
    scanf("%f", &soma);

    //Subtração
    sub = n1 - n2;
    printf("\n A subtracao e: %f", sub);
    scanf("%f", &sub);

    //Multiplicação
    mult = n1 * n2;
    printf("\n A multiplicacao e: %f", mult);
    scanf("%f", &mult);

    //Divisão
    div = n1 / n2;
    printf("\n A divisao e: %f", div);
    scanf("%f", &div);


    return 0;
}
