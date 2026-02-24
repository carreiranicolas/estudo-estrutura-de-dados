/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{


    char s[100];
    char outra[100];
    printf("Digite uma frase:\n");
    scanf("%[^\n]", &s);

    int valor = 100;
    for(int i = 0; i < valor; i++ ){
        outra[i] = s[valor];
        valor = valor - 1;
    }



    printf("%s", outra);

    return 0;
}
