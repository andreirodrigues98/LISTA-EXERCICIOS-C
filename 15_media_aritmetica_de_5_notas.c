
#include <stdio.h>
#include <locale.h>

int main()
{
   int numero[5], i;
   double media;
   int soma = 0;
   setlocale(LC_ALL, "");
   
   for(i=0; i<5; i++){
       printf("Digite um numero %d: ", i+1);
       scanf("%d", &numero[i]);
       
       soma +=numero[i];
   }
   
   media = soma / 5.0;
   
   printf("A media das notas é: %.2lf", media);
   
   return 0;
}