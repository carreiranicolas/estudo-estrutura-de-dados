
#include <stdio.h> 
#include <math.h> 
int main() { 
    int n; 
    scanf("%d", &n); 
    printf("Passe os valores do vetor: \n");
    int arr[n];
    for(int i = 0; i < n; i++){ 
        int numeros; 
        scanf("%d", &numeros); 
        arr[i] = numeros; 
        
    } 
    printf("Passe o número a ser procurado: \n"); 
    int x; 
    scanf("%d", &x); 
    int posicao = -1; 
    int encontrado = 0; 
    for(int k = 0; k < n; k++){ 
        if(arr[k] == x){ 
            encontrado = 1; 
            posicao = k; 
            
        } 
        
    } 
    if(encontrado == 1){ 
        printf("Valor encontrado. Posição no array: %d\n", posicao); 
        
    } 
    else{ 
        printf("Valor não encontrado"); 
        
    } 
    return 0; 
    
}