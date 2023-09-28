#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");

int numero;
printf("Digite um numero: ");
scanf("%i",&numero);
if (numero == 10)

//{
//printf("E igual a 10!\n");
//}
//else {
   // if(numero > 10){
     //   printf("E maior que 10!\n");
    //}else{
      //  if(numero > 5) {
         //   print("E maior que 5\n");
        //}else{
       //     printf("Nao e maior que 5!\n");
     //   }
   //     printf("Nao e maior que 10!\n");
 //   }
//}
//    return 0;
    

    if (numero == 10){
        printf("é igual a 10!");
       } else if (numero > 10) {
        printf("É maior que 10!");
        }else if (numero > 5) {
            printf("É maior que 5!\n");
        } else {
            printf("Não é maior que 5!");
        }else if (numero > 3) {
            printf("É maior que 3!");
        }else {
            printf("Não é maior que 3!");
        }
        return 0;
}