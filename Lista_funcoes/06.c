#include <stdio.h>
#include <math.h>

int CalcularIMC (float peso, float altura){
	float imc;

	imc = peso/pow(altura,2);
	printf("IMC: %.2f", imc);
}

int main (){
    float altura;
    float peso;

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    CalcularIMC(peso,altura);

}
