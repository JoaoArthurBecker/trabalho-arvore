#include <stdio.h>
#include "Calculos.h"

void soma()
{
    int a = 0;
    int b = 0;
    int soma = 0;

    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    soma = a + b;

    printf("A soma é %d\n", soma);
    
}

void subtracao() {
    int a = 0;
    int b = 0;
    int subtracao = 0;

    printf("Digite A\n");
    scanf_s("%d", &a);

    printf("Digite B\n");
    scanf_s("%d", &b);

    subtracao = a - b;

    printf("O Valor da subtracao é: %d\n", subtracao);

}

void multiplicacao() {
    int a = 0;
    int b = 0;
    int multiplicacao = 0;

    printf("Digite A\n");
    scanf_s("%d", &a);

    printf("Digite B\n");
    scanf_s("%d", &b);

    multiplicacao = a * b;

    printf("O Valor da subtracao é: %d\n", multiplicacao);
}

void divisao() {
    float a = 0;
    float b = 0;
    float divisao = 0;

    printf("Digite A\n");
    scanf_s("%f", &a);

    printf("Digite B\n");
    scanf_s("%f", &b);

    divisao = a / b;

    printf("O Valor da subtracao é: %.2f\n", divisao);
}

void conversao_graus() {
    int a = 0;
    int conversao = 0;

    printf("Digite a temperatura\n");
    scanf_s("%d", &a);


    conversao = a * 1.8 + 32;

    printf("O Valor da subtracao é: %d \n", conversao);
}


