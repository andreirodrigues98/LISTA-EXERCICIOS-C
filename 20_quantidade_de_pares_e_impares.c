
#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, i;
    int par = 0;
    int impar = 0;
    setlocale(LC_ALL, "");
    
    for(i=0; i<10; i++){
        printf("Digite o numero %d:", i+1);
        scanf("%d", &numero);
        
        if(numero % 2 ==0){
        par++;
        }else{
        impar++;
        }
    }
    
    printf("A quantidade de números pares: %d\n", par);
    printf("A quantidade de números impares: %d", impar);

    return 0;
}
