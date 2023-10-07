#include <stdio.h>

int main()
{
    float Y, X;
    int cont;
    
    printf("Digite Y: ");
    scanf("%f", &Y);
    
    if (Y < 0)
        printf("Não existe raizes reais");
    
    else {
        X = Y/2;
        cont = 1;
        
        while (cont < 20){
            X = (X*X+Y)/(2*X);
            cont++;
        }
        printf("Raiz de %0.f = %2.f ", Y, X);
    }

    return 0;
}

