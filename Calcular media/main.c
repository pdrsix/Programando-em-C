#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i, tam;
    float nota[10], media, total = 0;

    printf("\t\t Programa para calcular média de até 10 notas \t\t");

    do{
    printf("\n\n\t\t Quantas notas deseja calcular? \n");
    scanf("%d", &tam);
    }while(tam>10 || tam<2);
    for(i>=0;i<tam;i++){
        printf("Nota %d Bim: ", i + 1);
        scanf("%f", &nota[i]);
        total = total + nota[i];
    }
    printf("A soma das notas e: %.2f\n", total);

    media = total / tam;

    printf("A media e: %.2f", media);

    return 0;
}

