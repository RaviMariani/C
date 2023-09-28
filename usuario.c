#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
setlocale(LC_ALL, "portuguese");
char loginSalvo[200] = "Marta";
char senhaSalva[200] = "senai123";
char login[200];
char senha[200];

printf("Difite seu login:");
gets(login);

printf("Digite sua senha: ");
gets(senha);

if(strcmp(login, loginSalvo) && strcmp(senha,senhaSalva) {
printf("Bem-Vindo!");
}else{
    printf("Acesso negado!");
}


return 0;
}