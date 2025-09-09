#include <stdio.h> 
#include <string.h> 
struct Aluno{
    char nome[80]; // Maneira correta de declarar uma string (array de caracteres) 
    int matricula; 
    float media; 
    
}; 
int main() { 
    struct Aluno arr[3]; //Maneira correta de declarar um array de objetos struct 
    for(int i = 0; i < 3; i++){ 
        struct Aluno a; 
        char nome[80]; 
        printf("Escreva o nome do aluno\n"); 
        scanf("%s", nome); 
        int matricula; 
        printf("Escreva a matricula do aluno\n"); 
        scanf("%d", &matricula); 
        float media; 
        printf("Escreva a média do aluno\n"); 
        scanf("%f", &media); 
        strncpy(a.nome, nome, 80); 
        //Acima, no strncpy temos a maneira correta de colocar uma string 
        //em uma variavel 
        a.matricula = matricula; 
        a.media = media; 
        arr[i] = a; 
        
    } 
    for(int k = 0; k < 3; k++){ 
        if(arr[k].media >= 7){ 
            printf("Nome do aluno: %s\n", arr[k].nome); 
            printf("Matricula do aluno %d\n", arr[k].matricula); 
            
        } 
        
    } 
    return 0; 
    
}