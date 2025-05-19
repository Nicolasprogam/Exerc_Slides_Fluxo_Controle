

#include <stdio.h>

int main()
{
    int idade;
    printf("digite uma idade");
    scanf("%d", &idade);
    if (idade >=0 && idade <=12){
        printf("criança");
    }else if(idade >=13 && idade <=17){
        printf("adolescente");
    }else if(idade >=18 && idade <=59){
        printf("adulto");
    }else{
        printf("Idoso");
    }

    return 0;
}