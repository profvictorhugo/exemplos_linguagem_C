#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 80

/*
O programa demonstra como utilizar as funções 'strcpy' e 'strcat'
*/

int main() {
    char s1[MAX_LEN];
    char s2[MAX_LEN];
    char s3[MAX_LEN * 2] = "String inicial. ";

    printf("Entre com a primeira string: ");
    fgets(s1, MAX_LEN, stdin);
    //copiando o conteúdo de S1 para S2
    strcpy(s2, s1);

    //concatenando as duas strings em s3
    strcat(s3, s1);

    printf("Comprimentos s1 = %ld, s2 = %ld e s3 = %ld\n", strlen(s1), strlen(s2), strlen(s3));
    printf("String s3: %s\n\n", s3);

    return 0;
}
