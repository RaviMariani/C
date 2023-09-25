#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

int idade = 0;
float peso = 0;
char sexo[250]; 
char nome[250];
   idade = 0;
    //
    printf("Informe sua idade: ");
    scanf("%i", &idade);
        
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); //limpa o cache do input 
    
    printf("Informe seu sexo: ");
    scanf("%s",&sexo);

    fflush(stdin);

    printf("Informe seu nome: ");
    //scanf("%s",sexo) <- o scanf não registra nada após apertar _ (espaço )
    //fgets(nome, 250, stdin); //<- tem problema referente ao enter no final
    //nome[strcspn(nome,"\n")] = 0
    
    gets(nome);

    //limpatela(limpa o terminal)

    system("cls || clear");

    //Exibindo dados do usuário
    
    
    
    printf("----------/Dados do usuario/----------\n");
    printf("Idade: %i \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %s \n", sexo);
    printf("Nome: %s \n", nome);
    printf("----------/--------------------/----------");
    return 0;
}