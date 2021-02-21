/*
	Name: ex3p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 19:17
	Description: Programa calcula o percentual de cada face que caiu para cima em cem lançamentos de um dado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{ // Fim do programa
	setlocale(LC_ALL, "Portuguese");
	int i, dado;
	i = dado = 0;
	float d1, d2, d3, d4, d5, d6; d1 = d2 = d3 = d4 = d5 = d6 = 0.0;
	
	printf("Olá, usuário. Agora, iniciarei lançamentos de dados, mas é você quem escolhe a face que caiu."); puts("");
	
	for(i = 0; i < 15; i++)
	{
		printf("\nInsira a face (1 a 6) que caiu para cima: "); scanf("%d", &dado);
		
		if(dado < 1 || dado > 6)
		{
		printf("Digito inválido! O programa será encerrado agora. Lembre-se, usuário: o número a ser escolhido vai de 1 a 6, portanto, atente-se a isso da próxima vez.");
		exit(0);
		}
		else if(dado == 1)
		d1 = d1 + 1;
		else if(dado == 2)
		d2 = d2 + 1;
		else if(dado == 3)
		d3 = d3 + 1;
		else if(dado == 4)
		d4 = d4 + 1;
		else if(dado == 5)
		d5 = d5 + 1;
		else
		d6 = d6 + 1;
	}
	
	printf("\nRolagem dos dados encerrada! Verifique a porcentagem de vezes em que determinada face foi escolhida:\n\nDado 1: %.2f\nDado 2: %.2f\nDado 3: %.2f\nDado 4: %.2f\nDado 5: %.2f\nDado 6: %.2f", d1*100/i, d2*100/i, d3*100/i, d4*100/i, d5*100/i, d6*100/i);
} // Fim do programa
