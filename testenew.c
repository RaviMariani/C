#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
setlocale(LC_ALL, "portuguese");
/*Concertendo o caracter em maiúsculo:
variavel  = toupper(variavel)
/*Concertendo o caracter em minusculo:
variavel  = tolower(variavel)*/
printf("Olá mundo");
    return 0;
}