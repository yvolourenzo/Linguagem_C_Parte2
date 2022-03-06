#include <stdio.h>

int main(void){
	int dia,mes,ano,passo1,passo2,passo3;
	printf("Digite o dia , mes e ano");
	scanf("%d %d %d", &dia,&mes,&ano);
    // multiplica dia por 100 para poder ser somado com mes
    passo1 = (dia * 100) +  mes + ano ;
	// passo 2 separa os primeiros 2 digitos 'divide por 100 , e os dois ultimos % 100'.
	passo2 = (passo1 % 100)+ (passo1 / 100);
	// resto da divisao do p2 por 5
	passo3 = passo2 % 5;
	switch(passo3){
		case 0: printf("Timido\n"); break;
		case 1: printf("Sonhador\n"); break;
		case 2: printf("Paquerador\n"); break;
		case 3: printf("Atraente\n"); break;
		default: printf("Irresistivel\n"); break;
		}
	return 0;
	}
