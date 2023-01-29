#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i;
    float num1, num2, soma, sub, div, mult;
    printf("\t\tCalculadora Simples em C\t\t\n");

    do{
    printf("Escolha entre: \n1 - soma \n2 - subtração \n3 - divisão \n4 - multiplicação\n");
    scanf("%d", &i);
        switch(i){
            case 1:
                printf("Digite os dois numeros para o calculo:\n");
                scanf("%f %f", &num1, &num2);
                soma = num1 + num2;
                printf("O resultado da soma de %.2f + %.2f = %.2f", num1, num2, soma);
                break;
            case 2:
                printf("Digite os dois numeros para o calculo:\n");
                scanf("%f %f", &num1, &num2);
                sub = num1 - num2;
                printf("O resultado da subtração de %.2f - %.2f = %.2f", num1, num2, sub);
                break;
            case 3:
                    printf("Digite os dois numeros para o calculo:\n");
                    scanf("%f %f", &num1, &num2);
                    div = num1 / num2;
                    printf("O resultado da divisão de %.2f / %.2f = %.2f", num1, num2, div);
                    break;
            case 4:
                    printf("Digite os dois numeros para o calculo:\n");
                    scanf("%f %f", &num1, &num2);
                    mult = num1 * num2;
                    printf("O resultado da multiplicação de %.2f * %.2f = %.2f", num1, num2, mult);
                    break;
            default:
                printf("Numero invalido\n");
            }

    }while(i>4 || i<1);


    return 0;
}
