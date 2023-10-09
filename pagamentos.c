#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
//setlocale(LCC_ALL,"portuguese");
float valorProduto;
float opcao;
float desconto;
float precoFinal;
float parcelas;
float valorPorParcela;
printf("Digite o valor do produto: ");
scanf("%.2f",&valorProduto);
printf("Escolha uma das opções abaixo: \n");
printf("1 - para pagamento a vista. \n");
printf("2 - para pagamento a prazo. \n");
printf("Digite a opção desejada: \n");
scanf("%.2f",&opcao);
switch(opcao)
{
    case 1 :
    desconto = valorProduto * 0.1;
    precoFinal = valorProduto - desconto;

    printf("Valor do produto: R$ %.2f \n", valorProduto);
    printf("Forma de pagamento: a vista \n");
    printf("Valor do desconto: R$ %.2f \n", desconto);
    printf("Total a pagar: R$ %.2f \n", precoFinal);
    break;
    case 2 :
    do {
    printf("Digite a quantidade de parcelas");
    scanf("%.2f",&parcelas);
    if(parcelas > 6);
        printf("Parcelamento com limite em 6x");
        printf("Tente novamente...\n\n");
        }
    } while (parcelas > 6);
    valorPorParcela = valorProduto / parcelas;
    precoFinal = valorProduto;
   printf("Valor do produto: R$ %.2f \n", valorProduto);
   printf("Forma de pagamento: a prazo \n");
   printf("Quantidade de parcelas: R$ %.2f \n", parcelas);
    printf("Valor das parcelas: R$ %.2f \n",valorPorParcela);
    printf("Total a prazo: R$ %.2f \n", precoFinal);
    break;
    default:
    printf("Opção inválida!");  
getchar(); //pausa no windows e linux
    return 0;
}