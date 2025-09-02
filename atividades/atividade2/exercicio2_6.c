
#include <stdio.h>

int main()
{
    int notas[15];
    int qtde_clientes = 0;
    int nota_5 = 0;
    int nota_1_2 = 0;
    
    for(int i = 0; i < 15; i++){
        int nota;
        scanf("%d", &nota);
        while(nota > 5 || nota < 1){
            scanf("%d", &nota);
        }
        notas[i] = nota;
        
        if(nota == 5){
            nota_5 += 1;
        }
        else if(nota == 1 || nota == 2){
            nota_1_2 += 1;
        }
        
        qtde_clientes += 1;
    }
    
    float porcentagem = (float)nota_1_2/qtde_clientes;
    
    printf("Quantidade de clientes que deram nota 5: %d\n", nota_5);
    printf("Porcentagem de clientes que deram nota 1 ou 2: %.2f\n", porcentagem * 100 );
    return 0;
}
