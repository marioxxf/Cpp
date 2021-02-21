/*
	Name: ex2p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 19:11
	Description: Programa analisa a temperatura de uma pessoa e classifica-a de acordo com o número inserido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{ // Início do programa
	setlocale(LC_ALL, "Portuguese");
	
	float temp; temp = 0.0;
	
	printf("Olá, usuário. Por gentileza, insira sua temperatura (em formato Celsius): "); scanf("%f", &temp);
	
	if(temp < 36)
	printf("\nVocê está em estado de Hipotermia (%.f°C). Procure ajuda profissional o mais rápido possível.", temp);
	else if(temp <= 37.8)
	printf("\nVocê está em estado Normal (%.f°C).", temp);
	else if(temp <= 39.5)
	printf("\nVocê está em estado de Febre (%.f°C). Cuidado.", temp);
	else if(temp <= 41)
	printf("\nVocê está em estado de Febre Alta (%.f°C). Muito cuidado.", temp);
	else
	printf("\nVocê está em estado de Hipertermia (%.f°C). Procure ajuda profissional o mais rápido possível.", temp);
} // Fim do programa
