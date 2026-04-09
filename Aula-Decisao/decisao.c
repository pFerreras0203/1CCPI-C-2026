#include<stdio.h>

int main(){

    float n1;
    float n2;
    int presenca;
    float media;

    printf("digite a nota 1:\n");
    scanf("%f", &n1);
    printf("digite a nota 2:\n");
    scanf("%f", &n2);
    printf("digite sua presenca:\n");
    scanf("%d", &presenca);

    media = ((float)n1+n2)/2;
    printf("a media e:%.2f\n", media);

    if(media >9 && presenca > 80){
        printf("aluno aprovado com excelencia");
    }else if(media >=6 && presenca >= 75){
        printf("aprovado");
    }else if(media >= 4 && presenca >= 75){
        printf("recuperacao");
    }else if(media >=6 && presenca < 75){
        printf("aluno reprovado pro falta");
    }else{
        printf("aluno reprovado");
    }



    return 0;

}
