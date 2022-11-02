#include <stdio.h>
#include <math.h>

//Exercicio 01

int main(){
    int n[2];
    int i;
    
	for ( i = 0; i < 2; i++){
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }
    
	if(n[0] > n[1]){
    	printf("Numero maior: %d", n[0]);
    }
	else if(n[1] > n[0]){
    	printf("Numero maior: %d", n[1]);
    }
	else{
        printf("Os numeros sao iguais");
    }
    
}
