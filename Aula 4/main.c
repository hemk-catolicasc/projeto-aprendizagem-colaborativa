#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char nome[50];
    int idade;
    int opcao;

    printf("------------------------\n");
    printf(" SISTEMA DE CADASTRO \n");
    printf("------------------------\n");

    printf("Escolha uma opção:\n");
    printf("1 - Realizar cadastro\n");
    printf("2 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n");
            break;
        case 2:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    printf("\n ---CADASTRO --- \n");

    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    // remove o \n do final, se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (strlen(nome) == 0) {
        printf("\n Erro: O nome não pode ser vazio.\n");
        return 1;
    } else if (idade < 0 || idade > 120) {
        printf("\n Erro: A idade deve ser entre 0 e 120 anos.\n");
        return 1;
    }

    printf("\nCadastro realizado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    printf("\nObrigado por se cadastrar!\n");




    return 0;
}