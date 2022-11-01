#include<vector>
#include<cmath>
#include"somaElementos.h"
#include <iostream>

int main() {

	std::cout << "\nForca Bruta " << std::endl;

	std::vector<std::vector<int>> m({ { 1, 2, 8, 6 }, { 3, 4, 7, 9 }, { 2, 3, 6, 8 }, { 1, 8, 6, 3 } });

	std::cout << soma_forca_bruta(m) << std::endl;

	std::cout << "\nDiminuir " << std::endl;

	std::cout << soma_diminuir(m, 2) << std::endl;

	std::cout << "\nDividir " << std::endl;

	std::cout << soma_dividir(m, 0, 1, 0, 1, 2) << std::endl;
}