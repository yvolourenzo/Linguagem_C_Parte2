﻿#include <stdio.h>

int main(void){
	int idade;
	printf("Idade? ");
	scanf("%d",&idade);
	if(idade<=18)puts("Menor");
	else puts("Maior"); //puts exibe umas string e muda o cursor de linha
	return 0;
	}
