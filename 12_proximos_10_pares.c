
#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, i, num;
    
        printf("Digite o numero: ");
        scanf("%d", &numero);
        setlocale(LC_ALL, "");
        
        if(numero % 2== 0){
            int num = numero;
            
            for(i=0; i<10; i++){
                num +=2;
                printf("%d \n", num);
            }
        } else{
            printf("Número não é par!");
        }
    
    
    return 0;
}