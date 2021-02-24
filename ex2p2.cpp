/*
	Name: p2ex3.cpp
	Copyright: 
	Author: Mario Junior
	Date: 10/07/20 18:06
	Description: Programa reúne o sexo e o peso de uma população de 12 pessoas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float p[12], m, h; // p = Peso / m = Acumulador de Peso Feminino / h = Acumulador de Peso Masculino / s = Sexo / i = Iterador / hom = Contador de Homens / mul = Contador de Mulheres
	char s[12];
	int i, hom, mul;
	
	while(1)
	{ // Início do Laço de Repetição
	
	system("cls");

	m = h = 0.0; hom = mul = 0;
	
	for(i = 0; i < 12; i++) // Zerando vetores
	{
		p[i] = 0.0;
		s[i] = 'f';
	}
	
	puts("Bem-vindo! DeSousa System's\n\nSiga as instruções para verificar o peso médio de homens e de mulheres de uma população.\nPor pesquisa, o número máximo de pessoas que podem ser consultados é 12."); puts("");
	
	for(i = 0; i < 12; i++) // Início do For Coletador de Dados
	{
		printf("Diga-me seu sexo (F para Feminino e M para Masculino): "); scanf(" %c", &s[i]);
			printf("Insira seu peso (Exemplo: 65,4): "); scanf("%f", &p[i]); puts("");
	
	if(p[i] <= 0.0)
	{ // Condicional 2 para Matar Erros
		printf("\nPeso inválido. Programa encerrado.");
		break;
	} // Fim da 2 Condicional para Matar Erros 
	
			
	if(s[i] == 'f' || s[i] == 'F') // Acumulador de Homem e de Mulher
	{ // Início da Condicional das Mulheres
	m = m + p[i];
	mul = mul + 1;
	} // Fim da Condicional das Mulheres
	
	else
	{ // Início da Condicional dos Homens
	h = h + p[i];
	hom = hom + 1;
	} // Fim da Condicional dos Homens
	} // Fim do For Coletador de Dados
	
	if(p[i] > 0)
	{ // Início da Condicional 2 para Matar Erros
	puts("\nProcessando...");
	puts("\nDeSousa System's informa:");
	
	printf("\n\nPeso Médio Masculino: %.2fKG", h/hom);
	printf("\n\nPeso Médio Feminino: %.2fKG", m/mul); puts("");
	
	for(i = 0; i < 12; i++)
	{
	if(s[i] == 'f' || s[i] == 'F') // Resultado
		printf("\n\nUsuário %d: %.2fKG - Feminino", i+1, p[i]);
	else
		printf("\n\nUsuário %d: %.2fKG - Masculino", i+1, p[i]);
	}
	} // Fim da Condicional 3 para Matar Erros
	
	puts("\n\nPressione qualquer tecla para iniciar uma nova pesquisa..."); // Limpador de Tela
	getch();
	} // Fim do Laço de Repetição
} // Fim do Programa
