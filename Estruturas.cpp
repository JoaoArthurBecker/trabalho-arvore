#include <queue>
#include "Estruturas.h"
using namespace std;

void fila() {
	queue<int> fila;

	bool ler = true;

	
	while (ler == true) {
		int numero;
		int teste;
		printf("Digite um número\n");
		scanf_s("%d", &numero);
		fila.push(numero);

		printf("Continuar lendo? 1 - SIM , 0 - NÃO \n");

		scanf_s("%d", &teste);

		if (teste == 0) {
			ler = false;
		}
	}

	while (!fila.empty()) {
		int n = fila.front();
		fila.pop();
		printf("%d", n);
	}
	
}