#include <stdio.h>
#include <stdlib.h>


int main(){
        int diaDaSemana;

    printf("Digite um dia da semana: \n");
    scanf("%i", &diaDaSemana);

    switch (diaDaSemana)
    {
    case 1:
        printf("sabado(inválido). \n");
        break;
    case 2:
        printf("segunda(diaUtil). \n");
         break;
    case 3:
        printf("terça(diaUtil). \n");
         break;
    case 4:
        printf("quarta(diaUtil). \n");
         break;
    case 5:
        printf("quinta(diaUtil). \n");
         break;
    case 6:
        printf("sexta(diaUtil). \n");
         break;
    case 7:
        printf("sabado(inválido). \n");
         break;
         
         default:
         printf("Opção invalida! \n");
         break;
         } 

         return 0;
         } 
         