#include <stdio.h>
#include <conio.h>

//11 - Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia
//(por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada do nome, da largura e do comprimento
//de um determinado c�modo, em seguida dever� apresentar a �rea do c�modo lido e tamb�m a mensagem solicitando ao usu�rio a
//confirma��o de continuar calculando novos c�modos.
//A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O".
//�rea = largura * comprimento.

void main(){
	char com[51];
	float larg, comp, area;
	int num;
	while( num = 1){
		printf("Informe o c�modo: ");
		scanf("%s", com);
		printf("Informe a largura: ");
		scanf("%f \n", larg);
		printf("Informe o comprimento: ");
		scanf("%f \n", comp);
		area = larg * comp;
		printf("A �rea do comodo %s � de: %f ", com, area);
		printf("Voc� deseja continuar calculando novos comodos (1 - N�O / 2 - SIM). ");
		scanf("%d \n", num);
	}	
}
