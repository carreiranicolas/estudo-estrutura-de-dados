#include <stdio.h> 
#include <string.h> 
struct Funcionario{ 
    char nome[80]; 
    char cargo[80]; 
    float salarioMensal; 
    
}; 
int salarioAnual(int x){ 
    return x * 12; 
    
} 
int main() { 
    struct Funcionario arr[5]; 
    for(int i = 0; i < 5; i++){ 
        struct Funcionario f; 
        printf("Digite o nome do funcionário\n"); 
        char nome[80]; 
        scanf("%s", nome); 
        printf("Digite o cargo do funcionário\n"); 
        char cargo[80]; 
        scanf("%s", cargo); 
        printf("Digite o salário mensal do funcionário\n"); 
        float salarioMensal; 
        scanf("%f", &salarioMensal); 
        strncpy(f.nome, nome, 80); 
        strncpy(f.cargo, cargo, 80); 
        f.salarioMensal = salarioMensal; 
        arr[i] = f; 
        
    } 
    int atendecondicao = -1; 
    for(int k = 0; k < 5; k++){ 
        if(salarioAnual(arr[k].salarioMensal) > 5000){ 
            printf("Nome do funcionário: %s\n", arr[k].nome); 
            printf("Nome do cargo: %s\n", arr[k].cargo); 
            printf("Salário mensal: %.2f\n", arr[k].salarioMensal); 
            atendecondicao += 1; 
            
        } 
        
    } 
    if(atendecondicao == -1){ 
        printf("Não há funcionarios com salario anual maior que 5000\n"); 
        
    } 
    return 0; 
    
}