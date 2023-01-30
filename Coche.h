#pragma once
#include <iostream>
#include<string>
using namespace std;

class Coche
{
private:
	string matricula;
	string marca;
	string modelo;
	bool asignado;

public:
	Coche();
	Coche(string matricula, string marca, string modelo, bool asignado);
	~Coche();

	void setAsignado(bool asignado);
	void setMatricula(string matricula);
	void setMarca(string marca);
	void setModelo(string modelo);

	bool getAsignado();
	string getMatricula();
	string getMarca();
	string getModelo();

	virtual void mostrar();
};

