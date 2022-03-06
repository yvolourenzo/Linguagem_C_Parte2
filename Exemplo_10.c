#include <stdio.h>
#include <conio.h>

int main(void){
	float x,y;
	char o;
	printf("Expressao ? ");
	scanf("%f %c %f",&x,&o,&y);
    switch(o){
		case '+': _textcolor(11); printf("Valor = %.2f\n",x+y); _textcolor(0); break;
		case '-': _textcolor(9);  printf("Valor = %.2f\n",x-y); _textcolor(0); break;
		case 'X': // X e x vão ser reconhecidos como case * , pois o break para nele.
		case 'x':
		case '*': _textcolor(10); printf("Valor = %.2f\n",x*y); _textcolor(0); break;
		case '/': _textcolor(12); printf("Valor = %.2f\n",x/y); _textcolor(0); break;
		default: printf("Operador invalido: %c\n",o);
		}
	return 0;
	}
