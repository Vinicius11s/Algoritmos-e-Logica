#include <stdio.h>
#include <conio.h>

//1 - Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200, se n�o, exibir "n�mero fora do intervalo".

void main(){
	int num;
	printf("Informe um numero: ");	
	scanf("%d", &num);
	if(num > 100 || num <200 ){
		printf("Este numero esta no intervalo entre 100 e 200");
		}
	else{
		printf("Numero fora do intervalo");
	}
}
