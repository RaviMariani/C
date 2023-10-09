#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
setlocale(LC_ALL, "portuguese");
int i ;
int numero;
printf("Digite um npúmero para tabuada:" );
scanf("%d", &numero);

for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n", i,numero, i * numero);
}
getchar();
return 0;
}