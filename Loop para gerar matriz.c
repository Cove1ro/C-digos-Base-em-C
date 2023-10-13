/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t, i, num [3][4];
    
    for (t=0; t<3; t++)
        for (i=0; i<4; i++)
            num [t][i] = (t*4)+i+1;
    
    for (t=0; t<3; t++){
        for (i=0; i<4; i++)
            printf("%3d", num[t][i]);
        printf("\n");
    }
    
    return 0;
}

