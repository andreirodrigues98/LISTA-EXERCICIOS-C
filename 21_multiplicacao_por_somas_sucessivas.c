#include <stdio.h>
#include <locale.h>

int main()
{
   
   setlocale(LC_ALL, "");
   int num[2], i;
   int res=0;
   
   for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &num[i]);
    }
    
    for(i=0; i < num[1]; i++){
        res += num[0];
        
        printf("%d", num[0]);
        
        if(i < num[1] - 1){
            printf(" + ");
        }
    }
    
    printf(" = %d", res);

    return 0;
}