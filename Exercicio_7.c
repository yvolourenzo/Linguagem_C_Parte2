#include <stdio.h>

int main(void){
	int faltas, media;
	printf("Faltas media ?");
    scanf("%d %d",&faltas ,&media);
	if(faltas > 5 || media < 4) {_textcolor(12); puts("Reprovado");}
	else if(media >= 6) {_textcolor(9); puts("Aprovado");}
    else {_textcolor(14); puts("Recuperacao"); }
	}
