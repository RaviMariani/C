#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int num1;
int num2;
int soma;
int produto;
int menorValor;
int maiorValor;
float media;

 printf("Informe um número:\n",&num1);
    scanf("%i", &num1);

 printf("Informe o segundo número:\n",&num1);
    scanf("%i", &num1);
soma = (num1 + num2);
produto = (num1 * num2);
media (num1 + num2)/2;
if (num1 > num2)
{
    printf(" O primeiro número é maior, a soma desses números é: %i , o produto desses números é %i  e a media desses números é: %f" ,soma,produto,media);
}
else
{
    printf(" O segundo número é maior, a soma desses números é: %i , o produto desses números é %i  e a media desses números é: %f" ,soma,produto,media);
}
return 0;
}
