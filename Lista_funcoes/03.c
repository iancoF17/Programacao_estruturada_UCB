#include <stdio.h>
#include <math.h>

//Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius.

int converter(double f){
    double c;
	
	c = (f - 32) * (5.0/9.0);
	printf("Temperatura em Celsius e: %.1lf",c);
}


int main(){
    double f ;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf",&f);
     converter(f);
}
