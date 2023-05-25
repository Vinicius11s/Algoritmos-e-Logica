#include <stdio.h>
#include <conio.h>

//3.O sistema de avalia��o de uma determinada disciplina obedece aos seguintes crit�rios:
//"	Durante o semestre s�o dadas tr�s notas;
//"	A nota final � obtida pela m�dia aritm�tica das notas dadas durante o curso;
//"	� considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um m�nimo de 40 aulas.

//Fazer um algoritmo que:
//a)	Leia um conjunto de dados contendo o n�mero de matr�cula, as tr�s notas e a frequ�ncia de 10 alunos;

//b)	Calcule e exiba:
//"	A nota final de cada aluno;
//"	A maior e menor nota da turma;
//"	A nota m�dia da turma;
//"	O total de alunos reprovados;
//"	A porcentagem de alunos reprovados por faltas.


void main(){
	int reprov = 0, alunos = 1, matricula, frequencia;
	float nota1, nota2, nota3, nota_final, nota_turma, nota_maior = 0, nota_menor = 99999, media_turma;
	
	do{
		printf("Informe seu numero de matricula: ");
		scanf("%d", &matricula);
		printf("Informe a 1. Nota: ");
		scanf("%f", &nota1);
		printf("Informe a 2. Nota: ");
		scanf("%f", &nota2);
		printf("Informe a 3. Nota: ");
		scanf("%f", &nota3);
		printf("Informe a Frequencia: ");
		scanf("%d", &frequencia);		
		alunos++;
		
		nota_final = (nota1 + nota2 + nota3) / 3;
		nota_turma = nota_turma + nota_final;
		media_turma = nota_turma / alunos;
		
		printf("Nota Final: %0.2f", nota_final);
		printf("\n\n");
		
		if(nota_final > nota_maior){
			nota_maior = nota_final;			
		}
		else{}
			if(nota_final < nota_menor){
				nota_menor = nota_final;
			}
			else{
			}
		
		
		if(nota_final < 6.0 || frequencia < 40 ){
			reprov++;
		}
		else{
		}
		
	} while( alunos <= 2);
	
	printf("\nA Maior Nota da Turma foi: %0.2f", nota_maior);
	printf("\nA Menor Nota da Turma foi: %0.2f", nota_menor);
	printf("\nA Media da Turma Foi: %0.2f", media_turma);
	printf("\nForam Reprovados: %d Alunos", reprov);
}		
