 
int oMaior(int n, int n2){ 
    if(n > n2){ 
        return n; 
        
    } 
    else{ 
        return n2; 
        
    } 
    
} 
#include <stdio.h> 
int main() { 
    int n, 
    n2; 
    printf("Digite dois valor para vermos o maior\n"); 
    scanf("%d%d", &n, &n2); 
    int resultado = oMaior(n, n2); 
    printf("Maior número: %d\n", resultado); 
    return 0; 
    
}