/*
	Name: ex1p1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 18/02/21 18:39
	Description: Programa realiza determinados cálculos de acordo com o número que o usuário digitar: 1. Se o número for par, ele será elevado ao cubo; 2. Se ele for
	ímpar, ele será multiplicado pelo seu dobro; 3. Se o número for zero, será mostrado "Você digitou zero.".
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

main()
{ // Início do programa
	setlocale(LC_ALL, "Portuguese");
	int n, r, d; // n = Número | r = Resto | d = Dividendo
	n = r = d = 0;
	
	printf("Insira um número: "); scanf("%d", &n);
	
	d = n/2; // Lógica para descobrir se o número é par ou ímpar (l. 23 e l. 24)
	r = n-(d*2);
	
	if(n == 0)
	printf("O número inserido (%d) é zero.");
	else if(r == 0)
	printf("O número inserido (%d) é par, e ele será elevado ao cubo. O resultado é: %d", n, (n*n)*n);
	else
	printf("O número inserido (%d) é ímpar, e ele será multiplicado pelo seu dobro. Veja o resultado: %d", n, n*(n*2));
} // Fim do programa
