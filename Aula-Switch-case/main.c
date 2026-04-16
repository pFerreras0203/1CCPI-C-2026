#include <stdio.h>

void menu(){
    printf("---MENU---\n");
    printf("1 - calculadora media do aluno\n");
    printf("2 - verificador de presenca\n");
    printf("3 - aprovacao\n");
}

float media_aritmetica(float nota1, float nota2){

    return (nota1+nota2)/2;
}

void criterio(float m){
    if(m >= 6 && m <= 10){
        printf("aprovado");
    }else if (m >= 4){
        printf("recuperacao");
    }else{
        printf("reprovado");
    }

}

int main(){

    //variaveis
    int opcao, presenca;
    float media, n1, n2;

    menu();
    printf ("escolha uma das opcoes:");
    scanf("%d", &opcao);

    switch (opcao){
        case 1: 
        printf("--- calculadora de media--- \n"); 
        printf("digite sua primeira nota:");
        scanf("%f", &n1);
        printf("digite sua segunda nota:");
        scanf("%f", &n2);
        media = media_aritmetica(n1, n2);
        printf("sua media e: %.2f", media);
        break;

        case 2: 
        printf ("--- verificador de presenca--- \n"); 
        printf("digite seu percentual de presenca(0-100):");
        scanf("%d", &presenca);
        if (presenca >=75 && presenca <= 100){
            printf("presenca em dia\n");
        }else if(presenca >= 0 && presenca <= 74){
            printf("presenca pendente\n");
        }else{
            printf("valor de presenca invalido\n");
        }
        break;

        case 3:
        criterio(media);
        
        break;

        default: printf ("opcao invalida");
    }

    return 0;
}