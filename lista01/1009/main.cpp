#include <iostream>

int main()
{
	std::string nome;
	double salario;
	double vendas;

	std::cin >> nome >> salario >> vendas;

	double comissao = salario + ((vendas *15)/100);

	std::cout.precision(2);

	std::cout << "TOTAL = R$ " << std::fixed << comissao << std::endl;


	return 0;
}
