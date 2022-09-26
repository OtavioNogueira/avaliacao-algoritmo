#include <stdio.h>

int main()
{
    int num, x=1, y=1, z;
    
    printf("Insira o número desejado, maior que 3 por favor: ");
    scanf("%d", &num);
    
    if( num <= 3){
        printf("Valor inválido!");
        
    } else {
        printf("| 1 | 1 | ");
    
        for(int i=3; i <= num; i = i + 1){
        z = x + y;
        x = y;
        y = z;
        
        printf("| %d | ", z);
        }
    }
    

    return 0;
}