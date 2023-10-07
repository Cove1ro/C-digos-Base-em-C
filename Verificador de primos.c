#include <stdio.h>

int main(){
    int n, i, primo = 1;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n <= 0){
        printf("%d não é um número primo. \n", n);
        return 0;
    }
    
    if (n == 1){
        printf("1 é primo");
        return 0;
    }
    
    for (i = 2; i * i <= n; i++){
        if (n % i == 0){
            primo = 0; // Se 0 não é primo
            break;
        }
    }
    
    // Verificar o valor após o loop
    if (primo){
        printf("%d é um número primo. \n", n);
    }
    else {
        printf("%d não é um número primo. \n", n);
    }
    
    return 0;
}


