#include <stdio.h>
#include <conio.h>

//12 - Fa�a um programa que leia um n�mero indeterminado de idades. A �ltima idade lida, que n�o entrar� nos c�lculos,
//dever� ser igual a zero. Ao final programa dever� escrever quantas idades foram lidas, calcular e escrever a m�dia
//de idade desse grupo de idades. 

void main(){
	int idade, idadee, i = 0 ;
	float media;
	while(idade = 0){
		if (idade =! 0){
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		idadee = idadee + idade;
		i++;
		}
		else{}
	}
	media = idadee / i;
	printf("Foram lidas %d idades", i);	
	printf("A m�dia das idades lidas �: %f", media);	
}
