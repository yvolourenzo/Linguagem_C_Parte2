#include <stdio.h>
#include <conio.h>

int main(void){
	float p1 , p2 , m;
	printf("Notas? ");
	scanf("%f %f",&p1,&p2);
	m = (p1+p2)/2;
	if(m>=6) { _textcolor(9); puts("Aprovado"); }
	else     { _textcolor(4); puts("Reprovado"); }
	_textcolor(15);
	return 0;
	}
