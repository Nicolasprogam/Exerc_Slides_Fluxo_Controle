

#include <stdio.h>

int main()
{
    int num1,num2;
    char operacao;
    printf("digita dois numeros: ");
    scanf("%d %d", &num1 ,&num2);
    printf("digite uma operaçao");fflush(stdin);
    scanf("%c", &operacao); 
    switch(operacao){
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            printf("%d", num1 / num2);
            break;
        default:
            printf("operaçao invalida  ");
        
    
    }
    
    return 0;
}