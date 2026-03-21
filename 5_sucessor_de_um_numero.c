#include <stdio.h>
#include <locale.h>

int main()
{
    int numero;
    int sucessor;
    setlocale(LC_ALL, "");
    
       printf("Digite o numero:");
       scanf("%d", &numero);
       
       sucessor = numero + 1;
       
       printf("O sucessor de %d é %d", numero, sucessor);
       
       return 0;
}
