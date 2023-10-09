#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){

setlocale(LC_ALL, "portuguese");


char sexo;
float pesoIdeal1;
float pesoIdeal2;

printf("Informe seu sexo: \n");
scanf("%c", &sexo);
switch (sexo){
case 'f':
printf("Digite a sua altura: \n");
scanf("%.2f", &altura);
pesoIdeal1 = (72.7 - altura) - 58;
printf("\n %.2f",pesoIdeal1);
break;
case 'f':
printf("Digite a sua altura: \n");
scanf("%.2f", &altura);
pesoideal2 = (62.1 * altura) - 44.7;
printf("\n %.2f", pesoIdeal2);
default:
printf("Opção invalida");
break;
getchar();
return 0;
}
}