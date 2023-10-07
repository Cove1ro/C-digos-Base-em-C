#include <stdio.h>

int main()
{
    int N, S = 0, NT, R;
    
    printf("Digite um número: ");
    scanf("%d", &N);
    
    NT = N;
    
    while (NT > 0)
    {
        R = NT % 10;
        NT = NT / 10;
        S = S + R;
    }
    
    printf("%d", S);
    
    return 0;
}

