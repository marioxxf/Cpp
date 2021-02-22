/*
	Name: 19062020ex1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 19/06/20 11:03
	Description: Programa faz as 4 opera��es matem�ticas b�sicas, pot�ncia e fatorial de um n�mero.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main()
{ // In�cio do programa
	setlocale(LC_ALL, "Portuguese");

	int escolha, cont;
	double c, d;
	float a, b, ac, p, m;
	a = b = ac = p = m = c = d = 0.0; escolha = cont = 0;
	
	while(1)
	{ // In�cio do while que repete o programa v�rias vezes
		puts("\n--------------------------------------------\nSiga as instru��es para realizar c�lculos!");
					printf("--------------------------------------------\nEscolha uma op��o: \n1. Adi��o\n2. Subtra��o\n3. Multiplica��o\n4. Divis�o\n5. Potencia��o\n6. Fatorial\n\nInsira o n�mero da op��o (Para finalizar o programa, digite 1234): ");
					scanf("%d", &escolha); 
	if(escolha == 1234) // Encerramento do programa
	exit(1);
		switch(escolha)
		{ // In�cio do switch
			case 1: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da opera��o (%.f+%.f) e: %.f", a, b, (a+b)); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
			
			case 2: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da opera��o (%.f-%.f) e: %.f", a, b, (a-b)); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
			
			case 3: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da opera��o (%.fx%.f) e: %.f", a, b, (a*b)); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
			
			case 4: printf("\nInsira o valor de A: "); scanf("%f", &a); printf("\nInsira o valor de B: "); scanf("%f", &b);
					printf("O resultado da opera��o (%.1f/%.1f) e: %.1f", a, b, (a/b)); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
			
			case 5: printf("\nInsira o valor da base: "); scanf("%lf", &c); printf("\nInsira o valor do expoente: "); scanf("%lf", &d);
			
			cont = cont + 1;
			m = c*c; 
			p = p + m;	
			cont = cont + 1;
			while(d > cont)
			{ // In�cio do while
			m = p*c; 
			p = m; 
			cont = cont + 1;
			} // Fim do while
			if(d == 0)
			{	
			a = 1;
					printf("O resultado da opera��o e: %.lf", a); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
			}
			else if(d == 1)
			{
					printf("O resultado da opera��o e: %.lf", c); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls"); 
			}
			else
			{
					printf("O resultado da opera��o e: %.lf", p); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			}
					
			break;
			
			case 6: printf("\nInsira o valor desejado: "); scanf("%f", &a);
			b = a - 1;
					printf("%.f x %.f", a, b);
			ac = a*b;
			
			while(b > 1)
			{ // In�cio do while
				b = b -1;
			ac = ac*b;
					printf(" x %.f", b);
			} // Fim do while
					printf(" = %.f", ac); puts("\n\nPressione alguma tecla para realizar outro c�lculo."); getch();  system("cls");
			break;
		
		} // Fim do switch
	escolha = a = b = ac = p = m = cont = c = d = 0; // Limpando a mem�ria para reiniciar o programa sem fech�-lo.
	} // Fim do while que roda o programa v�rias vezes
} // Fim do programa
