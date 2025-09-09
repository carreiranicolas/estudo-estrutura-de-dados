#include <stdio.h> 
#include <string.h> 
struct Livro{ 
    char titulo[80]; 
    char autor[80]; 
    int ano; 
    
}; 
int main() { 
    struct Livro arr[4]; 
    for(int i = 0; i < 4; i++){ 
        struct Livro l; 
        printf("Digite o nome do livro\n"); 
        char titulo[80]; 
        scanf("%s", titulo); 
        printf("Digite o nome do autor\n"); 
        char autor[80]; 
        scanf("%s", autor); 
        printf("Digite o ano do livro\n"); 
        int ano; 
        scanf("%d", &ano); 
        strncpy(l.titulo, titulo, 80); 
        strncpy(l.autor, autor, 80); 
        l.ano = ano; 
        arr[i] = l; 
        
    } 
    int atendecondicao = -1; 
    for(int k = 0; k < 4; k++){ 
        if(arr[k].ano < 2000){ 
            printf("Nome do livro: %s\n", arr[k].titulo); 
            printf("Nome do autor: %s\n", arr[k].autor); 
            printf("Ano de publicação: %d\n", arr[k].ano); 
            atendecondicao += 1; 
            
        } 
        if(atendecondicao == -1){ 
            printf("Não há livros publicados antes dos anos 2000\n"); 
            
        } 
        
    } 
    return 0; 
    
}