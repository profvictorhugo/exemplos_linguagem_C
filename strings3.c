#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 80
#define MAX_ATT 10

/*
O programa demonstra como utilizar a função 'strcmp'
*/

int main() {
    char s1[MAX_LEN];
    char s2[MAX_LEN];
    char msg[MAX_LEN];
    int isnt_valid = 1;
    int count = 0;

    do{
        printf("Tentativa número %d\n\n", count + 1);

        printf("Entre com a primeira string: ");
        fgets(s1, MAX_LEN, stdin);

        printf("Entre com a segunda string: ");
        fgets(s2, MAX_LEN, stdin);

        if (strcmp(s1, s2) == 0){
            strcpy(msg, "Objetivo alcançado: s1 e s2 são iguais!!\n\n");
            isnt_valid = 0;
        }else{
            printf("As duas strings são diferentes!\n");
            if (strcmp(s1,s2) < 0)
                printf("s1 vem antes de s2 no dicionário.\n");
            else 
                printf("s2 vem antes de s1 no dicionário.\n");
            count++;
        }

    }while(isnt_valid && count < MAX_ATT);

    printf("%s\n", msg);
    
    return 0;
}
