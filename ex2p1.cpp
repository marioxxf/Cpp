/*
	Name: ex2p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 19:11
	Description: Programa analisa a temperatura de uma pessoa e classifica-a de acordo com o n�mero inserido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{ // In�cio do programa
	setlocale(LC_ALL, "Portuguese");
	
	float temp; temp = 0.0;
	
	printf("Ol�, usu�rio. Por gentileza, insira sua temperatura (em formato Celsius): "); scanf("%f", &temp);
	
	if(temp < 36)
	printf("\nVoc� est� em estado de Hipotermia (%.f�C). Procure ajuda profissional o mais r�pido poss�vel.", temp);
	else if(temp <= 37.8)
	printf("\nVoc� est� em estado Normal (%.f�C).", temp);
	else if(temp <= 39.5)
	printf("\nVoc� est� em estado de Febre (%.f�C). Cuidado.", temp);
	else if(temp <= 41)
	printf("\nVoc� est� em estado de Febre Alta (%.f�C). Muito cuidado.", temp);
	else
	printf("\nVoc� est� em estado de Hipertermia (%.f�C). Procure ajuda profissional o mais r�pido poss�vel.", temp);
} // Fim do programa
