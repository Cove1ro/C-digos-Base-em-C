/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

