/*
 ============================================================================
 Name        : Recu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

void invertirCadena(char cadena[]);
void actualizarRecuperados(ePais*, int recuperados);
void ordenarCaracteres(char cadena[]);

int main(void)
{
	setbuf(stdout, NULL);

	ePais pais[TAM] =
	{{1,"Ecuador",40,2,10},
	{2,"Argentina",51,2,10},
	{3,"Bolivia",82,3,10}};
	int recuperados = 20;
	char cadena[20] = "jose";

	actualizarRecuperados(pais, recuperados);
	invertirCadena(cadena);
	ordenarCaracteres(cadena);

	return EXIT_SUCCESS;
}

void actualizarRecuperados(ePais* pais, int recuperados)
{
	int id;
	int totalRecuperados;
	int i;

	printf("Ingrese el pais: (1-3)");
	scanf("%d", &id);

	for(i=0;i<3;i++)
	{
		if(i == id)
		{
			totalRecuperados = pais[i].recuperados + recuperados;
			break;
		}
	}

	pais[i].recuperados = totalRecuperados;
	printf("EL TOTAL DE RECUPERADOS ES: %d\n", totalRecuperados);
}

void invertirCadena(char cadena[])
{
	int lon;
	int i;
	int j;
	char aux;

	lon = strlen(cadena);


	for(i=0;i<lon;i++)
	{
		for(j=0;j<lon-2;j++)
		{
			aux = cadena[i];
			cadena[i] = cadena[j];
			cadena[j] = aux;
		}
	}

	printf("EL STRING A LA INVERSA QUEDA :%s\n", cadena);
}

void ordenarCaracteres(char cadena[])
{
	int lon;
	int i;
	int j;
	char aux;

	lon = strlen(cadena);


	for(i=0;i<lon;i++)
	{
		for(j=0;j<lon-2;j++)
		{
			if(cadena[i] < cadena[j] || cadena[i] == cadena[j])
			{
			aux = cadena[i];
			cadena[i] = cadena[j];
			cadena[j] = aux;
			}
		}
	}
	printf("ORDEN ALFABETICO: %s\n", cadena);
}
