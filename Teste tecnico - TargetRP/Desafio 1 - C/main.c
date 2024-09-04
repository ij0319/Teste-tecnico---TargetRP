/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número,
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

// “Um número é Fibonacci se e apenas se uma ou ambas as expressões 5*n2 + 4 ou 5*n2 – 4 retornarem um quadrado perfeito.”

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;

    printf("Digite um numero ");
    scanf("%d", &numero);

    double formula1 = 5 * (numero * numero) + 4, formula2 = 5 * (numero * numero) - 4;

    formula1 = sqrt(formula1);
    formula2 = sqrt(formula2);

    if (formula1 - (int)formula1 == 0 || formula2 - (int)formula2 == 0)
    {
        printf("Este numero pertence a sequencia de Fibonacci");
    }
    else
    {
        printf("Este numero NAO pertence a sequencia de Fibonacci");
    }

    return 0;
}