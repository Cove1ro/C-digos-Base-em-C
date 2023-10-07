#include <stdio.h>

int main()
{
    int N1 = 1, N2 = 1, Cont = 2, ;
    
    printf("%d  %d ", N1, N2);
    
    while (Cont <= 20)
    {
        S = N1+N2;
        N1 = N2;
        N2 = S;
        Cont++;
        
        printf(" %d ", N2);
    }

    return 0;
}

