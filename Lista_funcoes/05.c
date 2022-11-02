#include <stdio.h>
#include <math.h>
#define PI 3.1414592

//Escreva uma função para o cálculo do volume de uma esfera.

int volume(float raio){
float volume;
volume = 4/((3*PI)*pow(raio,3));
printf("O volume e: %.2f",volume);
}
int main (){
    float raio;
    
    printf("Informe o raio:");
    scanf("%f",&raio);
    volume(raio);
}
