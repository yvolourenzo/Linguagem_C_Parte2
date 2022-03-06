#include <stdio.h>

int main(void){
	printf("%d\n",1==2); // 0 --- 1 é igual a 2 ? = falso	
	printf("%d\n",1!=2); // 1 --- 1 é diferente de 2 ? = verdadeiro
	printf("%d\n",1<2); //  1 --- 1 é menor que dois ? = verdadeiro
	printf("%d\n",9-2<=2*3+1); // 1 --- o calculo de 9 - 2 é menorm ou igual 2 * 3 + 1 ? = verdadeiro !
	return 0;
}
