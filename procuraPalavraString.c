#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[100] = {"Essa é uma frase utilizada para testar a busca por palavras. Apenas uma frase."};
    char palavra[10]= {"frase"};

    //busca a primeira ocorrência de 'palavra' em 'frase'
    char *sub = strstr(frase, palavra);

    //aqui temos uma nova string, começando na posição da primeira ocorrência da palavra buscada
    printf("%s\n\n", sub);
    //se buscarmos por outras ocorrências, abora devemos procurar em 'sub', e não em 'frase'.
    sub = strstr(sub, palavra);
    printf("%s\n\n", sub);
    //observe que a saída continua a mesma!?
    //isso ocorre pois 'palavra' foi encontrada. Para evitar isso, devemos remover a primeira
    //ocorrência
    sub += strlen(palavra);
    //agora refazemos a busca
    sub = strstr(sub, palavra);
    printf("%s\n\n", sub);
    



    return EXIT_SUCCESS;
}