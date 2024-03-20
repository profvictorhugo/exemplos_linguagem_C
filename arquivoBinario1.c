#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 123456789;
    // Cria os ponteiros de arquivos e abre-os em seguida
    FILE *arquivo = fopen("teste_bin1.txt", "wb+");
    // Conferir se está tudo certo.
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir arquivo!\n");
        return EXIT_FAILURE;
    }
    fwrite(&numero, sizeof(numero), 1, arquivo);
     // Reposiciona o indicador de posição do arquivo para o início do arquivo
    fseek(arquivo, 0, SEEK_SET);
    int n2;
    fread(&n2, sizeof(numero), 1, arquivo);
    printf("Valor lido do arquivo: %d\n", n2);
    fclose(arquivo);
    return EXIT_SUCCESS;
}