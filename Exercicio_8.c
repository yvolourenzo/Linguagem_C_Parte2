#include <stdio.h>
#include <math.h>
int main(void){
	float a,b,c,x1,x2,delta;
	printf("Digite A: ");
	scanf("%f",&a);
	printf("Digite B: ");
	scanf("%f",&b);
	printf("Digite C: ");
	scanf("%f",&c);

	delta = b*b - 4*a*c;
	x1 = (-b +sqrt(delta))/ (2*a);
	x2 = (-b -sqrt(delta) / (2*a));

	if(delta < 0) printf("A equacao nao possui raizer reais \n ");
	else printf("O valor de x1: %.2fn\n",x1); printf("O valor de x2: %.2f \n");
	
	return 0;
		
}
