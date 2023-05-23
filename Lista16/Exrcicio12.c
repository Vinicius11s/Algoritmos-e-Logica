#include <stdio.h>
#include <conio.h>

//12 - Faça um programa que leia um número indeterminado de idades. A última idade lida, que não entrará nos cálculos,
//deverá ser igual a zero. Ao final programa deverá escrever quantas idades foram lidas, calcular e escrever a média
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
	printf("A média das idades lidas é: %f", media);	
}
