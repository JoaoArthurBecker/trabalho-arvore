#include "Pessoa.h"
#include <algorithm>


string maiusculas(Pessoa pessoa)
{
	std::transform(pessoa.nome.begin(), pessoa.nome.end(), pessoa.nome.begin(), ::toupper);
	return pessoa.nome;
}