/*
	Name: ex1p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 18:39
	Description: Programa realiza determinados c�lculos de acordo com o n�mero que o usu�rio digitar: 1. Se o n�mero for par, ele ser� elevado ao cubo; 2. Se ele for
	�mpar, ele ser� multiplicado pelo seu dobro; 3. Se o n�mero for zero, ser� mostrado "Voc� digitou zero.".
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

main()
{ // In�cio do programa
	setlocale(LC_ALL, "Portuguese");
	int n, r, d; // n = N�mero | r = Resto | d = Dividendo
	n = r = d = 0;
	
	printf("Insira um n�mero: "); scanf("%d", &n);
	
	d = n/2; // L�gica para descobrir se o n�mero � par ou �mpar (l. 23 e l. 24)
	r = n-(d*2);
	
	if(n == 0)
	printf("O n�mero inserido (%d) � zero.");
	else if(r == 0)
	printf("O n�mero inserido (%d) � par, e ele ser� elevado ao cubo. O resultado �: %d", n, (n*n)*n);
	else
	printf("O n�mero inserido (%d) � �mpar, e ele ser� multiplicado pelo seu dobro. Veja o resultado: %d", n, n*(n*2));
} // Fim do programa
