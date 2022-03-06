#include <stdio.h>

int main(void){
	float salario, imposto;
    printf("Salario ? ");
    scanf("%f",&salario);
    if(salario <= 1903.98) printf("isento\n");	
	else if(salario >= 1903.98 && salario <= 2826.65) printf("%.2f\n",salario*0.075);
	else if(salario >= 2826.65 && salario <= 3751.05) printf("%.2f\n",salario*0.15);
	else if(salario >= 3751.05 && salario <= 4664.68) printf("%.2f\n",salario*0.255);
	else printf("%.2f\n",salario*0.275);
	return 0;
}
