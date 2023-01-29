#include <iostream>
#include <vector>
#include "Persona.h"
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Cliente.h"
#include "Coche.h"
#include "JefeDeZona.h"
using namespace std;
//Variables
string nombre, apellidos, dni, direccion, telefono, num_fax, telefonoMovil;
double salario, bonoAnual, porcentajeComisiones;
int aniosLaboral, puesto, areaVenta;
char tipo;
bool despacho;

Cliente* cliente;
Coche* carro;
Secretario* secretario;
Vendedor* vendedor;
vector<Empleado*> empleados;

//Lista Clientes
Cliente* client1 = new Cliente("Monopolio", "Richmann", "00998811", "av.La molina 1111", "97544319");
Cliente* client2 = new Cliente("Jnohnyy Javier", "Test", "45001389", "av.Michael GRAU 123", "3034532");
Cliente* client3 = new Cliente("Henry", "Spencer Friend", "94782314", "jr.Ese de ahi 007", "3234532");
vector<Cliente*> clientes { client1, client2, client3};

//Lista Carros
Coche* carro1 = new Coche("AXB358", "Honda", "Civic");
Coche* carro2 = new Coche("QWE314", "Toyota", "Corolla");
Coche* carro3 = new Coche("AFE324", "Nissan", "Versa");
Coche* carro4 = new Coche("FDW324", "Audi", "A3 Sedan");
Coche* carro5 = new Coche("GDW134", "BMW", "X3");
Coche* carro6 = new Coche("CDA245", "Chevrolet", "Sedan");
Coche* carro7 = new Coche("AXB359", "Honda", "Civic");
Coche* carro8 = new Coche("QWE315", "Toyota", "Corolla");
Coche* carro9 = new Coche("AFE326", "Nissan", "Versa");
Coche* carro10 = new Coche("FDW325", "Audi", "A3 Sedan");
Coche* carro11 = new Coche("GDW135", "BMW", "X3");
Coche* carro12 = new Coche("CDA246", "Chevrolet", "Sedan");
vector<Coche*> carros{ carro1 , carro2, carro3, carro4, carro5,
carro6,carro7, carro8, carro9, carro10, carro11, carro12 };

//Lista Secretarios
Secretario* secretario1 = new Secretario("Daniel", "Villarreal", "7890123", "av.ttt 1111", "3234532", 20000, 'a', 2, "313443524");
Secretario* secretario2 = new Secretario("Francisco Javier", "Chaney", "4571389", "av.gytyry 123", "3234532", 30000, 'a', 1, "313443524");
Secretario* secretario3 = new Secretario("Shirley", "Quijote Nunes", "9478314", "jr.dsa 336", "3234532", 40000, 'a', 3, "313443524");
Secretario* secretario4 = new Secretario("Lorena Jimenez", "Hooper", "8937234", "jr.dasd 222", "3234532", 50000, 'a', 1, "313443524");
Secretario* secretario5 = new Secretario("Andre Pedro", "Whitehead", "8827314", "jr.dasd 233", "3234532", 60000, 'a', 1, "313443524");
Secretario* secretario6 = new Secretario("Pier Burke", "Byrd", "8224414", "ca.rwesda 775", "3234532", 80000, 'a', 3, "313443524");
Secretario* secretario7 = new Secretario("Victor Victorry", "Monroe", "5828344", "ca.yrtye 4234", "3234532", 70000, 'a', 2, "313443524");
vector<Secretario*> secretarios{ secretario1 , secretario2, secretario3, secretario4, secretario5,
secretario6,secretario7 };

