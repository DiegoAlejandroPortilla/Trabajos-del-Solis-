/*
	*Universidad de las Fuerzas Armadas "ESPE"
    *Enunciado del problema:
	    *Programa que realize hash cerrado de enteros y strings .
     *Autores:
        *Curso de Estructura de Datos NRC: 4698
	*Fecha de creacion: 
        * 24-06-2022
	*Fecha de modificacion:
        * 29-06-2022
    *GitHub del grupo:	
        *https://github.com/DavidGLeal/4698_Ordenamientos
*/
#pragma once
#include "TablaCerradaEnteros.h"
#include "TablaCerradaEnteros.cpp"

class TablaSondeoLinealInt : public TablaCerradaEnteros
{
	public:
		TablaSondeoLinealInt();
		~TablaSondeoLinealInt();
		int hash2(int) override;
};