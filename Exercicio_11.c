#include <stdio.h>
#include <conio.h>

int main(void){
	float x,y;
	char o;
	printf("Expressao ? ");
	scanf("%f %c %f",&x,&o,&y);
    switch(o){
		case '+':  printf("Valor = %.2f\n",x+y);  break;
		case '-':  printf("Valor = %.2f\n",x-y);  break;
		case 'X': // X e x vão ser reconhecidos como case * , pois o break para nele.
		case 'x':
		case '*':  printf("Valor = %.2f\n",x*y);  break;
		case '/':  printf("Valor = %.2f\n",x/y);  break;
		default: printf("Operador invalido: %c\n",o);
		}
	return 0;
	}
