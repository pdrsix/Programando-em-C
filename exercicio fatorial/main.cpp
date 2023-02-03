#include <iostream>

int fatorial(int n)
{
    int fat;

    if(n!=1){
        fat = n * fatorial(n - 1);
    }else{

        return n;
    }

}
int main()
{
    int numero, f, i;

    printf("Digite o numero que deseja o fatorial ");
    scanf("%d", &numero);

    fatorial(numero);

    f = fatorial(numero);

    printf("Fatorial de %d e = %d", numero, f);
    numero = 0;
    printf("\n\tDeseja calcular outro numero?");
    scanf("%d", &i);

    if(i==1){
        printf("Digite o numero que deseja o fatorial ");
        scanf("%d", &numero);
        fatorial(numero);
        f = fatorial(numero);
        printf("Fatorial de %d e = %d", numero, f);
    }else{
        printf("Obrigado!");
    }


    return 0;
}
