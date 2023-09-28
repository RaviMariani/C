#include <stdio.h>
#include <stdlib.h>

int main (){

int num = 0;

printf("Informe um numero:");
scanf("%i",&num);

if (num >= 10)
{
    printf("E maior ou igual a 10!\n");
    printf("O numero digitado foi: %i\n", num);
}
else
{
    printf("E menor que 10! \n");
    printf("O numero digitado foi: %i\n", num);
}
return 0;
} 