//Lista Vendedores
Vendedor* vendedor1 = new Vendedor("Javier", "Irigoyen Matos", "4800271", "Av. Benavides 560", "4432345", 1232133, 'b', carro1, "993994620", 1, 5);
Vendedor* vendedor2 = new Vendedor("Daniel", "Roth", "4356343", "Av. rq 525", "3456425", 123123.66, 'b', carro2, "993994621", 2, 4);
Vendedor* vendedor3 = new Vendedor("Francisco", "Green", "5426843", "Av. gs 567", "4567424", 321312.66, 'b', carro3, "993994622", 3, 2);
Vendedor* vendedor4 = new Vendedor("Shirley", "Frey", "3781954", "Av. hd 356", "1111111", 42069.69, 'b', carro4, "993994623", 4, 0);
Vendedor* vendedor5 = new Vendedor("Lorena", "Cain", "7891056", "Av. sh 853", "2222222", 23213, 'b', carro5, "993994624", 1, 1);
Vendedor* vendedor6 = new Vendedor("Abbie", "Monroe", "2415789", "Av. wr 145", "3333333", 23123, 'b', carro6, "993994625", 4, 2);
Vendedor* vendedor7 = new Vendedor("Kierra ", "Austin", "1357903", "Av. ut 986", "4444444", 3123312, 'b', carro7, "993994626", 5, 3);
vector<Vendedor*> vendedores{ vendedor1 , vendedor2, vendedor3, vendedor4, vendedor5,
vendedor6,vendedor7 };

//Lista Jefes
JefeDeZona* jefe1 = new JefeDeZona("Kristopher Pepito", "Nuñez Tejada", "1340455", "Calle Las Golondrinas 123", "44185141", 500000, 'c', true, secretario1, carro11, vendedor1);
JefeDeZona* jefe2 = new JefeDeZona("Fletcher Thomas", "Atkinson Tejada", "2233505", "Calle Las Golondrinas 123", "44185141", 500000, 'c', true, secretario2, carro12, vendedor2);
vector<JefeDeZona*> jefes{ jefe1 , jefe2, };

void menu() {
	cout << "\n::::::::::::MENU:::::::::::::" << endl;
	cout << "1.- Agregar Empleado" << endl;
	cout << "2.- Listar Todos Los Empleados" << endl;
	cout << "3.- Modificar Empleado" << endl;
	cout << "4.- Acciones Especificas Del Empleado" << endl;
	cout << "5.- Eliminar Empleado" << endl;
	cout << "6.- Salir" << endl;
}
void menuVendedor() {
	cout << "\n::::::::::::MENU VENDEDOR:::::::::::::" << endl;
	cout << "1.- Agregar Cliente" << endl;
	cout << "2.- Listar Todos Los Clientes" << endl;
	cout << "3.- Eliminar Cliente" << endl;
	cout << "4.- Cambiar Carro" << endl;
	cout << "5.- Salir" << endl;
}
void menuJefe() {
	cout << "\n::::::::::::MENU JEFE:::::::::::::" << endl;
	cout << "1.- Agregar Vendedor" << endl;
	cout << "2.- Listar Todos Los Vendedoeres" << endl;
	cout << "3.- Eliminar Vendedor" << endl;
	cout << "4.- Cambiar Carro" << endl;
	cout << "5.- Cambiar Secretario" << endl;
	cout << "6.- Salir" << endl;
}

