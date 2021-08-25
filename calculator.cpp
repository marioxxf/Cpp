/*
	Name: calculator.cpp
	Copyright: 
	Author: Mario Junior
	Date: 19/06/20 11:03
	Description: Programa faz as 4 operações matemáticas básicas, potência e fatorial de um número.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main()
{ // Início do programa
	setlocale(LC_ALL, "Portuguese");

	int escolha, cont;
	double c, d;
	float a, b, ac, p, m;
	a = b = ac = p = m = c = d = 0.0; escolha = cont = 0;
	
	while(1)
	{ // Início do while que repete o programa várias vezes
		puts("\n--------------------------------------------\nSiga as instruções para realizar cálculos!");
					printf("--------------------------------------------\nEscolha uma opção: \n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Potenciação\n6. Fatorial\n\nInsira o número da opção (Para finalizar o programa, digite 1234): ");
					scanf("%d", &escolha); 
	if(escolha == 1234) // Encerramento do programa
	exit(1);
		switch(escolha)
		{ // Início do switch
			case 1: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da operação (%.f+%.f) e: %.f", a, b, (a+b)); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
			
			case 2: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da operação (%.f-%.f) e: %.f", a, b, (a-b)); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
			
			case 3: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da operação (%.fx%.f) e: %.f", a, b, (a*b)); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
			
			case 4: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da operação (%.1f/%.1f) e: %.1f", a, b, (a/b)); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
			
			case 5: printf("\nInsira o valor da base: "); scanf("%lf", &c); printf("\nInsira o valor do expoente: "); scanf("%lf", &d);
			
			cont = cont + 1;
			m = c*c; 
			p = p + m;	
			cont = cont + 1;
			while(d > cont)
			{ // Início do while
			m = p*c; 
			p = m; 
			cont = cont + 1;
			} // Fim do while
			if(d == 0)
			{	
			a = 1;
					printf("O resultado da operação e: %.lf", a); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
			}
			else if(d == 1)
			{
					printf("O resultado da operação e: %.lf", c); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls"); 
			}
			else
			{
					printf("O resultado da operação e: %.lf", p); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			}
					
			break;
			
			case 6: printf("\nInsira o valor desejado: "); scanf("%f", &a);
			b = a - 1;
					printf("%.f x %.f", a, b);
			ac = a*b;
			
			while(b > 1)
			{ // Início do while
				b = b -1;
			ac = ac*b;
					printf(" x %.f", b);
			} // Fim do while
					printf(" = %.f", ac); puts("\n\nPressione alguma tecla para realizar outro cálculo."); getch();  system("cls");
			break;
		
		} // Fim do switch
	escolha = a = b = ac = p = m = cont = c = d = 0; // Limpando a memória para reiniciar o programa sem fechá-lo.
	} // Fim do while que roda o programa várias vezes
} // Fim do programa
