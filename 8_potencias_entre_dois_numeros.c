#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    int numero[2];
    int quadrado1, quadrado2, i;
    setlocale(LC_ALL, "");
    
       for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &numero[i]);
       }
       
       
       quadrado1 = pow(numero[0], numero[1]);
       quadrado2 = pow(numero[1], numero[0]);
       
       printf("O %d elevado ao %d é: %d \n", numero[0], numero[1], quadrado1);
       printf("O %d elevado ao %d é: %d", numero[1], numero[0], quadrado2);
       
}
