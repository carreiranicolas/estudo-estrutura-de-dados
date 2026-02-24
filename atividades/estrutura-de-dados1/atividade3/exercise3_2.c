#include <stdio.h> 
#include <string.h> 
struct Produto{ 
    char nome[80]; 
    int codigo; 
    float preco; 
    
}; 
int main() { 
    struct Produto arr[5]; 
    for(int i = 0; i < 2; i++){ 
        struct Produto p; 
        printf("Digite o nome do produto\n"); 
        char nome[80]; 
        scanf("%s", nome); 
        printf("Digite o código do produto\n"); 
        int codigo; 
        scanf("%d", &codigo); 
        printf("Digite o preco do produto\n"); 
        float preco; 
        scanf("%f", &preco); 
        strncpy(p.nome, nome, 80); 
        p.codigo = codigo; 
        p.preco = preco; 
        arr[i] = p; 
        
    } 
    float preco_mais_caro = -1; 
    float preco_mais_barato = -1; 
    char mais_caro[80]; 
    char mais_barato[80]; 
    for(int k = 0; k < 2; k++){ 
        if(preco_mais_caro == -1 || preco_mais_caro < arr[k].preco){ 
            strncpy(mais_caro, arr[k].nome, 80); 
            preco_mais_caro = arr[k].preco; 
            
        } 
        if(preco_mais_barato == -1 || preco_mais_barato > arr[k].preco){ 
            strncpy(mais_barato, arr[k].nome, 80); 
            preco_mais_barato = arr[k].preco; 
            
        } 
        
    } 
    printf("Produto mais caro: %s\n", mais_caro); 
    printf("Produto mais barato: %s\n", mais_barato); 
    return 0; 
    
}