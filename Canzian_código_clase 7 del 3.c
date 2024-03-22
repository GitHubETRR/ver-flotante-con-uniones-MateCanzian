/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union valores {
    float var;
    unsigned char varBytes[4];
};

int main()
{
    union valores numeros;

    printf("Escribe el número que desees\n");
    scanf("%f", &numeros.var);
    for (int i=0; i<4; i++){
    printf("%x\n", numeros.varBytes[i]);
    }
    return 0;
}
