﻿#include <stdio.h>

int main(void){
	int n;
	printf("Numero? ");
	scanf("%d",&n);
	switch(n){
		// putchar declara um caractere
		case 1:  putchar('A'); break;
		case 3:  putchar('B'); 
		case 4:  putchar('C'); break;
		default: putchar('*');
		case 5:  putchar('D');
		}
	    puts(".");
		return 0;
	}
