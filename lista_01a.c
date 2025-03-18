/******************************************************************************
Faça um programa que solicite a entrada do dia/mês/ano e a hora:minutos, 
depois imprima o resultado na seguinte formatação:
Data: DD/MM/AA
Hora: HH:mm

*******************************************************************************/
#include <stdio.h>


int main() {
    int dia, mes, ano;
    int hora, minuto;
    
    puts("Digite uma data no formato DD/MM/AA");
    scanf("%d/%d/%d", &dia, &mes, &ano);    
    puts("Digite uma hora no formato HH:MM");
    scanf("%d:%d", &hora, &minuto);
    
    printf("\n%02d/%02d/%02d\n", dia, mes, ano);
    printf("%02d:%02d\n", hora, minuto);

    return 0;
}