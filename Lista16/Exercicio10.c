#include <stdio.h>
#include <conio.h>

//10- Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza. 
//Para cada leitura dever� ser realizado uma pergunta para o usu�rio para parar ou continuar (1 -continuar, 2 - parar)
//. Ao final o programa dever� exibir: a altura da mo�a mais alta e o n�mero de mo�as no concurso.
//Considere que todas as mo�as possuem altura diferente.

void main(){
	char nome[60];
	float alt, num, i = 0, alt_maior = 0;
	while (num = 2){
		printf("Informe seu nome: ");
		scanf ("%s",nome);
		i++;
		printf ("Informe sua altura: ");
		scanf ("%f \n", &alt);
			if(alt > alt_maior){
				alt_maior = alt;
			}
			else{}
		printf("Voc� deseja continuar (1 -continuar, 2 - parar) ");
		scanf ("%f \n", &num);
	}
	printf("Altura da mo�a mais alta: %f ", alt_maior);
	printf("N�mero de mo�as inscritas no concurso: %f ", i );
			
}
