
#include <stdio.h> 
#include <math.h> 
int main() { 
    int n; 
    scanf("%d", &n); 
    int soma_valores = 0; 
    float arr[n]; 
    for(int i = 0; i < n; i++){ 
        float valor; 
        scanf("%f", &valor); 
        arr[i] = valor; 
        soma_valores += valor; 
        
    } 
    float media = (float)soma_valores/n; 
    printf("Média aritmética: %.2f\n", media); 
    float variancia = 0; 
    for(int k = 0; k < n; k++){ 
        arr[k] = arr[k] - media; 
        arr[k] = arr[k] * arr[k]; 
        variancia += arr[k]; 
        
    } 
    variancia = variancia / (n); 
    float desvio = sqrt(variancia); 
    printf("Desvio padrão: %.3f\n", desvio); 
    return 0; 
    
}