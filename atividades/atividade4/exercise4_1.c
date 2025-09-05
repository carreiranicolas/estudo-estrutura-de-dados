
int quadrado(int n){ 
    int resultado = n * n; 
    return resultado; 
    
} 
#include <stdio.h> 
int main() { 
    int n; 
    printf("Digite um valor para vermos o quadrado\n"); 
    scanf("%d", &n); 
    int resultado = quadrado(n); 
    printf("Meu resultado: %d\n", resultado); 
    return 0; 
    
}