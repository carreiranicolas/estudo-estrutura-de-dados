/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{


    int n, valor;

    int maior, menor;


    printf("Digite a quantidade de números que serão digitados: ");
    scanf("%d", &n);

    int vetor[n];

    int maior_n = 0;
    int menor_n = 0;
    for(int i =0; i < n; i++){
        scanf("%d", &valor);
        vetor[i] = valor;

        if(maior_n == 0 || maior < i){
            maior_n = 1;
            maior = valor;
        }

        if(menor_n == 0 || menor > i){
            menor_n = 1;
            menor = valor;
        }
    }

    printf("Maior número %d\n", maior);
    printf("Menor número %d\n", menor);



    return 0;
}
