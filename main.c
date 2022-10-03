#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 999999

int tamanho_final = 0;

char matriz_final[2000][2000];

void linhaVertical(int valor_linha, int valor_coluna, int tamanho)
{
	for (int linha = valor_linha; linha < valor_linha + tamanho; ++linha)
	{
		matriz_final[linha][valor_coluna] = '|';
	}
	tamanho_final += tamanho;
}

void linhaHorizontal(int valor_linha, int valor_coluna, int tamanho)
{
	for (int coluna = valor_coluna; coluna < valor_coluna + tamanho; ++coluna)
	{
		matriz_final[valor_linha][coluna] = '-';
	}
	tamanho_final += tamanho;
}


void mostraNumero(int linhas, int colunas)
{
	for (int linha = 0; linha < linhas; linha++)
	{
		for (int coluna = 0; coluna < colunas; coluna++)
		{
			printf("%c", matriz_final[linha][coluna]);
		}
		printf("\n");
	}
}

void inicializaNumero(int linhas, int colunas)
{
	for (int linha = 0; linha < linhas; linha++)
	{
		for (int coluna = 0; coluna < colunas; coluna++)
		{
			matriz_final[linha][coluna] = ' ';
		}
	}
}

void mostra_zero(int tamanho, int linhas, int colunas)
{
	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, 0, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaVertical(tamanho + 2, 0, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(linhas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_um(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaVertical(1, colunas - 1, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_dois(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, 0, tamanho);
	linhaHorizontal(linhas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_tres(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 0, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaHorizontal(tamanho + 1, 0, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(linhas - 1, -1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_quatro(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaVertical(1, 0, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_cinco(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, 0, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(colunas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_seis(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, 0, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, 0, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(colunas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_sete(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_oito(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, 0, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, 0, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(colunas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void mostra_nove(int tamanho, int linhas, int colunas)
{

	inicializaNumero(linhas, colunas);

	linhaHorizontal(0, 1, tamanho);
	linhaVertical(1, 0, tamanho);
	linhaVertical(1, colunas - 1, tamanho);
	linhaHorizontal(tamanho + 1, 1, tamanho);
	linhaVertical(tamanho + 2, colunas - 1, tamanho);
	linhaHorizontal(colunas - 1, 1, tamanho);
	mostraNumero(linhas, colunas);
}

void main(int argc, char *argv[])
{
	char numeros[MAX];
	int tamanho, linhas, colunas;

	while (1)
	{
		int indice_numero = 0;

		scanf("%i %s", &tamanho, numeros);

		if (tamanho == 0 && strcmp(numeros, "0") == 0)
			break;

		linhas = (2 * tamanho) + 2;
		colunas = (tamanho + 2);

		char matriz_numeros_final[2000][2000];

		while (indice_numero < strlen(numeros))
		{

			switch (numeros[indice_numero])
			{
			case 48:
				mostra_zero(tamanho, linhas, colunas);
				break;
			case 49:
				mostra_um(tamanho, linhas, colunas);
				break;
			case 50:
				mostra_dois(tamanho, linhas, colunas);
				break;
			case 51:
				mostra_tres(tamanho, linhas, colunas);
				break;
			case 52:
				mostra_quatro(tamanho, linhas, colunas);
				break;
			case 53:
				mostra_cinco(tamanho, linhas, colunas);
				break;
			case 54:
				mostra_seis(tamanho, linhas, colunas);
				break;
			case 55:
				mostra_sete(tamanho, linhas, colunas);
				break;
			case 56:
				mostra_oito(tamanho, linhas, colunas);
				break;
			case 57:
				mostra_nove(tamanho, linhas, colunas);
				break;
			default:
			}

			indice_numero++;
		}
	}
}
