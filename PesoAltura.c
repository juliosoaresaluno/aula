#include <stdio.h>

typedef struct{
    int peso; // peso em quilogramas
    int altura;// altura em centimetros
} pesoaltura;


int main() {
    pesoaltura pessoa;
    pessoa.peso =95;
    pessoa.altura = 180;
    printf("peso: %i, altura: %i/n", pessoa.peso,pessoa.altura);
    return 0;
}