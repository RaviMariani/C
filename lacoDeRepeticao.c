#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
setlocale(LC_ALL, "portuguese");
int i;
int j;
printf("Aqui esta a tabuada do numero 10, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 10 = %d \n", i, i*10);
} 
printf("Aqui esta a tabuada do numero 9, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 9 = %d \n", i, i*9);
} 
printf("Aqui esta a tabuada do numero 8, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 8 = %d \n", i, i*8);
} 

printf("Aqui esta a tabuada do numero 7, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 7 = %d \n", i, i*7);
} 

printf("Aqui esta a tabuada do numero 6, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 6 = %d \n", i, i*6);
} 

printf("Aqui esta a tabuada do numero 5, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 5 = %d \n", i, i*5);
} 

printf("Aqui esta a tabuada do numero 4, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 4 = %d \n", i, i*4);
} 

printf("Aqui esta a tabuada do numero 3, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 3 = %d \n", i, i*3);
} 

printf("Aqui esta a tabuada do numero 2, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 2 = %d \n", i, i*2);
} 

printf("Aqui esta a tabuada do numero 1, multiplicado até o 10");
for (i = 1; i <= 10; i++) {
    printf("%d x 1 = %d \n", i, i*1);
} 

/*for(j = 3; j <= 7 ; j +=2) {
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", j, i, i*j);
    
    }
}*/
printf("\n");
    getchar();
    return 0;

}
