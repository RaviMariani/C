#include <stdio.h>
#include <stdlib.h>


int main (){
int prato;
    printf("\n\tCardápio\t\n");
    printf(" \t|\n\tPrato:\t|\t| $Preco:$ |\n");
    printf("1\t|\n\tPicanha\t|\t| R$:25,00 |\n");
    printf("2\t|\n\tLasanha\t|\t| R$: 20,00|\n");
    printf("3\t|\n\tStrogonoff|\t| R$: 18,00|\n");
    printf("4\t|\n\tBife Acebolado|\t| R$:15,00 |\n");
    printf("5\t|\n\tPao com ovo|\t| R$:05,00 |\n");
    printf(" \tFim do Cardápio\t\n");
    printf("Informe o prato que voce deseja: \n");
    scanf("%i", &prato);

    switch (prato)
    {
    case 1:
        printf("Picanha. Preco: 25,00 \n");
        break;
    case 2:
        printf("Lasanha. Preco: 20,00 \n");
         break;
    case 3:
        printf("Strogonoff. Preco: 18.00 \n");
         break;
    case 4:
        printf("Bife acebolado. Preco: 15,00 \n");
         break;
    case 5:
        printf("Pao com ovo. Preco: 5.00 \n");
         break;
         default:
         printf("Opção invalida! \n");
         break;
         } 
    return 0;
}