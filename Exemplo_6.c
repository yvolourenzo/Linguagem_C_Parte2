#include <stdio.h>

int main (void){
	float total , litros , preco,desconto;
	printf("Litros Preço ? ");
	scanf("%f %f",&litros , &preco);
	total = litros*preco;
	if(total>100.00){
		desconto = 0.05*total;
 		printf("Desconto: R$ %.2f\n",desconto);
   		total = total - desconto;		
	}
	printf("Total: R$ %.2f\n",total);
	return 0;
}
