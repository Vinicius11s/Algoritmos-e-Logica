#include <stdio.h>
#include <conio.h>

//12 - Fa�a um programa que leia um n�mero indeterminado de idades. A �ltima idade lida, que n�o entrar� nos c�lculos,
//dever� ser igual a zero. Ao final programa dever� escrever quantas idades foram lidas, calcular e escrever a m�dia
//de idade desse grupo de idades. 

void main(){
	float media;
	int qtde, idade = 1;
	while(idade != 0){
		if (idade != 0){
			printf("Informe sua idade: ");
			scanf("%d", &idade);
			qtde++;
		}		
	}
	qtde--;
	printf("\nForam lidas: %d idades", qtde);
	media = idade / qtde;
	printf("\nA media de idades e: %0.2f", media);
}
