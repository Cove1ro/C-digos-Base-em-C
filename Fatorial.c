#include <stdio.h>

int main()
{
    int N, FAT, AUX;
    printf("Digite N: ");
    scanf("%d", &N);
    
    if(N<0)
        printf("Não existe Fatorial");
    
    else {
        if (N == 0 || N == 1)
            printf("%d! = 1 ", N);
        
        else {
            FAT = N;
            AUX = N-1;
            while (AUX > 1)
            {
                FAT = FAT*AUX;
                AUX--;
            }
            printf("%d! = %d", N, FAT);
        }
    }

    return 0;
}



