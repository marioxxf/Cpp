/*
	Name: prova2ex1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 10/07/20 10:14
	Description: Programa apresenta um menu com 5 op��es de gerenciamento de v�rios sabores de pizza, da Pizzaria DeSousa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{ // In�cio do Programa
	setlocale(LC_ALL, "Portuguese");
	int op, op2, op3, op4; // op = Destinado a selecionar a op��o de sabor da pizza	/ op2 = Destinado � escolha da op��o p�s escolha de sabor / op3 = Destinado a escolha do acompanhamento
	op = op2 = op4 = 0; op3 = 1;

	while(1)
	{ // In�cio do While

		
	system("cls");
	
	puts("		Bem-vindo a Pizzaria DeSousa");
	
	puts("\n\nMenu de Op��es:\n\n1. Pizza Quatro Queijos (Mussarela, Cheddar e Catupiry molhado em azeitonas)\n2. Pizza Muscajola (Mussarela, Calabresa, Peixe, Tomate e Azeitonas)\n3. Pizza Poscaliu (Sardinha, Sal�me, Mussarela de Buffalo e Tomate)\n4. Pizza de Calabresa e Mussarela (Mussarela, Calabresa, Tomate e Azeitonas)\n5. Pizza de Greenlock (Peito de Peru, Mussarela e Tomate)\n6. Pizza Chopekloar (Peito de Peru, Sal�me, Mussarela e Palmito)\n7. Pizza Johnny Depp (Brigadeiro, Morango, Granulado de Chocolaye e MM's)\n8. Pizza Jovem (Brigadeiro, MM'm e Borda Recheada com Chocolate)\n9. Pizza Glamour (Peito de Peru, Palmito, Br�colis, Tomate e Frango Picado)\n10. Pizza Lockdaz (Br�colis, Calabresa, Peito de Peru e Tomate)");

	printf("\n\nEscolha sua op��o: "); scanf("%d", &op); // Escolhendo o sabor da pizza
	
	if(op < 1 and op > 10) // In�nio do Reparo de Erro Humano
	{
		puts("Op��o inv�lida. O programa est� sendo encerrado, refa�a seu pedido.");
		break;
	} // Fim do Reparo de Erro Humano

	switch(op)
	{ // In�cio do Switch da Op��o 1
		case 1: printf("\n\n\n\n\nPizza Quatro Queijos (Mussarela, Cheddar e Catupiry molhado em azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		
		if(op2 == 1) // In�cio das condi��es para tratamento do produto solicitado � pizzaria
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break; // Fim das condi��es para tratamento do produto solicitado � pizzaria
			
		case 2: printf("\n\n\n\n\nPizza Muscajola (Mussarela, Calabresa, Peixe, Tomate e Azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 3: printf("\n\n\n\n\nPizza Poscaliu (Sardinha, Sal�me, Mussarela de Buffalo e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("Pedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 4: printf("\n\n\n\n\nPizza de Calabresa e Mussarela (Mussarela, Calabresa, Tomate e Azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
	
		case 5: printf("\n\n\n\n\nPizza de Greenlock (Peito de Peru, Mussarela e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 6: printf("\n\n\n\n\nPizza Chopekloar (Peito de Peru, Sal�me, Mussarela e Palmito) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		break;
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 7: printf("\n\n\n\n\nPizza Johnny Depp (Brigadeiro, Morango, Granulado de Chocolaye e MM's) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 8: printf("\n\n\n\n\nPizza Jovem (Brigadeiro, MM'm e Borda Recheada com Chocolate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 9: printf("\n\n\n\n\nPizza Glamour (Peito de Peru, Palmito, Br�colis, Tomate e Frango Picado) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
		
		case 10: printf("\n\n\n\n\nPizza Lockdaz (Br�colis, Calabresa, Peito de Peru e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua op��o: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o a op��o escolhida, o endere�o de sua resid�ncia e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecer� no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nV� at� o balc�o de atendimento e procure um recepcionista, informe-o sobre sua op��o de levar o pedido para a casa e aguarde novas instru��es que ele te dar�.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o n�mero do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Op��o inv�lida, reiniciando o programa...");
		exit(1);
		}
		
		if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaran� Antartica 750ml, 3u Dolly Guaran� 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. V� at� o balc�o de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracuj�, escolha e informe sua op��o ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegar�o em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegar�o em breve!");
		}
		break;
	} // Fim do Switch da Op��o 1
	
	puts("\nPressione qualquer tecla para fazer outro pedido..."); 
	getch(); // Programa��o para limpar tela
	} // Fim do While
			
} // Fim do Programa
