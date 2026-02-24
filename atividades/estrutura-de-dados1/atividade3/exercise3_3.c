
#include <stdio.h>
#include <string.h>

struct Contato{
    char nome[80];
    char telefone[10];
    
};

int main()
{
    struct Contato arr[2];
    for(int i = 0; i < 2; i++){
        struct Contato c;
        printf("Digite o nome do contato\n");
        char nome[80];
        scanf("%s", nome);
        printf("Digite o telefone do contato\n");
        char telefone[10];
        scanf("%s", telefone);
        
        strncpy(c.nome, nome, 80);
        strncpy(c.telefone, telefone, 10);
      
        
        arr[i] = c;
    }
    
    char nome_pesquisar[80];
    printf("Digite o nome que deseja pesquisar\n");
    scanf("%s\n", nome_pesquisar);
    int encontrado = -1;
    char telefone_encontrado[10];
    for(int k = 0; k < 2; k++){
        if(arr[k].nome == nome_pesquisar){
            encontrado = 1;
            strncpy(telefone_encontrado, arr[k].telefone, 10);
        }
    }
    
    if(encontrado == -1){
        printf("Telefone não encontrado\n");
    }
    else{
        printf("Telefone encontrado: %s", telefone_encontrado);
    }
    
    return 0;
}
 	