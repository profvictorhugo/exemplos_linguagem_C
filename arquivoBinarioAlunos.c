#include <stdio.h>
#include <stdlib.h>

typedef struct {
   char nome[100];
   int matricula;
} Aluno;

int main() {
    Aluno alunos[2] = {
        {"Maria Silva", 12345},
        {"João Pereira", 67890}
    };
    
    // Abrir arquivo para escrita em formato binário
    FILE *arquivo = fopen("arquivo_alunos.bin", "wb");
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir arquivo para escrita!\n");
        return EXIT_FAILURE;
    }
    
    // Escrever os registros no arquivo
    fwrite(alunos, sizeof(Aluno), 2, arquivo);
    fclose(arquivo);
    
    // Abrir o mesmo arquivo para leitura em formato binário
    arquivo = fopen("arquivo_alunos.bin", "rb");
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir arquivo para leitura!\n");
        return EXIT_FAILURE;
    }
    
    // Ler os registros do arquivo
    Aluno alunosLidos[2];
    fread(alunosLidos, sizeof(Aluno), 2, arquivo);
    
    // Imprimir os registros lidos para verificar
    for (int i = 0; i < 2; i++) {
        printf("Nome: %s, Matrícula: %d\n", alunosLidos[i].nome, alunosLidos[i].matricula);
    }
    
    fclose(arquivo);
    
    return EXIT_SUCCESS;
}
