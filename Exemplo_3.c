#include <stdio.h>

int main(void) {
	printf("%d\n",!0); // a negação de 0 é 1 ouu a negação do falso é verdadeiro
	printf("%d\n",!9); // aparece 0  por que 9 é verdadeiro , portanto sua negação é falso
	printf("%d\n",1&&0); // 0 - && é falso
	printf("%d\n",0||1); // 1 - o || é verdadeiro
	printf("%d\n",2<3 || 3<2 ); //|| é verdadeiro
	return 0;
}
