#include <stdio.h>
#include <locale.h>

int main()
{
    int numeros[5], i;
    int positivos = 0;
    int negativos = 0; 
    int zeros = 0;
    setlocale(LC_ALL, "");
    
    for(i=0; i<5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] > 0) {
            positivos++;
        } else if(numeros[i] < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }
    
    printf("Positivos: %d \n", positivos);
    printf("Negativos: %d \n", negativos);
    printf("Zeros: %d", zeros);
    
    
    return 0;
}
