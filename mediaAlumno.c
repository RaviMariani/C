#include <stdio.h>
#include <stdlib.h>

int main (){

float nota1;
float nota2; 
float media = 0; 

printf("Informe a sua primeira nota:");
scanf("%.2f",&nota1);

//system("cls || clear");

printf("Informe a sua segunda nota:");
scanf("%.2f",&nota2);

//system("cls || clear");

media = (nota1+nota2)/2;

printf("Media: %.2f", media);

return 0;
} 
