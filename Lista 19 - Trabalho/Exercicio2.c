#include <stdio.h>
#include <conio.h>
//2.	Escreva um algoritmo que:
//- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
//- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
//- Suponha que não exista dois ou mais alunos com a mesma nota.

void main(){
	float nota, nota_maior, segunda_nota;
	int  segunda_matricula, matricula_maior, matricula, ficha = 1;
	
	do{
		printf("\nInforme o numero de matricula: ");
		scanf("%d", &matricula);
		printf("Informe sua nota: ");
		scanf("%f", &nota);	
		ficha++;
		
		if(nota > nota_maior){
			nota_maior = nota;
			matricula_maior = matricula;
		}
		else{
			if(nota > segunda_nota && nota < nota_maior){
				segunda_nota = nota;
				segunda_matricula = matricula;
			}
		}	
	} while (ficha <= 7);
	
	printf("\nA Maior Nota Eh: %0.2f", nota_maior);
	printf("\nNumero de matricula: %d", matricula_maior);
	printf("\n");
	printf("\nA Segunda Maior Nota Foi: %0.2f", segunda_nota);
	printf("\nNumero de matricula: %d", segunda_matricula);
}
