#include <stdio.h>

int main() {
    int dia;
    printf("Digite um número (1-7)");
    scanf("%d", &dia); fflush(stdin);
    switch (dia){
        case 1:
        printf("segunda-feira");
        break;
        case 2:
        printf("terca-feira");
        break;
        case 3:
        printf("quarta-feira");
        break;
        case 4:
        printf("quinta-feira");
        break;
        case 5:
        printf("sexta-feira");
        break;
        case 6:
        printf("sabado");
        break;
        case 7:
        printf("domingo");
        break;
        default:
        printf("numero corresponde invalido");
        }
        return 0;
    }