Cliente* leerCliente() {
	cout << "Ingrese Nombre(s) del Cliente: ";
	getline(cin >> ws, nombre);
	cout << "Ingrese Apellido(s) del Cliente: ";
	getline(cin >> ws, apellidos);
	cout << "Ingrese el DNI del Cliente: ";
	cin >> dni;
	cout << "Ingrese la Direccion del Cliente: ";
	getline(cin >> ws, direccion);
	cout << "Ingrese el Numero de Telefono del Cliente: ";
	cin >> telefono;
	return new Cliente(nombre, apellidos, dni, direccion, telefono);
}
Vendedor* leerVendedor() {
	cout << "Ingrese Nombre(s) del Vendedeor: ";
	getline(cin >> ws, nombre);
	cout << "Ingrese Apellido(s) del Vendedeor: ";
	getline(cin >> ws, apellidos);
	cout << "Ingrese el DNI del Vendedeor: ";
	cin >> dni;
	cout << "Ingrese la Direccion del Vendedeor: ";
	getline(cin >> ws, direccion);
	cout << "Ingrese el Numero de Telefono del Vendedeor: ";
	cin >> telefono;
	cout << "Ingrese Salario Anual del Vendedor:\n";
	cin >> salario;
	string m;
	cout << "Listado de Carros:" << endl;
	for (int i = 0; i < carros.size(); i++)
		carros[i]->mostrar();
	cout << "\nIngrese la matricula del carro a asignar: " << endl;
	cin >> m;
	for (int i = 0; i < carros.size(); i++)
	{
		if (carros[i]->getMatricula() == m)
		{
			carro = carros[i];
		}
	}
	cout << "Ingrese Telefono Movil del Vendedor:\n";
	cin >> telefonoMovil;
	cout << "Ingrese el Area de Venta del Vendedor:\n";
	cout << "1. ASISTENTE COMERCIAL\t 2. VENDEDOR\t 3. EJECUTIVO COMERCIAL\t 4. GERENTE COMERCIAL\t 5. DIRECTOR GERENCIAL\n";
	cin >> areaVenta;
	cout << "Ingrese el Porcentaje de Comisiones del Vendedor:\n";
	cin >> porcentajeComisiones;

	return new Vendedor(nombre, apellidos, dni, direccion, telefono, salario, tipo, carro, telefonoMovil,
		areaVenta, porcentajeComisiones);
}
Empleado* leerEmpleado() {
	cout << "Ingrese Nombre(s) del Empleado: ";
	getline(cin >> ws, nombre);
	cout << "Ingrese Apellido(s) del Empleado: ";
	getline(cin >> ws, apellidos);
	cout << "Ingrese el DNI del Empleado: ";
	cin >> dni;
	cout << "Ingrese la Direccion del Empleado: ";
	getline(cin >> ws, direccion);
	cout << "Ingrese el Numero de Telefono del Empleado: ";
	cin >> telefono;
	cout << "Ingrese el Tipo de Empleado(a,b o c):\n";
	cout << "a. Secretario\t b. Vendedor\t c. Jefe De Zona\n";
	cin >> tipo;
	tipo = tolower(tipo);
	if (tipo == 'a') {
		cout << "Ingrese Salario Anual del Secretario:\n";
		cin >> salario;
		cout << "Ingrese Puesto del Secretario:\n";
		cout << "1. DIRECCION\t 2. ALTA_DIRECCION\t 3. GERENCIA";
		cin >> puesto;
		cout << "Ingrese numero de FAX del Secretario:\n";
		cin >> num_fax;

		return new Secretario(nombre, apellidos, dni, direccion, telefono, salario, tipo, puesto, num_fax);
	}
	if (tipo == 'b') {
		cout << "Ingrese Salario Anual del Vendedor:\n";
		cin >> salario;

		string m;
		cout << "Listado de Carros:" << endl;
		for (int i = 0; i < carros.size(); i++)
			carros[i]->mostrar();
		cout << "\nIngrese la matricula del carro a asignar: " << endl;
		cin >> m;
		for (int i = 0; i < carros.size(); i++)
		{
			if (carros[i]->getMatricula() == m)
			{
				carro = carros[i];
			}
		}
		cout << "Ingrese Telefono Movil del Vendedor:\n";
		cin >> telefonoMovil;
		cout << "Ingrese el Area de Venta del Vendedor:\n";
		cout << "1. ASISTENTE COMERCIAL\t 2. VENDEDOR\t 3. EJECUTIVO COMERCIAL\t 4. GERENTE COMERCIAL\t 5. DIRECTOR GERENCIAL\n";
		cin >> areaVenta;
		cout << "Ingrese el Porcentaje de Comisiones del Vendedor:\n";
		cin >> porcentajeComisiones;

		return new Vendedor(nombre, apellidos, dni, direccion, telefono, salario, tipo, carro, telefonoMovil,
			areaVenta, porcentajeComisiones);
	}
	if (tipo == 'c') {
		cout << "El Jefe de Zona Tiene Despacho (Y/N):\n";
		char z;
		cin >> z;
		z = tolower(z);
		if (z == 'y')
			despacho = true;
		else despacho = false;

		string d;
		cout << "Ingrese el DNI del Secretario que quiere asignar: " << endl;
		cin >> d;
		for (int i = 0; i < secretarios.size(); i++)
		{
			if (secretarios[i]->getDni() == d)
			{
				secretario = secretarios[i];
			}
		}
		string m;
		cout << "Listado de Carros:" << endl;
		for (int i = 0; i < carros.size(); i++)
			carros[i]->mostrar();
		cout << "\nIngrese la matricula del carro a asignar: " << endl;
		cin >> m;
		for (int i = 0; i < carros.size(); i++)
		{
			if (carros[i]->getMatricula() == m)
			{
				carro = carros[i];
			}
		}
		string c;
		cout << "Ingrese el DNI del Vendedor que quiere asignar: " << endl;
		cin >> c;
		for (int i = 0; i < vendedores.size(); i++)
		{
			if (vendedores[i]->getDni() == c)
			{
				vendedor = vendedores[i];
			}
		}
		return new JefeDeZona(nombre, apellidos, dni, direccion, telefono, salario, tipo, despacho, secretario, carro, vendedor);
	}
}


