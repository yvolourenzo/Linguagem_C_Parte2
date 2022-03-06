#include <stdio.h>

int main(void){
	int numero,final;
	printf("Placa? ");
	scanf("%d",&numero);
	// captura o ultimo digito da variavel numero
	final = numero % 10;
	switch(final){
		case 1:
		case 2:  printf("Segunda-feira"); break;
		case 3:
		case 4:  printf("Terca-feira");break;
		case 5: 
	    case 6:  printf("Quarta-feira");break;
		case 7: 
		case 8:  printf("Quinta-feira");break;
		case 9:
		default: printf("Sexta-feira"); break;
	}
	return 0;
}
