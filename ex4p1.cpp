/*
	Name: ex4p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 19:48
	Description: Programa captura a idade e o sexo do usuário e, ao final, apresenta uma série de dados: Número de Homens Contabilizado; Número de Mulheres Conta-
	bilizado; Número de Crianças Contabilizado; e Total de Pessoas Consultadas.
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{ // Início do programa
	setlocale(LC_ALL, "Portuguese");
	int homens, mulheres, criancas, i, id; homens = mulheres = criancas = i = id = 0; // homens = Contador de Homens || mulheres = Contador de Mu-
	// lheres || criancas = Contador de Crianças || total = Total do Público (Homens + Crianças + Mulheres) || i = Iterador || id = Idade
	char s; s = ' ';
	
	printf("Olá! Me ajude a coletar os dados dos usuários, ok? É só seguir as instruções."); puts(""); // ATENÇÃO DESENVOLVEDOR: Para encerra a 
	 //contabilização, insira 999 ao solicitar a idade do usuário.
	
	for(i = 0; id != 999; i++)
	{
		printf("\nDigite sua idade: "); scanf("%d", &id);
		
		if(id < 12)
		criancas = criancas + 1;
		
		else if(id == 999)
		{
			puts("\nContabilização encerrada!");
			break;
		}
		
		printf("\nAgora, me diga seu sexo (F para feminino ou M para masculino): "); scanf(" %c", &s);
		
		if(s == 'F')
		mulheres = mulheres + 1;
		else if(s == 'M')
		homens = homens + 1;
		else
		printf("\nIdade inválida!");
	}
	
	puts("\n\nCarregando..."); printf("\nPronto! Veja o resultado da contabilização dos dados de torcedores que vieram acompanhar o jogo hoje: \n\nNúmero de Homens: %d\nNúmero de Mulheres: %d\nNúmero de Crianças: %d\nPúblico Total: %d", homens, mulheres, criancas, i);
} // Fim do programa
