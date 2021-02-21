/*
	Name: ex4p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 19:48
	Description: Programa captura a idade e o sexo do usu�rio e, ao final, apresenta uma s�rie de dados: N�mero de Homens Contabilizado; N�mero de Mulheres Conta-
	bilizado; N�mero de Crian�as Contabilizado; e Total de Pessoas Consultadas.
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{ // In�cio do programa
	setlocale(LC_ALL, "Portuguese");
	int homens, mulheres, criancas, i, id; homens = mulheres = criancas = i = id = 0; // homens = Contador de Homens || mulheres = Contador de Mu-
	// lheres || criancas = Contador de Crian�as || total = Total do P�blico (Homens + Crian�as + Mulheres) || i = Iterador || id = Idade
	char s; s = ' ';
	
	printf("Ol�! Me ajude a coletar os dados dos usu�rios, ok? � s� seguir as instru��es."); puts(""); // ATEN��O DESENVOLVEDOR: Para encerra a 
	 //contabiliza��o, insira 999 ao solicitar a idade do usu�rio.
	
	for(i = 0; id != 999; i++)
	{
		printf("\nDigite sua idade: "); scanf("%d", &id);
		
		if(id < 12)
		criancas = criancas + 1;
		
		else if(id == 999)
		{
			puts("\nContabiliza��o encerrada!");
			break;
		}
		
		printf("\nAgora, me diga seu sexo (F para feminino ou M para masculino): "); scanf(" %c", &s);
		
		if(s == 'F')
		mulheres = mulheres + 1;
		else if(s == 'M')
		homens = homens + 1;
		else
		printf("\nIdade inv�lida!");
	}
	
	puts("\n\nCarregando..."); printf("\nPronto! Veja o resultado da contabiliza��o dos dados de torcedores que vieram acompanhar o jogo hoje: \n\nN�mero de Homens: %d\nN�mero de Mulheres: %d\nN�mero de Crian�as: %d\nP�blico Total: %d", homens, mulheres, criancas, i);
} // Fim do programa
