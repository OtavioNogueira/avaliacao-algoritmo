#include <stdio.h>

int main()
{
   int dia, mes, ano, x, y, res;
   
   printf("Insira seu dia de nascimento: ");
   scanf("%d", &dia);
   
   printf("Insira seu mês de nascimento: ");
   scanf("%d", &mes);
   
   printf("Insira seu ano de nascimento: ");
   scanf("%d", &ano);
   
   printf("\n-----------------------------------\n");
    
    x = ((dia*100) + mes) + ano;
    y = (x/100) + (x%100);
    res = y%5;
    
    switch (res){
        case 0: 
            printf("\nTímido");
            break;
        case 1: 
            printf("\nSonhador");
            break;
        case 2: 
            printf("\nPaquerador");
            break;
        case 3: 
            printf("\nAtratente");
            break;
        case 4: 
            printf("\nIrresistível");
            break;
    }
    
    
    return 0;
}