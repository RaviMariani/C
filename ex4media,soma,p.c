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

 printf("Informe um n�mero:\n",&num1);
    scanf("%i", &num1);

 printf("Informe o segundo n�mero:\n",&num1);
    scanf("%i", &num1);
soma = (num1 + num2);
produto = (num1 * num2);
media (num1 + num2)/2;
if (num1 > num2)
{
    printf(" O primeiro n�mero � maior, a soma desses n�meros �: %i , o produto desses n�meros � %i  e a media desses n�meros �: %f" ,soma,produto,media);
}
else
{
    printf(" O segundo n�mero � maior, a soma desses n�meros �: %i , o produto desses n�meros � %i  e a media desses n�meros �: %f" ,soma,produto,media);
}
return 0;
}
