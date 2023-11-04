#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	//declaração   variáveis
	float nota1, nota2, media;

	//obter as notas
	printf("digite a primeira nota:");
	scanf_s("%f", &nota1);

	printf("digite a segunda nota:");
	scanf_s("%f", &nota2);

	//calcula a média
	media = (nota1 + nota2) / 2;

	//verifica se foi aprovado ou não 
	if (media >= 7)
		printf("Aprovado");
	else
		printf("Reprovado");

	_getch();
	return 0;
}