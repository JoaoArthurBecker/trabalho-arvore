#include <locale>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Calculos.h";
#include "Estruturas.h";
#include "Pessoa.h";
#include "Arvore.h";

void separador()
{
	std::cout << "--------------------------------------------------\n";
}

int main()
{
	int opcao;
	string nome;
	int idade = 0;

	setlocale(LC_ALL, "portuguese");

	std::cout << "Olá, seja bem vindo ao mundo da Estrutura de Dados\n";
	separador();

	std::cout << "Primeiro digite seu nome: \n";
	getline(std::cin, nome);

	std::cout << "Agora digite sua idade: \n";
	scanf_s("%d", &idade);

	Pessoa usuario;

	usuario.nome = nome;
	usuario.idade = idade;

	string nomeUpper = maiusculas(usuario);
	std::cout << "Olá, " << nomeUpper;

	separador();

	std::cout << "Qual programa você quer executar? \n";
	separador();

	std::string opcoes[7] = { "1 - Soma", "2 - Subtração", "3 - Multiplicacao", "4 - Divisao", "5 - Conversão de Graus", "6 - FILA", "7 - Arvore"};

	separador();
	for (int i = 0; i < 7; i++) {
		std::cout << opcoes[i] << "\n";		
	}
	scanf_s("%d", &opcao);



	switch (opcao) {
		case 1:
			separador();
			std::cout << "Estou iniciando soma \n";
			soma();
			break;
		case 2:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			subtracao();
			break;
		case 3:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			multiplicacao();
			break;
		case 4:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			divisao();
			break;
		case 5:
			separador();
			std::cout << "Estou iniciando a Conversão de Graus \n";
			conversao_graus();
			break;
		case 6:
			separador();
			std::cout << "Estou iniciando a FILAAA \n";
			fila();
			break;
		case 7:
			separador();
			std::cout << "Bora pra árvore \n";
			arvore();
			break;
		default:
			std::cout << "Opção invalida \n";

	}
}