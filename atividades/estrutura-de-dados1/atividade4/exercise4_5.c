
int fatorial(int n){ 
    if(n <=1){ 
        return 1; 
        
    } 
    else{ 
        return n * fatorial(n - 1); 
        
    } 
    
} 
#include <stdio.h> 
int main() { 
    int n; 
    printf("Digite um valor para vermos o fatorial\n"); 
    scanf("%d", &n); 
    int resultado = fatorial(n); 
    printf("Fatorial: %d\n", resultado); 
    return 0; 
    
}