/******************************************************************************
Faça um programa que leia três caracteres do tipo char e depois os imprima um em
cada linha. Use um único comando printf() para a impressão.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a, b, c;
    
    puts("Digite 3 caracteres");
    scanf("%c", &a);
    getchar();
    scanf("%c", &b);
    getchar();
    scanf("%c", &c);
    printf("c = %c, b = %c, a = %c\n", c, b, a);

    return 0;
}