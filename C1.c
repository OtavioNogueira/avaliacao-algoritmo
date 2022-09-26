#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe o número desejado: ");
    scanf("%d",&num);
    
    for(int i=1; i < 11; i++){
        
        printf("%d x %d = %d \n", num, i, (num*i));
    }

    while(num > 1){
        num--;
        
        for(int i=1; i < 11; i++){
        
        printf("%d x %d = %d \n", num, i, (num*i));
        }
    }
    return 0;
}