
#include <stdio.h>

int main()
{
    int pecas[10];
    
    for(int i = 0; i < 10; i++){
        int peca;
        scanf("%d", &peca);
        pecas[i] = peca;
    }
    
    int total_pecas = 0;
    int maior_producao = 0;
    int indice_maior_producao;
    

    for(int k = 0; k < 10; k++){
        total_pecas += pecas[k];
        
        if (maior_producao == 0 || maior_producao < pecas[k]){
            maior_producao = pecas[k];
            indice_maior_producao = k;
        }
    }
    
    printf("O total de peças produzidas no dia foi: %d\n", total_pecas);
    printf("O indice da maior quantidade de peças produzida foi: %d\n", indice_maior_producao);
    return 0;
}
