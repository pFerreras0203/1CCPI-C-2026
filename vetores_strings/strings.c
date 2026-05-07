#include <stdio.h>
#include <string.h>
int main(){

    char nome[20]; //= {'p','e','d','r','o','\0','\n'};

    printf("digite seu nome completo:");
    //scanf("%s", &nome);
    fgets(nome, 20, stdin);
    int tamanho_antes = strlen(nome);

    nome[strcspn(nome, "\n")] = '\0';

    int tamanho_depois = strlen(nome);

    printf("tamanho antes da funcao strpn: %d\n", tamanho_antes);
    printf("tamanho depois da funcao strpn: %d\n", tamanho_depois);
    printf("ola, %s\n",nome);

    char nome2[5];
    strcpy(nome2, nome);
    printf("como posso te ajudar, %s\n", nome2);

    return 0;
}