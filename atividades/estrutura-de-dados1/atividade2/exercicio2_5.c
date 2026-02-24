
#include <stdio.h>

int main()
{
    int pontuacao[8];
    float total_pontos = 0;
    float quantidade_jogadores = 0;
    
    for(int i = 0; i < 8; i++){
        int jogador;
        scanf("%d", &jogador);
        pontuacao[i] = jogador;
        quantidade_jogadores += 1;
        total_pontos += jogador;
    }
    
    float media = total_pontos / quantidade_jogadores;
    printf("Média de pontos: %.2f\n", media);
    printf("Exibindo o array de modo reverso:\n");
    for(int k = 7; k >= 0; k--){
        
        printf("%d\n", pontuacao[k]);
  
    }
    
    return 0;
}
