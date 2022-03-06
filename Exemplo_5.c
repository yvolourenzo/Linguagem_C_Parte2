#include <conio.h>
#include <stdio.h>

int main(void){
	float m , n1 , n2;
	printf("Notas ? ");
    scanf("%f %f",&n1,&n2);
	m = (n1+n2)/2;
    if(m>=6) { _textcolor(9); puts("Aprovado"); }
	else {_textcolor(12); puts("Reprovado"); }
	return 0;
}
