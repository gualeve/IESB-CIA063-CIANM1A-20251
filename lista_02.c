/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int q2() {
    /* Faça um programa que leia dois números e mostre o maior deles. 
    Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”
    */
    int num1, num2;
    puts("Digite o 1o numero:");
    scanf("%d", &num1);
    puts("Digite o 2o numero:");
    scanf("%d", &num2);
    
    if (num1 == num2)
        printf("Números iguais\n");
    else
        printf("O maior número é: %d\n", (num1 > num2) ? num1 : num2);

    return 1;
}

int q4() {
    /* Faça um programa que receba a altura e o sexo de uma pessoa e 
    calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
    (em que “h” corresponde à altura):
        - Homens: (72,7 * h) – 58
        - Mulheres: (62,1 * h) – 44,7
    */
    float altura;
    float peso;
    char sexo;
    
    puts("Informe o sexo (M/F):");
    sexo = getchar();
    if (sexo != 'M' && sexo != 'F') {
        printf("Erro\n");
    }
    else {
        puts("Informe a altura (m):");
        scanf("%f", &altura);
        if (sexo == 'M')
            peso = 72.7 * altura - 58;
        else
            peso = (62.1 * altura) - 44.7;
        printf("Peso ideal é: %6.2fKg\n", peso);
    }
    return 1;
}

int q5() {
    /* Faça um programa que informe o mês de acordo com o número 
    digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.
    */
    int mes;    
    puts("Digite um mês entre 1 e 12");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            puts("Janeiro");
            break;
        case 2:
            puts("Fevereiro");
            break;
        case 3:
            puts("Março");
            break;
        case 4:
            puts("Abril");
            break;
        case 5:
            puts("Maio");
            break;
        case 6:
            puts("Junho");
            break;
        default:
            puts("Mês inválido");
    }
    
    return 1;
}
    

int main() {
    int questao;
    
    puts("Digite o número da questão [2, 4, 5]");
    scanf("%d", &questao);
    getchar();
    switch (questao) {
        case 2:
            q2();
            break;
        case 4:
            q4();
            break;
        case 5:
            q5();
            break;
        default:
            puts("Questão inválida");
    }
    puts("Finalizando...");

	return 0;
}





