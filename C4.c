#include <stdio.h>

int main()
{
    int num;
    
    printf("Insira um número para a contagem regressiva: ");
    scanf("%d", &num);
    
    for(int i=num; i > -1 ; i--){
        num - i;
        printf("| %d | ", i);
    }
    
    return 0;
}