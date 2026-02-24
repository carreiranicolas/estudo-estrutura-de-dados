
#include <stdio.h>
#include <string.h>

struct Carro{
    char modelo[80];
    char piloto[80];
    float tempoVolta;
};

int main()
{
    struct Carro arr[3];
    for(int i = 0; i < 3; i++){
        struct Carro c;
        printf("Digite o modelo do carro\n");
        char modelo[80];
        scanf("%s", modelo);
        printf("Digite o nome do piloto\n");
        char piloto[80];
        scanf("%s", piloto);
        printf("Qual o tempo da volta\n");
        float tempoVolta;
        scanf("%f", &tempoVolta);
        
        strncpy(c.modelo, modelo, 80);
        strncpy(c.piloto, piloto, 80);
        c.tempoVolta = tempoVolta;
        
        arr[i] = c;
    }
    
    char menor_piloto[80];
    int menor_tempo = -1;
    for(int k = 0; k < 3; k++){
        if(menor_tempo == -1 || menor_tempo> arr[k].tempoVolta){
            menor_tempo = arr[k].tempoVolta;
            strncpy(menor_piloto, arr[k].piloto, 80);
        }
    }
    
    printf("O piloto com menor tempo foi: %s\n", menor_piloto);
    return 0;
}