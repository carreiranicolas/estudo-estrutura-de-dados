
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

    for(int k = 0; k < 5; k++){
        if(nota[k] > media){
            printf("Nota do aluno %d: %.2f\n", k + 1, nota[k]);
        }
    }

    return 0;
}