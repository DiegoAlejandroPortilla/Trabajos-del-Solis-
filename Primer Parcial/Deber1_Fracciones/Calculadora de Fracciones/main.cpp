/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Diego Portilla 
			 Darwin Valdiviezo
	Fecha de creaci�n: 10 de Mayo del 2022
	Fecha de modificaci�n: 10 de Mayo del 2022
	NRC: 4698
	Nombre de la materia: Estructura de Datos
*/


#include <iostream>
#include <stdlib.h>
#include "Fraccion.h"


using namespace std;


int main(int argc, char** argv) {


	Fraccion* fraccion = new Fraccion();

	fraccion->calcular();
	fraccion->imprimir();


	return 0;
}
