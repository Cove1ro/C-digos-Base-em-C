#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char mensagem[6];
    printf("Digite um número: ");
    scanf("%d", &N);
    
    strcpy(mensagem, (N % 2 == 0) ? "par" : "ímpar");
    printf("%d é %s", N, mensagem);

    return 0;
}

