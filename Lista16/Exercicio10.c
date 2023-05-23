#include <stdio.h>
#include <conio.h>

//10- Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um concurso de beleza. 
//Para cada leitura deverá ser realizado uma pergunta para o usuário para parar ou continuar (1 -continuar, 2 - parar)
//. Ao final o programa deverá exibir: a altura da moça mais alta e o número de moças no concurso.
//Considere que todas as moças possuem altura diferente.

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
		printf("Você deseja continuar (1 -continuar, 2 - parar) ");
		scanf ("%f \n", &num);
	}
	printf("Altura da moça mais alta: %f ", alt_maior);
	printf("Número de moças inscritas no concurso: %f ", i );
			
}
