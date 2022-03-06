#include <stdio.h>

int main(void){
	float peso, altura, IMC;
	printf("peso e altura ? ");
	scanf("%f %f",&peso,&altura);
	altura = altura * altura;
	IMC = peso / altura;
	printf("%.2f\n",IMC);
	if(IMC >= 18.5 && IMC <= 30) puts("Normal");
	else if(IMC < 18.5) puts("Magro demais");
	else puts("Obeso");
	return 0;
	}
