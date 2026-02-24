
#include <stdio.h>

int main()
{
    int produtos[7];
    int maior_vendas = -1;
    int indice_maior_vendas;
    int total_produtos_vendidos = 0;
    
    for(int i = 0; i < 7; i++){
        int quantidade;
        scanf("%d", &quantidade);
 
        produtos[i] = quantidade;
        
        if(maior_vendas == -1 || maior_vendas < quantidade){
            maior_vendas = quantidade;
            indice_maior_vendas = i;
        }
        
        total_produtos_vendidos += quantidade;
    }
    
    printf("O total de produtos vendidos na semana é: %d\n", total_produtos_vendidos);
    
    switch(indice_maior_vendas){
        case 0:
            printf("O dia de maior venda foi segunda feira!");
        
        case 1:
            printf("O dia de maior venda foi terça feira");
        
        case 2:
            printf("O dia de maior venda foi quarta feira");
        
        case 3:
            printf("O dia de maior venda foi quinta feira");
        
        case 4: 
            printf("O dia de maior venda foi sexta feira");
        
        case 5:
            printf("O dia de maior venda foi sabado");
        
        case 6:
            printf("O dia de maior venda foi domingo");
    }
    
    
    return 0;
}
