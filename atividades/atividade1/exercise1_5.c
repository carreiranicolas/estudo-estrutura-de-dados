#include <stdio.h> 
int main() { 
    int n; 
    scanf("%d", &n); 
    int dividido_por_outros = 0; 
    for(int i = 1; i <= n; i++){ 
        if(i != 1 && i != n){ 
            if(n%i == 0){ 
                dividido_por_outros = 1; 
                
            } 
            
        } 
        
    } 
    if(dividido_por_outros != 1){ 
        printf("É primo!"); 
        
    } 
    else{ printf("Não é primo"); } return 0; 
    
}

