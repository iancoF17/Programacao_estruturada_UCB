//Exercicio 02

#include <stdio.h>
#include <math.h>

int retorna_mes (int mes){
    
	switch (mes){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Mes invalido");
            break;
    }
}

int main (){
    int mes ;
    
	printf("Informe o numero do mes que deseja: ");
    scanf("%d", &mes);
    retorna_mes(mes);
}
