#include <stdio.h>

int main(void) {
    int input;

    char str1[50] = "WANT (Baixa prioridade)";
    char str2[50] = "COULD (Média Baixa prioridade)";
    char str3[50] = "SHOULD (Média Alta Prioridade)";
    char str4[50] = "MUST (Alta prioridade)";

    printf("Lista de Requisitos Funcionais: \n");
     printf("\n");
    printf("1- Autenticar Usuário\n");
    printf("2- Enviar Mensagens\n");
    printf("3- Atribuição de Tarefas\n");
    printf("4- Visualização de Tarefas\n");
    printf("5- Biblioteca Digital\n");
    printf("6- Calendário Escolar\n");
    printf("7- Notificações Push\n");
    printf("8- Perfil do Usuário\n");
    printf("9- Relatório de Progresso\n");
    printf("10- Todos os Requisitos não Funcionais\n");
     printf("\n");

    printf("Digite o número do requisito funcional para saber sua prioridade: ");
    scanf("%d", &input);
     printf("\n");

    if (input == 1) {
        printf("A prioridade de Autenticar Usuário é: %s\n", str3);
    } else if (input == 2) {
        printf("A prioridade de Enviar Mensagens é: %s\n", str4);
    } else if (input == 3) {
        printf("A prioridade de Atribuição de Tarefas é: %s\n", str4);
    } else if (input == 4) {
        printf("A prioridade de Visualização de Tarefas é: %s\n", str4);
    } else if (input == 5) {
        printf("A prioridade de Biblioteca Digital é: %s\n", str4);
    } else if (input == 6) {
        printf("A prioridade de Calendário Escolar é: %s\n", str3);
    } else if (input == 7) {
        printf("A prioridade de Notificações Push é: %s\n", str2);
    } else if (input == 8) {
        printf("A prioridade de Perfil do Usuário é: %s\n", str4);
    } else if (input == 9) {
        printf("A prioridade de Relatório de Progresso é: %s\n", str4);
    } else if (input == 10) {
        printf("A prioridade de Todos os Requisitos não Funcionais é: %s\n" , str4);
    } else {
        printf("Número de requisito inválido.\n");
    }

    return 0;
}