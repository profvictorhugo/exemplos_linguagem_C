#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 80

/*
O programa demonstra como utilizar tanto a função fgets para operar
adequadamente com strings, e as funções 'strlen' e 'strstr'
strlen retorna a quantidade de caracteres da string
e strstr busca uma string em outra
*/

int main() {
    char s1[MAX_LEN];
    char s2[MAX_LEN];

    printf("Entre com a primeira string: ");
    fgets(s1, MAX_LEN, stdin);

    printf("Entre com a segunda string: ");
    fgets(s2, MAX_LEN, stdin);

    printf("Comprimentos s1 = %ld, s2 = %ld\n", strlen(s1), strlen(s2));

    if (strstr(s1, "tor")) {
        printf("Parte encontrada em s1\n");
    }

    return 0;
}