//Cambiar Secretario/Carros aun no funciona.... :(
void opercaciones() {
	string n;
	int t;
	int op;
	cout << "Especifique su tipo de empleo:" << endl;
	cout << "1. Vendedor   2. Jefe De Zona" << endl;
	cin >> t;
	if (t == 1)
	{
		cout << "Ingrese su DNI:" << endl;
		cin >> n;
		for (int i = 0; i < vendedores.size(); i++)
		{
			if (vendedores[i]->getDni() == n)
			{
				cout << "Hola vendedor: " << vendedores[i]->getNombre() << " " << vendedores[i]->getApellidos() << endl;
				do {
					menuVendedor();
					cout << "Ingrese su opcion: ";
					cin >> op;
					switch (op)
					{
					case 1: {
						Cliente* cliente = leerCliente();
						clientes.push_back(cliente);
					}break;
					case 2: {
						cout << "Listado de Clientes:" << endl;
						for (int i = 0; i < clientes.size(); i++)
							clientes[i]->mostrar();
					}break;
					case 3: {
						string z;
						cout << "Ingrese el DNI del cliente que desea eliminar: " << endl;
						cin >> z;
						for (int i = 0; i < clientes.size(); i++)
						{
							if (clientes[i]->getDni() == z)
							{
								cout << "\nEliminado: " << clientes[i]->getNombre() << " " << clientes[i]->getApellidos() << endl;
								clientes.erase(clientes.begin() + i);
							}
						}
					}break;
					case 4: {
						string m;
						cout << "Su carro asignado es:" << endl;
						carro = vendedores[i]->getCarro();
						carro->mostrar();
						cout << "\nIngrese la matricula del nuevo carro a asignar: " << endl;
						cin >> m;
						for (int j = 0; j < carros.size(); j++)
						{
							if (carros[j]->getMatricula() == m)
							{
								carro = carros[j];
								vendedores[i]->cambiarCoche(carro);
							}
						}
						cout << "Su nuevo carro es: " << endl;
						carro = vendedores[i]->getCarro();
						carro->mostrar();
					}break;
					}
				} while (op != 5);
				break;
			}
		}
		{
		}
	}

	if (t == 2) {
		cout << "Ingrese su DNI:" << endl;
		cin >> n;
		for (int i = 0; i < jefes.size(); i++)
		{
			if (jefes[i]->getDni() == n)
			{
				cout << "Hola Jefe: " << jefes[i]->getNombre() << " " << jefes[i]->getApellidos() << endl;
				do {
					menuJefe();
					cout << "Ingrese su opcion: ";
					cin >> op;
					switch (op)
					{
					case 1: {
						Vendedor* vendedor = leerVendedor();
						vendedores.push_back(vendedor);
					}break;
					case 2: {
						cout << "Listado de Vendedores:" << endl;
						for (int i = 0; i < vendedores.size(); i++)
							vendedores[i]->imprimir();
					}break;
					case 3: {
						string d;
						cout << "Ingrese el DNI del Vendedor que desea eliminar: " << endl;
						cin >> d;
						for (int i = 0; i < vendedores.size(); i++)
						{
							if (vendedores[i]->getDni() == d)
							{
								cout << "\nEliminado: " << vendedores[i]->getNombre() << " " << vendedores[i]->getApellidos() << endl;
								vendedores.erase(vendedores.begin() + i);
							}
						}
					}break;
					case 4: {
						cout << "\nSu Carro asignado es: " << endl;
						carro = jefes[i]->getCarro();
						carro->mostrar();
						cout << "\nIngrese la matricula del nuevo Carro a asignar: " << endl;
						string m;
						cin >> m;
						for (int j = 0; j < carros.size(); j++)
						{
							if (carros[j]->getMatricula() == m)
							{
								carro = carros[j];
								jefes[i]->cambiarCarro(carros[j]);
							}
						}
						cout << "\nSu nuevo Carro es: " << endl;
						carro = jefes[i]->getCarro();
						carro->mostrar();
					}break;
					case 5: {
						cout << "\nSu Secretario asignado es:" << endl;
						secretario = jefes[i]->getSecretario();
						secretario->imprimir();
						cout << "\nIngrese el DNI de su nuevo Secretario a asignar: " << endl;
						string m;
						cin >> m;
						for (int j = 0; j < secretarios.size(); j++)
						{
							if (secretarios[j]->getDni() == m)
							{
								secretario = secretarios[j];
								jefes[i]->cambiarSecretario(secretario);
							}
						}
						cout << "\nSu nuevo Secretario es: " << endl;
						secretario = jefes[i]->getSecretario();
						secretario->imprimir();
					}
					default:
						break;
					}
				} while (op != 6);
				break;
			}
		}
	}
}
int main()
{
	empleados.push_back(vendedor1);
	empleados.push_back(vendedor2);
	empleados.push_back(vendedor3);
	empleados.push_back(vendedor4);
	empleados.push_back(vendedor5);
	empleados.push_back(vendedor6);
	empleados.push_back(vendedor7);
	empleados.push_back(secretario1);
	empleados.push_back(secretario2);
	empleados.push_back(secretario3);
	empleados.push_back(secretario4);
	empleados.push_back(secretario5);
	empleados.push_back(secretario6);
	empleados.push_back(secretario7);
	empleados.push_back(jefe1);
	empleados.push_back(jefe2);

	int opcion;
	do {
		menu();
		cout << "Ingrese su opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			Empleado* empleado = leerEmpleado();
			empleados.push_back(empleado);
		} break;

		case 2: {
			cout << "Listado de Empleados:" << endl;
			for (int i = 0; i < empleados.size(); i++)
				empleados[i]->imprimir();
		} break;

		case 3: {
			string d;
			cout << "Ingrese el DNI del Empleado que desea modificar: " << endl;
			cin >> d;
			cout << "Ingrese sus nuevos datos:" << endl;
			for (int i = 0; i < empleados.size(); i++)
			{
				if (empleados[i]->getDni() == d)
				{
					Empleado* empleado = leerEmpleado();
					empleados[i] = empleado;
					cout << "Se ha modificado con exito! " << endl;
				}
			}
		} break;
		case 4: {
			opercaciones();
		} break;
		case 5: {
			string d;
			cout << "Ingrese el DNI del empleado que desea eliminar: " << endl;
			cin >> d;
			for (int i = 0; i < empleados.size(); i++)
			{
				if (empleados[i]->getDni() == d)
				{
					cout << "\nEliminado: " << empleados[i]->getNombre() << " " << empleados[i]->getApellidos() << endl;
					empleados.erase(empleados.begin() + i);
				}
			}
		} break;

		default:
			break;
		}
	} while (opcion != 6);

	return 0;
}