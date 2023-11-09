#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define Psanto 10.0
#define Pjogos 15.0
#define Parte 20.0
#define Pbit 30.0
#define SENHA_CORRETA "banana"

int vendas();
int main();

int main()
{
    char senha[20];
    printf("Digite a senha:\n");
    scanf("%s", senha);

    if (strcmp(senha, SENHA_CORRETA) == 0)
    {
        vendas();
    }
    else
    {
        printf("Acesso negado\n");
    }

    return 4;
}

int vendas()
{
    setlocale(LC_ALL, "portuguese");
    int Esanto = 0, Ejogos = 0, Earte = 0, Ebit = 0;
    float total_arrecadado = 0.0;
    int ultima_venda_opcao = 0; // Armazena a opção da última venda
    int idade;
    char meia;

    printf("Bem-vindo ao Museu Multitemático!!!\n");
    printf("   ______________________________  \n");
    printf("  /                             /\\ \n");
    printf(" /_____________________________/  \\ \n");
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
    system("pause");
    system("cls");

    while (1)
    {
        int opcao;
        int opcao_anterior = 0;
        printf("\nEscolha a opção:\n\n");
        printf("   1. Santos Dumont (R$ %.2f)\n\n", Psanto);
        printf("   2. Jogos Olímpicos de Paris 2024 (R$ %.2f)\n\n", Pjogos);
        printf("   3. 100 anos da Semana de Arte Moderna (R$ %.2f)\n\n", Parte);
        printf("   4. História do real ao bitcoin (R$ %.2f)\n\n", Pbit);
        printf("9. Encerrar venda\n");
        printf("10. Cancelar venda\n");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            // Verificação de direito à meia-entrada
            printf("\nPossui direito à meia-entrada? Digite 's' se sim, ou qualquer outro caractere se não:");
            scanf(" %c", &meia); // Utilize %c para ler um caractere

            // Coleta da idade do cliente
            printf("\nDigite sua idade:");
            scanf("%d", &idade);

            if (idade <= 10)
            {
                Esanto++;
                opcao_anterior = 1;
                printf("\nIsento\n"); // Corrigindo o caractere de escape
            }
            else if (meia == 's' || meia == 'S') // Use == para comparação, não =
            {
                // Entrada meia
                Esanto++;
                total_arrecadado += Psanto / 2.0; // Meia entrada
                opcao_anterior = 1;
                printf("\nCompra efetuada com meia entrada\n");
            }
            else
            {
                Esanto++;
                total_arrecadado += Psanto;
                opcao_anterior = 1;
                printf("\nCompra efetuada\n");
            }

            ultima_venda_opcao = 1; // Armazena a opção da última venda
            system("pause");
            system("cls");

        }
        else if (opcao == 2)
        {
            // Verificação de direito à meia-entrada
            printf("\nPossui direito à meia-entrada? Digite 's' se sim, ou qualquer outro caractere se não:");
            scanf(" %c", &meia); // Utilize %c para ler um caractere

            // Coleta da idade do cliente
            printf("\nDigite sua idade:");
            scanf("%d", &idade);

            if (idade <= 10)
            {
                Ejogos++;
                opcao_anterior = 1;
                printf("\nIsento\n"); // Corrigindo o caractere de escape
            }
            else if (meia == 's' || meia == 'S') // Use == para comparação, não =
            {
                // Entrada meia
                Ejogos++;
                total_arrecadado += Pjogos / 2.0; // Meia entrada
                opcao_anterior = 1;
                printf("\nCompra efetuada com meia entrada\n");
            }
            else
            {
                Ejogos++;
                total_arrecadado += Pjogos;
                opcao_anterior = 1;
                printf("\nCompra efetuada\n");
            }

            ultima_venda_opcao = 2; // Armazena a opção da última venda
            system("pause");
            system("cls");
        }
        else if (opcao == 3)
        {

            // Verificação de direito à meia-entrada
            printf("\nPossui direito à meia-entrada? Digite 's' se sim, ou qualquer outro caractere se não:");
            scanf(" %c", &meia); // Utilize %c para ler um caractere

            // Coleta da idade do cliente
            printf("\nDigite sua idade:");
            scanf("%d", &idade);

            if (idade <= 10)
            {
                Earte++;
                opcao_anterior = 1;
                printf("\nIsento\n"); // Corrigindo o caractere de escape
            }
            else if (meia == 's' || meia == 'S') // Use == para comparação, não =
            {
                // Entrada meia
                Earte++;
                total_arrecadado += Parte / 2.0; // Meia entrada
                opcao_anterior = 1;
                printf("\nCompra efetuada com meia entrada\n");
            }
            else
            {
                Earte++;
                total_arrecadado += Parte;
                opcao_anterior = 1;
                printf("\nCompra efetuada\n");
            }

            ultima_venda_opcao = 3; // Armazena a opção da última venda
            system("pause");
            system("cls");
        }
        else if (opcao == 4)
        {
            // Verificação de direito à meia-entrada
            printf("\nPossui direito à meia-entrada? Digite 's' se sim, ou qualquer outro caractere se não:");
            scanf(" %c", &meia); // Utilize %c para ler um caractere

            // Coleta da idade do cliente
            printf("\nDigite sua idade:");
            scanf("%d", &idade);

            if (idade <= 10)
            {
                Ebit++;
                opcao_anterior = 1;
                printf("\nIsento\n"); // Corrigindo o caractere de escape
            }
            else if (meia == 's' || meia == 'S') // Use == para comparação, não =
            {
                // Entrada meia
                Ebit++;
                total_arrecadado += Pbit / 2.0; // Meia entrada
                opcao_anterior = 1;
                printf("\nCompra efetuada com meia entrada\n");
            }
            else
            {
                Ebit++;
                total_arrecadado += Psanto;
                opcao_anterior = 1;
                printf("\nCompra efetuada\n");
            }

            ultima_venda_opcao = 4; // Armazena a opção da última venda
            system("pause");
            system("cls");
        }
        else if (opcao == 9)
        {
            break; // Encerra a venda
        }
        else if (opcao == 10)
        {

// Cancelar a última venda

            if (ultima_venda_opcao == 1)
            {
                if (idade < 10)
                {
                    // Se a entrada era isenta, não subtrai do total_arrecadado
                    Esanto--;
                    printf("\nVenda cancelada (entrada isenta)\n");
                }
                else if (opcao_anterior == 1)
                {
                    // Se a entrada era meia, subtrai do total_arrecadado
                    Esanto--;
                    total_arrecadado -= (Psanto / 2);
                    printf("\nVenda cancelada (meia entrada)\n");
                }
                else
                {
                    Esanto--;
                    total_arrecadado -= Psanto;
                    printf("\nVenda cancelada\n");
                }
                system("pause");
                system("cls");
            }
            else if (ultima_venda_opcao == 2)
            {
                if (idade < 10)
                {
                    // Se a entrada era isenta, não subtrai do total_arrecadado
                    Ejogos--;
                    printf("\nVenda cancelada (entrada isenta)\n");
                }
                else if (opcao_anterior == 1)
                {
                    // Se a entrada era meia, subtrai do total_arrecadado
                    Ejogos--;
                    total_arrecadado -= (Pjogos / 2);
                    printf("\nVenda cancelada (meia entrada)\n");
                }
                else
                {
                    Ejogos--;
                    total_arrecadado -= Pjogos;
                    printf("\nVenda cancelada\n");
                }
                system("pause");
                system("cls");
            }
            else if (ultima_venda_opcao == 3)
            {
                if (idade < 10)
                {
                    // Se a entrada era isenta, não subtrai do total_arrecadado
                    Earte--;
                    printf("\nVenda cancelada (entrada isenta)\n");
                }
                else if (opcao_anterior == 1)
                {
                    // Se a entrada era meia, subtrai do total_arrecadado
                    Earte--;
                    total_arrecadado -= (Parte / 2);
                    printf("\nVenda cancelada (meia entrada)\n");
                }
                else
                {
                    Earte--;
                    total_arrecadado -= Parte;
                    printf("\nVenda cancelada\n");
                }
                system("pause");
                system("cls");
            }
            else if (ultima_venda_opcao == 4)
            {
                if (idade < 10)
                {
                    // Se a entrada era isenta, não subtrai do total_arrecadado
                    Ebit--;
                    printf("\nVenda cancelada (entrada isenta)\n");
                }
                else if (opcao_anterior == 1)
                {
                    // Se a entrada era meia, subtrai do total_arrecadado
                    Ebit--;
                    total_arrecadado -= (Pbit / 2);
                    printf("\nVenda cancelada (meia entrada)\n");
                }
                else
                {
                    Ebit--;
                    total_arrecadado -= Pbit;
                    printf("\nVenda cancelada\n");
                }
                system("pause");
                system("cls");
            }
            else
            {
                printf("\nNenhuma venda anterior para cancelar.\n");
                system("pause");
                system("cls");
            }
        }
        else
        {
            printf("\nOpção inválida! Escolha novamente.\n");
            system("pause");
            system("cls");
        }
    }
    printf("\nRelatório de Vendas:\n");
    printf("Entradas para Santos Dumont: %d\n", Esanto);
    printf("Entradas para Jogos Olímpicos Paris 2024: %d\n", Ejogos);
    printf("Entradas para 100 anos da Semana de Arte Moderna: %d\n", Earte);
    printf("Entradas para História do real ao bitcoin: %d\n", Ebit);
    printf("Total Arrecadado Aproximado: R$ %.2f\n", total_arrecadado);
    FILE *csv_file = fopen("relatorio_vendas.csv", "a");
    if (csv_file == NULL)
    {
        printf("Erro ao criar o arquivo CSV.\n");
        return 1;
    }
    fprintf(csv_file, "\nTEMA EXPOSIÇÃO; ENTRADAS; VALOR TOTAL\n");
    fprintf(csv_file, "Santos Dumont; Pessoas: %d; Dinheiro: R$ %.2f\n", Esanto, Esanto * Psanto);
    fprintf(csv_file, "Jogos Olímpicos Paris 2024; Pessoas: %d; Dinheiro: R$ %.2f\n", Ejogos, Ejogos * Pjogos);
    fprintf(csv_file, "100 anos da Semana de Arte Moderna; Pessoas: %d; Dinheiro: R$ %.2f\n", Earte, Earte * Parte);
    fprintf(csv_file, "História do real ao bitcoin; Pessoas: %d; Dinheiro: R$ %.2f\n", Ebit, Ebit * Pbit);
    fprintf(csv_file, "Total Arrecadado Aproximado:; R$ %.2f\n", total_arrecadado);
    fclose(csv_file);
    printf("Dados exportados para o arquivo 'relatorio_vendas.csv'.\n");
    return 0;
}
