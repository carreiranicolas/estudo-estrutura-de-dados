#include <stdio.h>

int main()
{
    int n;
    int total = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            total += i;
        }
    }

    printf("Total: %d\n", total);

    return 0;
}
