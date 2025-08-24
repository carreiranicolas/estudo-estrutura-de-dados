

#include <stdio.h>

int main()
{
    float temperatura[30];
   
    float maior_temperatura = -500;
    float menor_temperatura = -500;
    int indice_maior;
    int indice_menor;
    
    for(int i = 0; i < 3; i++){
        float n = 0;
        printf("Digite a temperatura do dia: ");
        scanf("%f", &n);
        temperatura[i] = n;
        
        if(maior_temperatura == -500 || maior_temperatura < n){
            maior_temperatura = n;
            indice_maior = i;
        }
        
        if(menor_temperatura == -500 || menor_temperatura > n){
            menor_temperatura = n;
            indice_menor = i;
        }
    }
    
    printf("Maior temperatura: %.2f. Dia: %d\n", maior_temperatura, indice_maior + 1);
    printf("Menor temperatura %.2f. Dia: %d\n", menor_temperatura, indice_menor + 1);

    return 0;
}