#include <stdio.h>
#include <conio.h>

int main(void){
	int faltas, media;
	printf("Faltas e media? ");
	scanf("%d %d",&faltas,&media);
	if(faltas <= 5 && media >= 6) { _textcolor(8); puts("Aprovado");}
	else {_textcolor(10);puts("Reprovado");}

}
