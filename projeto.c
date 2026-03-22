#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

int divi(int a, int b){
    if(b == 0){
        printf("\nErro: divisão por zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int escolha, num1, num2, resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\t\tCalculadora\n");
    printf("\n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &escolha);

    printf("\nDigite dois números: ");
    scanf("%d %d", &num1, &num2);

    switch(escolha){
        case 1:
            resultado = soma(num1, num2);
            break;
        case 2:
            resultado = sub(num1, num2);
            break;
        case 3:
            resultado = mult(num1, num2);
            break;
        case 4:
            resultado = divi(num1, num2);
            break;
        default:
            printf("\nOpção inválida!\n");
            return 1;
    }

    printf("\nResultado: %d\n", resultado);

    return 0;
}
