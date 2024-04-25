/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

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

int main()
{
    
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

    printf("\nElegí el nuevo valor (0 o 1) del bit %d: ", eleccion_bit);
    scanf("%d", &valor_nuevo);
    
    // Modificar el bit seleccionado
    switch (eleccion_bit) {
        case 0:
            numeros.bits.bit_0 = valor_nuevo;
            break;
        case 1:
            numeros.bits.bit_1 = valor_nuevo;
            break;
        case 2:
            numeros.bits.bit_2 = valor_nuevo;
            break;
        case 3:
            numeros.bits.bit_3 = valor_nuevo;
            break;
        case 4:
            numeros.bits.bit_4 = valor_nuevo;
            break;
        case 5:
            numeros.bits.bit_5 = valor_nuevo;
            break;
        case 6:
            numeros.bits.bit_6 = valor_nuevo;
            break;
        case 7:
            numeros.bits.bit_7 = valor_nuevo;
            break;
        case 8:
            numeros.bits.bit_8 = valor_nuevo;
            break;
        case 9:
            numeros.bits.bit_9 = valor_nuevo;
            break;
        case 10:
            numeros.bits.bit_10 = valor_nuevo;
            break;
        case 11:
            numeros.bits.bit_11 = valor_nuevo;
            break;
        case 12:
            numeros.bits.bit_12 = valor_nuevo;
            break;
        case 13:
            numeros.bits.bit_13 = valor_nuevo;
            break;
        case 14:
            numeros.bits.bit_14 = valor_nuevo;
            break;
        case 15:
            numeros.bits.bit_15 = valor_nuevo;
            break;
        default:
            printf("Índice de bit no válido.\n");
            return 1;
    }
    
    printf("\nNuevo valor del número después de modificar el bit %d: %.2f\n", eleccion_bit, numeros.var);
    
    float * punt1byte_numeros = &numeros.var;
    for (int i = 0; i < 4; i++){
        printf("\nByte %d del float: \n\t- HEX:%x\n\t- DEC:%d\n",i+1,*punt1byte_numeros,*punt1byte_numeros);
        punt1byte_numeros++;
    }
    return 0;
}




