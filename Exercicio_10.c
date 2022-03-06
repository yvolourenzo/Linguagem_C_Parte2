#include <stdio.h>

int main(void){
  float numero1 , numero2 ;
  char operador;
  printf("Expressao ? :");
  scanf("%f %c %f",&numero1,&operador,&numero2);
  switch(operador){	
	case '+': printf("Valor = %.2f\n",numero1+numero2); break;
  	case '-': printf("Valor = %.2f\n",numero1-numero2); break;
    case '*': printf("Valor = %.2f\n",numero1*numero2); break;
	case '/':
		if(numero1 != 0 || numero2 != 0){
			printf("Divisao por 0 nao pode !\n "); break;	
				}
            printf("Valor = %.2f\n",numero1/numero2); break;

	default: printf("Operador invalido: %c\n",operador);
	}
}
