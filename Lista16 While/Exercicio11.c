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
	int num = 0;
	while(num != 1){
		printf("Informe o comodo: ");
		scanf("%s", com);
		printf("Informe a largura: ");
		scanf("%f", &larg);
		printf("Informe o comprimento: ");
		scanf("%f", &comp);
		area = larg * comp;
		printf("A area do comodo eh de: %0.2f ", area);
		printf("\n \nVoce deseja continuar calculando novos comodos (1-NAO;2-SIM) ");
		scanf("%d", &num);
	}	
}
