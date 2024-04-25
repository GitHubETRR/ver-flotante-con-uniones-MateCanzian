/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    union valores {
    float var;
    unsigned char varBytes[4];
        struct{
            unsigned int bit_0 : 1;
            unsigned int bit_1 : 1;
            unsigned int bit_2 : 1;
            unsigned int bit_3 : 1;
            unsigned int bit_4 : 1;
            unsigned int bit_5 : 1;
            unsigned int bit_6 : 1;
            unsigned int bit_7 : 1;
            unsigned int bit_8 : 1;
            unsigned int bit_9 : 1;
            unsigned int bit_10 : 1;
            unsigned int bit_11 : 1;
            unsigned int bit_12 : 1;
            unsigned int bit_13 : 1;
            unsigned int bit_14 : 1;
            unsigned int bit_15 : 1;
        }bits; // Es la estructura de campo de bits
    };
    union valores numeros;

    printf("Escribe el número que desees:\n");
    scanf("%f", &numeros.var);
    printf("Tu numero es: \n");
    
    for (int i=0; i<4; i++){
    printf("0x%x /", numeros.varBytes[i]);}
    
    int eleccion_bit = 0;
    int valor_nuevo = 0;
    
    printf("\nSelecciona el bit del 0 al 15 que quieras modificar: ");
    scanf("%d", &eleccion_bit);

    printf("\nElegí el nuevo valor (0 o 1) del bit %d: ",&eleccion_bit);
    scanf("%d", &valor_nuevo);
    
    float * punt1byte_numeros = &numeros.var;
    for (int i = 0; i < 4; i++){
        printf("\nByte %d del float: \n\t- HEX:%x\n\t- DEC:%d\n",i+1,*punt1byte_numeros,*punt1byte_numeros);
        punt1byte_numeros++;
    }
    return 0;
}




