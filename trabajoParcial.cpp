#include <iostream>
#include <vector>
#include "Persona.h"
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Cliente.h"
#include "Coche.h"
using namespace std;

void menu() {
    cout << "::::::::::::MENU:::::::::::::" << endl;
    cout << "1.- Registrar nuevo empleado" << endl;
    cout << "2.- Listado registro de Solicitudes" << endl;
    cout << "3.- Eliminar registro de Solicitud" << endl;
    cout << "4.- Reporte solicitudes realizadas de forma virtual" << endl;
    cout << "5.- Reporte de solicitudes con montos superiores a S/. 5000" << endl;
    cout << "6.- Salir" << endl;
}
Cliente* leerCliente() {
    string nombre;
    string apellidos;
    string dni;
    string direccion;
    string telefono;

    cout << "Ingrese el nombre del cliente:";
    cin >> nombre;
    cout << "Ingrese los apellidos del cliente:";
    cin >> apellidos;
    cout << "Ingrese el DNI del cliente:";
    cin >> dni;
    cout << "Ingrese la direccion del cliente:";
    cin >> direccion;
    cout << "Ingrese el telefono del cliente:";
    cin >> telefono;
    return new Cliente(nombre, apellidos, dni, direccion, telefono);
}

//Vendedor* leerVendedor() {
//    string nombre;
//    string apellidos;
//    string dni;
//    string direccion;
//    string telefono;

//    cout << "Ingrese el nombre del cliente:";
//    cin >> nombre;
//    cout << "Ingrese los apellidos del cliente:";
//    cin >> apellidos;
//    cout << "Ingrese el DNI del cliente:";
 //   cin >> dni;
 //   cout << "Ingrese la direccion del cliente:";
 //   cin >> direccion;
  //  cout << "Ingrese el telefono del cliente:";
  //  cin >> telefono;
    //return new Vendedor(nombre, apellidos, dni, direccion, telefono);
//}
int main()
{
    vector<Empleado*> empleados;
    vector<Coche*> carros;

    //carros
    Coche* carro1 = new Coche("AXB358", "Honda","Civic");
    Coche* carro2 = new Coche("QWE314", "Toyota", "Corolla");
    Coche* carro3 = new Coche("AFE324", "Nissan", "Versa");
    Coche* carro4 = new Coche("FDW324", "Audi", "A3 Sedan");
    Coche* carro5 = new Coche("GDW134", "BMW", "X3");
    Coche* carro6 = new Coche("CDA245", "Chevrolet", "Joy Sedan");
    Coche* carro7 = new Coche("AXB359", "Honda", "Civic");
    Coche* carro8 = new Coche("QWE315", "Toyota", "Corolla");
    Coche* carro9 = new Coche("AFE326", "Nissan", "Versa");
    Coche* carro10 = new Coche("FDW325", "Audi", "A3 Sedan");
    Coche* carro11 = new Coche("GDW135", "BMW", "X3");
    Coche* carro12 = new Coche("CDA246", "Chevrolet", "Joy Sedan");

    carros.push_back(carro1);
    carros.push_back(carro2);
    carros.push_back(carro3);
    carros.push_back(carro4);
    carros.push_back(carro5);
    carros.push_back(carro6);
    carros.push_back(carro7);
    carros.push_back(carro8);
    carros.push_back(carro9);
    carros.push_back(carro10);
    carros.push_back(carro11);
    carros.push_back(carro12);

    //vendedores
    Vendedor* vendedor1 = new Vendedor("Javier", "Irigoyen Matos", "48002717", "Av. Benavides 560", "4432345", 2200, 3, carro1, "993994620", 1, 5);
    Vendedor* vendedor2 = new Vendedor("Daniel", "qw we", "4356437", "Av. rq 525", "3456425", 2500, 1, carro3, "993994621", 3, 6);
    Vendedor* vendedor3 = new Vendedor("Francisco", "as as", "5468435", "Av. gs 567", "4567424", 2700, 4, carro2, "993994622", 2, 7);
    Vendedor* vendedor4 = new Vendedor("Shirley", "ew ew", "3789543", "Av. hd 356", "1111111", 2900, 2, carro5, "993994623", 1, 8);
    Vendedor* vendedor5 = new Vendedor("Lorena", "tr tr", "7890563", "Av. sh 853", "2222222", 3000, 4, carro6, "993994624", 5, 1);
    Vendedor* vendedor6 = new Vendedor("Andre", "er er", "2457896", "Av. wr 145", "3333333", 3200, 1, carro4, "993994625", 4, 2);
    Vendedor* vendedor7 = new Vendedor("Pier", "uy uy", "2468975", "Av. ut 986", "4444444", 3500, 3, carro7, "993994626", 5, 3);
    Vendedor* vendedor8 = new Vendedor("Victor", "qr qr", "4789033", "Av. jg 345", "5555555", 4000, 4, carro9, "993994627", 3, 4);
    empleados.push_back(vendedor1);
    empleados.push_back(vendedor2);
    empleados.push_back(vendedor3);
    empleados.push_back(vendedor4);
    empleados.push_back(vendedor5);
    empleados.push_back(vendedor6);

    //secretarios
    Secretario* secretario1 = new Secretario("SJavier","Irigoyen Matos", "1234534","av.dsa 324", "3234532", 1100,2,3,"313443524");
    Secretario* secretario2 = new Secretario("SDaniel", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario3 = new Secretario("SFrancisco", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario4 = new Secretario("SShirley", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario5 = new Secretario("SLorena", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario6 = new Secretario("SAndre", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario7 = new Secretario("SPier", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    Secretario* secretario8 = new Secretario("SVictor", "qw we", "1234534", "av.dsa 324", "3234532", 1100, 2, 3, "313443524");
    empleados.push_back(secretario1);
    empleados.push_back(secretario2);
    empleados.push_back(secretario3);
    empleados.push_back(secretario4);
    empleados.push_back(secretario5);
    empleados.push_back(secretario6);
    //jefe de zona


    for (int i = 0; i < empleados.size(); i++) {
        empleados[i]->imprimir();
    }
    //system("pause");
}
