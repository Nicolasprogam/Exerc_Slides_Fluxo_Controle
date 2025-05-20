

#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("Digite uma operação : ");fflush(stdin);
    scanf(" %c", &operacao); 

    switch (operacao) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
