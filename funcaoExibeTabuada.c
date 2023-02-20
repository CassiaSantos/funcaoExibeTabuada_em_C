/*Escreva um procedimento que imprima na tela a tabuada de multiplicação de um dado número.
Utilize esse procedimento para escrever um programa que leia um número e depois imprima a sua tabuada.*/

#include <stdio.h>

void calculaTabuada(int numTabuada) {
    for (int i = 1; i <= 10; i++) {
        printf("\t%d x %d = %d\n", i, numTabuada, i*numTabuada);
    }
}

void main() {

    int numTabuada;

    //Entrada de valor:
    printf("\t\tTatbuada de um número inteiro:\n\nInsira o número inteiro que deseja obter a tabuada: ");
    scanf("%d", & numTabuada);

    //chamada do procedimento exibeTabuada():
    calculaTabuada(numTabuada);

}
