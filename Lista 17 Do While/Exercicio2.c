#include <stdio.h>
#include <conio.h>

//2 - Uma ag�ncia de uma cidade do interior tem, no m�ximo, 10 clientes. Criar um algoritmo em que possa receber o n�mero da conta, 
//nome e saldo de cada cliente. Esse algoritmo deve imprimir todas as contas, os respectivos saldos e uma das mensagens:
//positivo/negativo. A digita��o acaba quando se digita -999 para um n�mero da conta ou quando chegar a 10. Ao final, dever� sair a qtde
//de clientes com saldo negativo, a qtde de clientes da ag�ncia e o saldo total de todos os clientes somados.

void main(){
	char nome[200];
	float conta, saldo;
	
	do{
		printf("Informe o numero da conta: ");
		scanf("%f", &conta);
		printf("Informe o seu nome: ");
		scanf("%s", nome);
		printf("Informe o saldo da sua conta: ");
		scanf("%f", &saldo);		
		
	} 
}
