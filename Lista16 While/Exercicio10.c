#include <stdio.h>
#include <conio.h>

//10- Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza. 
//Para cada leitura dever� ser realizado uma pergunta para o usu�rio para parar ou continuar (1 -continuar, 2 - parar)
//. Ao final o programa dever� exibir: a altura da mo�a mais alta e o n�mero de mo�as no concurso.
//Considere que todas as mo�as possuem altura diferente.

void main(){
	char nome[60];
	float alt, alt_maior = 0;
	int qtde = 0, resp = 1;
	
	while (resp == 1){
		printf("Informe o Nome: ");
		scanf ("%s", nome);
		printf ("Informe sua altura: ");
		scanf ("%f", &alt);
		qtde++;
		if(alt > alt_maior){
			alt_maior = alt;
		}	
		printf("Voce deseja continuar (1 -continuar, 2 - parar \n)");
		scanf ("%d", &resp);			
	}
	printf(" \n Altura mais alta: %0.2f ", alt_maior);
	printf(" \n N�mero de inscritas no concurso: %d ", qtde );
			
}
