#include <stdio.h>
#include <conio.h>

//10 - Elabore um algoritmo que informe o maior n�mero entre dois n�meros conhecido pelo usu�rio.

void main(){
	float num, num2;
	printf("Informe um numero: ");
	scanf ("%f", &num);
	printf("Informe outro numero: ");
	scanf ("%f", &num2);
		if (num > num2){
			printf("%f eh maior", num);
		}
		else
			if (num == num2){
				printf("Numeros Iguais!!!");
			}
			else{
				printf("%f eh maior", num2);
			}
	}
