#include <stdio.h>
#include <conio.h>

//9 - Escreva um programa onde os n�meros lidos ser�o somados at� que a soma destes n�meros seja igual ou maior do que 100.

void main(){
	float num, soma = 0;
	while (soma <=100){
	printf("Escreva um numero: ");
	scanf ("%f", &num);
	soma = num + num;
	}
	printf("Sua soma atingiu 100");
}
