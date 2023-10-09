#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
setlocale(LC_ALL, "portuguese");

int i;
int numero;
int soma;
for(i = 1; i <= 5; i++){
    printf("Digite o %d numero: \n", i);
    scanf("%d",&numero);

    //soma = soma + numero;
    soma += numero;
    printf("Soma: %d \n", soma);
}
    return 0;
}