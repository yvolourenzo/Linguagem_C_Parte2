﻿#include <stdio.h>

int main(void){
	float a,b,c;
	printf("Numeros? ");
	scanf("%f %f %f",&a,&b,&c);
	if(a<b+c && b<a+c && c<a+b){
		printf("Triangulo: ");
		if(a==b && b==c) puts("equilatero");
		else if(a==b || a==c || b==c) puts("isosceles");
		else puts("escaleno");
	}	
	else puts("Nao e triangulo!");
	return 0;
}
