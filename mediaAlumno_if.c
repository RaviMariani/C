#include <stdio.h>
#include <stdlib.h>

int main (){

float nota1 = 0;
float nota2 = 0; 
float media = 0; 

printf("Informe a sua primeira nota:");
scanf("%f",&nota1);

//system("cls || clear");

printf("Informe a sua segunda nota:");
scanf("%f",&nota2);

//system("cls || clear");

media = (nota1+nota2)/2;

if (media >= 7)
{
    printf("Aprovado!\n");
}
else
{
    printf("Reprovado! \n");
}
printf("Media: %.2f", media);

return 0;
} 