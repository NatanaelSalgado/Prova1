#include<vector>
#include<cmath>
#include"somaElementos.h"

int soma_forca_bruta(std::vector<std::vector<int>>& m) {
	int soma = 0;
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m.size(); j++) {
			soma += m[i][j];
		}
	}
	return soma;
}

int soma_diminuir(std::vector<std::vector<int>>& m, int n) {
	int soma = 0;
	if (n == 1) {
		return m[0][0];
	}
	else {
		for (int i = 0; i < n; i++) {
			soma += m[n - 1][i] + m[i][n - 1];
		}
		return soma + soma_diminuir(m, n - 1);
	}
}

int soma_dividir(std::vector<std::vector<int>>& m, int line_begin, int line_end, int column_begin, int column_end, int n) {
	if (n == 1) {
		return m[0][0];
	}
	else {
		return soma_dividir(m, line_begin, (line_end + line_begin) / 2, column_begin, (column_end + column_begin) / 2, n / 2) + soma_dividir(m, (line_end + line_begin) / 2, line_end, column_begin, (column_end + column_begin) / 2, n / 2) + soma_dividir(m, line_begin, (line_end + line_begin) / 2, (column_end + column_begin) / 2, column_end, n / 2) + soma_dividir(m, (line_end + line_begin) / 2, line_end, (column_end + column_begin) / 2, column_end, n / 2);
	}
}
