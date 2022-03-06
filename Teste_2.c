#include <stdio.h>

int main(void){
	printf("%d\n",100==50); // 0 --- 100 é igual a 50 ? = falso	
	printf("%d\n",30!=55); // 1 --- 30 é diferente de 55 ? = verdadeiro
	printf("%d\n",20<300); //  1 --- 20 é menor que 300 ? = verdadeiro
	printf("%d\n",20-1<=400*3+1); // 1 --- o calculo de 20 - 2 é menorm ou igual 400 * 3 + 1 ? = verdadeiro !
	return 0;
}
