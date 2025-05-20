#include <stdio.h>

int main() {
    int senha;
    int cargo;
    printf("digite sua senha");
    scanf("%d", &senha);
    if(senha == 1234){
        printf("acesso permitido, qual seu cargo? (1-Admin, 2-Gerente, 3-Funcionário)");
        scanf("%d", &cargo);
        switch (cargo){
            case 1:
            printf("Administrador(Acesso total ao sistema)");
            break;
            case 2:
            printf("Acesso parcial (relatórios e estoque)");
            break;
            case 3:
            printf("Acesso básico (apenas consultas)");
            break;
            default:
            printf("Cargo inválido!");
        }
    }else{
        printf("acesso negado");
        return 0;
    }
}