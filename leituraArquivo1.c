#include <stdio.h>
#include <stdlib.h>

int main() {
    // Cria os ponteiros de arquivos e abre-os em seguida
    FILE *nomes = fopen("names.txt", "r");
    FILE *saudar = fopen("greetings.txt", "w");

    // Conferir se está tudo certo.
    if (!nomes || !saudar) {
        fprintf(stderr, "Erro ao abrir arquivo!\n");
        return EXIT_FAILURE;
    }
    char nome[20];
    // Siga lendo até não haver mais nada para ler.
    while (fscanf(nomes, "%s\n", nome) > 0) {
        fprintf(saudar, "Olá, %s!\n", nome);
        printf("Nome lido: %s\n", nome);
    }

    if (feof(nomes)) {
        printf("Saudações concluídas!\n");
    }

    return EXIT_SUCCESS;
}