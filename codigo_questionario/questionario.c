#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAX_CHAR 100
#define NUM_PERGUNTAS 8
#define TAM 900

typedef struct
{
    char pergunta[TAM];
    char opcoes[4][MAX_CHAR];
    char resposta;
} Pergunta;

void apresentarPergunta(Pergunta pergunta, FILE *arquivo, int numeroQuestao)
{
    char opcao;
    printf("\nQuestão %d:\n%s\n", numeroQuestao, pergunta.pergunta);

    for (int i = 0; i < 4; i++)
    {
        printf("%c) %s\n", 'A' + i, pergunta.opcoes[i]);
    }

    // Obter resposta do usuário
    printf("Sua resposta (A, B, C ou D): ");
    scanf(" %c", &opcao);

    // Armazenar no arquivo CSV
    fprintf(arquivo, "Questão %d; Resposta:; %c;\n", numeroQuestao, opcao);
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *arquivo;
    Pergunta perguntas[NUM_PERGUNTAS];

    arquivo = fopen("respostas.csv", "a");
    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo de saída");
        return 1;
    }

    FILE *perguntasFile = fopen("perguntas.txt", "r");
    if (perguntasFile == NULL)
    {
        perror("Erro ao abrir o arquivo de perguntas");
        fclose(arquivo);
        return 1;
    }

    // Iterar sobre as perguntas
    for (int i = 0; i < NUM_PERGUNTAS; i++)
    {
        // Ler texto da pergunta
        fscanf(perguntasFile, " %[^\n]%*c", perguntas[i].pergunta);

        // Ler opções de resposta
        for (int j = 0; j < 4; j++)
        {
            fscanf(perguntasFile, " %[^\n]%*c", perguntas[i].opcoes[j]);
        }

        // Ler resposta correta
        fscanf(perguntasFile, " %c%*c", &perguntas[i].resposta);
    }

    for (int i = 0; i < NUM_PERGUNTAS; i++)
    {
        printf("Bem-vindo ao Museu Multitemático!!! \n");
        printf("   ______________________________   \n");
        printf("  /                             /\\ \n");
        printf(" /_____________________________/  \\\n");
        printf("|                              |   |\n");
        printf("|  [ ]                    [ ]  |   |\n");
        printf("|              [ ]             |   |\n");
        printf("|  [ ]                    [ ]  |   |\n");
        printf("|              [ ]             |   |\n");
        printf("|  [ ]                    [ ]  |   |\n");
        printf("|______________________________|   |\n");
        printf("|          MUSEU               |   |\n");
        printf("|       MULTITEMATICO          |   |\n");
        printf("|______________________________|   |\n");
        printf("|          |    | |            |   |\n");
        printf("|          |    | |            |   |\n");
        printf("|__________|____|_|____________|___|\n\n");
        apresentarPergunta(perguntas[i], arquivo, i + 1);
        system("pause");
        system("cls");
    }

    // Adicionar uma quebra de linha no final de cada conjunto de respostas
    fprintf(arquivo, "\n");

    // Fechar arquivos
    fclose(arquivo);
    fclose(perguntasFile);

    printf("Respostas salvas com sucesso no arquivo respostas.csv\n");

    return 0;
}
