#include<stdio.h>
#include<stdlib.h>

//Calculadora de opera��es b�sicas

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

    //Subtra��o
    sub = n1 - n2;
    printf("\n A subtracao e: %f", sub);
    scanf("%f", &sub);

    //Multiplica��o
    mult = n1 * n2;
    printf("\n A multiplicacao e: %f", mult);
    scanf("%f", &mult);

    //Divis�o
    div = n1 / n2;
    printf("\n A divisao e: %f", div);
    scanf("%f", &div);


    return 0;
}
