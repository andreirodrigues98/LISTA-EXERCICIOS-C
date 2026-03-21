#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, i;
    setlocale(LC_ALL, "");
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(i=1; i<=5; i++){
        printf(" %d", numero + i);
    }
    
    return 0;
}