
int ehPrimo(int n){ 
    for(int valor = 1; valor <= n; valor++){ 
        if(valor != n && valor != 1){ 
            if(n%valor == 0){ 
                return 0; 
                
            } 
            else{ 
                return 1; 
                
            } 
            
        } 
        
    } 
    
} 
#include <stdio.h> 
int main() { 
    int n; 
    printf("Digite um valor para vermos se é primo\n"); 
    scanf("%d", &n); 
    int resultado = ehPrimo(n); 
    if(resultado == 0){ 
        printf("Não é primo"); 
        
    } 
    else{ printf("É primo!"); 
        
    } return 0; 
    
}