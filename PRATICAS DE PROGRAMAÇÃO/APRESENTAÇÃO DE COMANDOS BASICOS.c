#include <stdio.h>  //BIBLIOTECA DE ENTRADA E SAIDA
#include <stdlib.h> //BIBLIOTECA BASICA DE FUN��ES DO WINDOWS
#include <locale.h> //BIBLIOTECA DE SIMBOLOS E PONTUA��O
#include <conio.h> //CONSOLE DE ENTRADA E SAIDA DA STRING
 
 	int numero; // NUMERO INTEIRO
	float salario; // NUMERO REAL
	char letra; // UM CARACTERE
	char nome[20]; // VARIOS CARACTERES "STRING"
	char nomecomp[50];

int main(){ // MAIN = FUN��O PRINCIPAL

	setlocale(LC_ALL,"Portuguese"); // SELECIONAR A LINGUAGEM EM PT-BR
	
	//system("color AAA"); //MOSTRAR TABELAS DE CORES
	
	printf("\tOl�, Mundo!\n");
		
	printf("Escreva um numero inteiro: ");
	scanf("%i",&numero);
	
	printf("Escreva seu salario: R$");
	scanf("%f",&salario);
	
	fflush(stdin);
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	
	fflush(stdin);
	printf("Digite seu primeiro nome: ");
	scanf("%s",&nome);
	
	fflush(stdin);
	printf("Digite seu nome completo: ");
	gets(nomecomp);
	
	printf("\n===============================\n");
	printf("MOSTRANDO SUAS INFORMA��ES");
	printf("\n===============================\n");
	
	printf("O numero digitado foi: %i \n",numero);
	printf("Seu sal�rio � R$ %.2f \n",salario);
	printf("A letra escolhida foi: %c\n",letra);
	printf("O nome �: %s \n",nome);
	printf("Seu nome completo �: %s\n",nomecomp);
	
	
	/*	
		% = ler
		%i = l� inteiro
		%f = l� real
		%c = l� caractere
		%s = l� string
		& = endere�o de mem�ria
	*/
	

	   system("pause");
		
return 0; // INT E RETURN = RETORNA SE TEVE ALGUM ERRO NO C�DIGO
}
