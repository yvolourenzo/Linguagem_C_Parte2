#include <stdio.h>

int main(void){
	int numero,final;
	printf("Placa? ");
	scanf("%d",&numero);
	// captura o ultimo digito da variavel numero
	final = numero % 10;
    if(final == 1 || final == 2){printf("Segunda-feira");}
	else if(final == 3 || final == 4 ){printf("Terca-feira");}
	else if(final == 5 || final == 6){printf("Quarta-feira");}
	else if(final == 7 || final == 8){printf("Quinta-feira");}
    else {printf("Sexta-feira");}
	return 0;
}
