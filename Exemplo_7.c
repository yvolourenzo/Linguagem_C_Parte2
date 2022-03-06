#include <stdio.h>

int main(void){
	int a,b;
	printf("Numero? ");
	scanf("%d %d",&a,&b);
	//Se a condição é verdadeira, o resultado é a expressão1; senão, ele é a expressão2
	printf("Maior = %d\n",(a>b ? a:b));
	return 0;
}
