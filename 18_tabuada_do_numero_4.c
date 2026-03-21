
#include <stdio.h>

void main()
{
    int numero, i, resultado;
    
    printf("Digite um número para gerar sua tabuada: ");
    scanf("%d", &numero);
    printf("A tabuda do numero %d:\n", numero);
    
    for(i=0; i<=10; i++){
        resultado = numero * i;
        printf("%d * %d = %d\n", numero, i, resultado);
    }
}
