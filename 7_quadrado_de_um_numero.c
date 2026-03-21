#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    int numero;
    int quadrado;
    setlocale(LC_ALL, "");
    
       printf("Digite o numero:");
       scanf("%d", &numero);
       
       quadrado = numero * numero;
       
       printf("%d elevado ao quadrado é %d", numero, quadrado);
       
       return 0;
}
