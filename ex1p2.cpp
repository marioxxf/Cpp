/*
	Name: prova2ex1.cpp
	Copyright: 
	Author: Mario Junior
	Date: 10/07/20 10:14
	Description: Programa apresenta um menu com 5 opções de gerenciamento de vários sabores de pizza, da Pizzaria DeSousa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

main()
{ // Início do Programa
	setlocale(LC_ALL, "Portuguese");
	int op, op2, op3, op4; // op = Destinado a selecionar a opção de sabor da pizza	/ op2 = Destinado à escolha da opção pós escolha de sabor / op3 = Destinado a escolha do acompanhamento
	op = op2 = op4 = 0; op3 = 1;

	while(1)
	{ // Início do While

		
	system("cls");
	
	puts("		Bem-vindo a Pizzaria DeSousa");
	
	puts("\n\nMenu de Opções:\n\n1. Pizza Quatro Queijos (Mussarela, Cheddar e Catupiry molhado em azeitonas)\n2. Pizza Muscajola (Mussarela, Calabresa, Peixe, Tomate e Azeitonas)\n3. Pizza Poscaliu (Sardinha, Salâme, Mussarela de Buffalo e Tomate)\n4. Pizza de Calabresa e Mussarela (Mussarela, Calabresa, Tomate e Azeitonas)\n5. Pizza de Greenlock (Peito de Peru, Mussarela e Tomate)\n6. Pizza Chopekloar (Peito de Peru, Salâme, Mussarela e Palmito)\n7. Pizza Johnny Depp (Brigadeiro, Morango, Granulado de Chocolaye e MM's)\n8. Pizza Jovem (Brigadeiro, MM'm e Borda Recheada com Chocolate)\n9. Pizza Glamour (Peito de Peru, Palmito, Brócolis, Tomate e Frango Picado)\n10. Pizza Lockdaz (Brócolis, Calabresa, Peito de Peru e Tomate)");

	printf("\n\nEscolha sua opção: "); scanf("%d", &op); // Escolhendo o sabor da pizza
	
	if(op < 1 and op > 10) // Inínio do Reparo de Erro Humano
	{
		puts("Opção inválida. O programa está sendo encerrado, refaça seu pedido.");
		break;
	} // Fim do Reparo de Erro Humano

	switch(op)
	{ // Início do Switch da Opção 1
		case 1: printf("\n\n\n\n\nPizza Quatro Queijos (Mussarela, Cheddar e Catupiry molhado em azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		
		if(op2 == 1) // Início das condições para tratamento do produto solicitado à pizzaria
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break; // Fim das condições para tratamento do produto solicitado à pizzaria
			
		case 2: printf("\n\n\n\n\nPizza Muscajola (Mussarela, Calabresa, Peixe, Tomate e Azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 3: printf("\n\n\n\n\nPizza Poscaliu (Sardinha, Salâme, Mussarela de Buffalo e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("Pedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 4: printf("\n\n\n\n\nPizza de Calabresa e Mussarela (Mussarela, Calabresa, Tomate e Azeitonas) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
	
		case 5: printf("\n\n\n\n\nPizza de Greenlock (Peito de Peru, Mussarela e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 6: printf("\n\n\n\n\nPizza Chopekloar (Peito de Peru, Salâme, Mussarela e Palmito) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		break;
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 7: printf("\n\n\n\n\nPizza Johnny Depp (Brigadeiro, Morango, Granulado de Chocolaye e MM's) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 8: printf("\n\n\n\n\nPizza Jovem (Brigadeiro, MM'm e Borda Recheada com Chocolate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 9: printf("\n\n\n\n\nPizza Glamour (Peito de Peru, Palmito, Brócolis, Tomate e Frango Picado) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		else if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
		
		case 10: printf("\n\n\n\n\nPizza Lockdaz (Brócolis, Calabresa, Peito de Peru e Tomate) escolhida!\n1. Receber o pedido em sua casa\n2. Comer no local\n3. Levar para casa sem o programa de delivery\n4. Solicitar acompanhamento (refrigerante, batatas fritas, suco natural) para viagem\n5. Cancelar o pedido\n\nEscolha sua opção: ");
		scanf("%d", &op2);
		if(op2 == 1)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o a opção escolhida, o endereço de sua residência e sua senha obtida aqui.");
		break;
		}
		
		else if(op2 == 2)
		{
		puts("\nAguarde, quando seu pedido estiver pronto sua senha aparecerá no monitor acima.");
		break;
		}
		
		else if(op2 == 3)
		{
		puts("\nVá até o balcão de atendimento e procure um recepcionista, informe-o sobre sua opção de levar o pedido para a casa e aguarde novas instruções que ele te dará.");
		break;
		}
		
		else if(op2 == 4)
		{
		printf("\n\n1. Refrigerante\n2. Suco Natural\n3. Batatas fritas\n4. Churros de Doce de Leite\n\nInsira o número do acompanhamento desejado: "); scanf("%d", &op3);
		}
		
		if(op3 < 1 || op3 > 4)
		{
		printf("Opção inválida, reiniciando o programa...");
		exit(1);
		}
		
		if(op2 == 5)
		{
		puts("\nPedido cancelado, sua senha foi retirada da fila de espera. Obrigado.");
		break;
		}
		
		if(op3 == 1)
		{
		puts("\nTemos 24u Pepsi 750ml, 15u Coca-Cola 750ml, 7u Guaraná Antartica 750ml, 3u Dolly Guaraná 500ml, 38u Dolly Colla 500ml e 11u Fanta Uva 2L. Vá até o balcão de atendimento e escolha.");
		}
		else if(op3 == 2)
		{
		puts("\nTemos Suco Natural de Abacaxi, Suco Natural de Laranja e Suco Natural de Maracujá, escolha e informe sua opção ao recepcionista.");
		}
		else if(op3 == 3)
		{
		puts("\nAguarde em sua mesa, suas fritas chegarão em breve!");
		}
		else if(op2 == 4)
		{
		puts("\nAguarde em sua mesa, seus churros chegarão em breve!");
		}
		break;
	} // Fim do Switch da Opção 1
	
	puts("\nPressione qualquer tecla para fazer outro pedido..."); 
	getch(); // Programação para limpar tela
	} // Fim do While
			
} // Fim do Programa
