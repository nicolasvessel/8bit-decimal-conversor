    #include <stdio.h>
    int main()

{
    int decimal;
    int R1, R2, R3, R4, R5, R6, R7, R8;
    int d1, d2, d3, d4, d5, d6, d7;

    //interface do usuario//

    printf ("numero decimal:");
    scanf ("%i", &decimal);
    printf ("\n");

    //verificador de limite 8 bits//
    if (decimal > 255)
    {
        printf("ERRO!\n");
        printf ("INSIRA UM VALOR MENOR\n");
        return 0;
    }



    //conversor e impressor binario
    R1 = decimal %2;
    d1 = decimal /2;
    R2 = d1 %2;
    d2 = d1 /2;
    R3 = d2 %2;
    d3 = d2 /2;
    R4 = d3 %2;
    d4 = d3 /2;
    R5 = d4 %2;
    d5 = d4 /2;
    R6 = d5 %2;
    d6 = d5 /2;
    R7 = d6 %2;
    d7 = d6 /2;
    R8 = d7 %2;
    printf("binario: %d%d%d%d%d%d%d%d\n", R8,R7,R6,R5,R4,R3,R2,R1);


    //conversor e impressor octal
    printf("octal: %o\n", decimal);

    //conversor e impressor hexadecimal
    printf("hexadecimal: %X", decimal);

    return 0;
}
