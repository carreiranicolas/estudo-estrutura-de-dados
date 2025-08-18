
#include <stdio.h>

int main()
{


    int factorial(int n){
        if (n <= 1){
            return (n);
        }
        return (n * factorial(n-1));
    }
    int n, resultado, resultado_funcao;


    printf("Digite um número: ");
    scanf("%d", &n);

    resultado_funcao = factorial(n);

    int valor = n;
    for(int i = n - 1; i > 0; i--){
        valor *= i;
    }

    resultado = valor;
    printf("Função Fatorial: %d\n", resultado_funcao );
    printf("Fatorial: %d\n", resultado);

    return 0;
}
