#include <stdio.h>
#include <conio.h>

//5 - Fa�a um algoritmo que receba o pre�o de custo e o pre�o de venda de um produto.
//Mostre como resultado se houve lucro, preju�zo ou empate para este produto. 
//Informe percentual de lucro ou preju�zo em rela��o ao custo x venda.



void main(){
	float pc, pv, ll ;
	printf("Informe o preco de custo: ");
	scanf("%f", &pc);
	printf("Informe o preco de venda: ");
	scanf("%f", &pv);
	
	ll = pv - pc;
	if(ll > 0 ){
		printf ("Houve lucro");
	}
	else{
		if(ll < 0 ){
			printf("Houve Prejuizo");
		}
		else{
			printf("Houve empate");
		}
	}
}
