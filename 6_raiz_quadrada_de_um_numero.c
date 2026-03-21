#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    int numero;
    int raiz;
    setlocale(LC_ALL, "");
    
       printf("Digite o numero:");
       scanf("%d", &numero);
       
       raiz = sqrt(numero);
       
       printf("A raiz quadrada de %d é %d", numero, raiz);
       
       return 0;
}
