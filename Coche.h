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

public:
	Coche();
	Coche(string matricula, string marca, string modelo);
	~Coche();

	void setMatricula(string matricula);
	void setMarca(string marca);
	void setModelo(string modelo);

	string getMatricula();
	string getMarca();
	string getModelo();
};

