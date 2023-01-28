#pragma once
#include "Persona.h"
class Cliente : public Persona
{
public:
	//Cliente();
	Cliente(string nombre, string apellidos, string dni, string direccion, string telefono);
	~Cliente();
};

