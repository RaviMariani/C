#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[250];
    int idade;
    float nota1;
    float nota2;
    float nota3;
    float media;
    printf("Informe seu nome:\n");
    scanf("%c", &nome);
    fflush(stdin);
    printf("Informe sua idade:\n");
    scanf("%i", &idade);
    fflush(stdin);
    printf("Informe sua primeira nota:\n",&nota1);
    scanf("%f", &nota1);
    printf("Informe sua segunda nota:\n",&nota2);
    scanf("%f", &nota2);
    printf("Informe sua terceira nota:\n",&nota3);
    scanf("%f", &nota3);
        printf("A sua media foi: ",&media);
    media = (nota1+nota2+nota3)/2;
if (media >= 7)
{
    printf("Aprovado!\n");
}
else
{
    printf("Reprovado! \n");
}
printf("Media: %.2f", media);
return 0;
} 
