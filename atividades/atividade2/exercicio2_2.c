
#include <stdio.h>

#include <stdio.h>

int main()
{
    float nota[5];
    float media;
    float soma_notas = 0;
    
    for(int i = 0; i < 5; i++){
        float n;
        printf("Digite sua nota, aluno %d: ", i + 1);
        scanf("%f", &n);
        nota[i] = n;
        soma_notas += n; 
    }
    
    media = soma_notas/ 5;
    
    int acima_da_media = 0;
    int abaixo_da_media = 0;

    for(int k = 0; k < 5; k++){
        if(nota[k] > media){
            acima_da_media += 1;
        }
        else{
            abaixo_da_media += 1;
        }
    }
    
    printf("Pessoas acima da média: %d\n", acima_da_media);
    printf("Pessoas abaixo da média: %d\n", abaixo_da_media);

    return 0;
}