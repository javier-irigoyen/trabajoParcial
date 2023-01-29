#include <iostream>
#include <vector>
#include "Persona.h"
#include "Empleado.h"
#include "Secretario.h"
#include "Vendedor.h"
#include "Cliente.h"
#include "Coche.h"
using namespace std;
//Variables
string nombre, apellidos, dni, direccion, telefono, num_fax, telefonoMovil;
double salario, bonoAnual, porcentajeComisiones;
int aniosLaboral, puesto, areaVenta, numeroClientes;
char tipo;
bool despacho;

Cliente** clientes;
Coche* carro;
Vendedor** vendedores;
Secretario* secretario;
vector<Empleado*> empleados;
vector<Coche*> carros;

void menu() {
    cout << "\n::::::::::::MENU:::::::::::::" << endl;
    cout << "1.- Agregar Empleado" << endl;
    cout << "2.- Listar Todos Los Empleados" << endl;
    cout << "3.- Modificar Empleado" << endl;
    cout << "4.- Acciones Especificas Del Empleado <--(NO)" << endl;
    cout << "5.- Eliminar Empleado" << endl;
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
        //Asignar CARRO
        carro = new Coche();
        cout << "Ingrese Telefono Movil del Vendedor:\n";
        cin >> telefonoMovil;
        cout << "Ingrese el Area de Venta del Vendedor:\n";
        cout << "1. ASISTENTE COMERCIAL\t 2. VENDEDOR\t 3. EJECUTIVO COMERCIAL\t 4. GERENTE COMERCIAL\t 5. DIRECTOR GERENCIAL\n";
        cin >> areaVenta;
        cout << "Ingrese el Porcentaje de Comisiones del Vendedor:\n";
        cin >> porcentajeComisiones;

        return new Vendedor( nombre,  apellidos,  dni,  direccion,telefono,  salario ,tipo, carro, telefonoMovil,
             areaVenta,  porcentajeComisiones);
    }
    if (tipo == 'c') {
        cout << "El Jefe de Zona Tiene Despacho (Y/N):\n";
        char z;
        cin >> z;
        z = tolower(z);
        if (z == 'y')
            despacho = true;
        else despacho = false;
        //return new JefeDeZona( nombre,  apellidos, dni, direccion,telefono, salario, tipo , despacho, secretario,  carro, vendedores);
    }

}
int main()
{
    //Lista Carros
    Coche* carro1 = new Coche("AXB358", "Honda", "Civic");
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
    vector<Coche*> carros{ carro1 , carro2, carro3, carro4, carro5,
    carro6,carro7, carro8, carro9, carro10, carro11, carro12 };

    //Vendedores = (nombre,  apellidos,  dni,  direccion,  telefono,  salario, tipo ,carro,  telefonoMovil,  areaVenta,  porcentajeComisiones)

    Vendedor* vendedor1 = new Vendedor("Javier", "Irigoyen Matos", "48002717", "Av. Benavides 560", "4432345", 1232133, 'b',  carro1, "993994620", 1, 5);
    Vendedor* vendedor2 = new Vendedor("Daniel", "qw we", "4356437", "Av. rq 525", "3456425", 123123.66, 'b',  carro3, "993994621", 2, 4);
    Vendedor* vendedor3 = new Vendedor("Francisco", "as as", "5468435", "Av. gs 567", "4567424", 321312.66, 'b',  carro2, "993994622", 3, 2);
    Vendedor* vendedor4 = new Vendedor("Shirley", "ew ew", "3789543", "Av. hd 356", "1111111", 42069.69, 'b',  carro5, "993994623", 4, 0);
    Vendedor* vendedor5 = new Vendedor("Lorena", "tr tr", "7890563", "Av. sh 853", "2222222", 23213, 'b',  carro6, "993994624", 1, 1);
    Vendedor* vendedor6 = new Vendedor("Andre", "er er", "2457896", "Av. wr 145", "3333333", 23123, 'b',  carro4, "993994625", 4, 2);
    Vendedor* vendedor7 = new Vendedor("Pier", "uy uy", "2468975", "Av. ut 986", "4444444", 3123312, 'b',  carro7, "993994626", 5, 3);
    Vendedor* vendedor8 = new Vendedor("Victor", "qr qr", "4789033", "Av. jg 345", "5555555", 312234, 'b',  carro9, "993994627", 3, 4);
    empleados.push_back(vendedor1);
    empleados.push_back(vendedor2);
    empleados.push_back(vendedor3);
    empleados.push_back(vendedor4);
    empleados.push_back(vendedor5);
    empleados.push_back(vendedor6);


    // Secretarios = ( nombre,  apellidos,  dni,  direccion,  telefono, salario, tipo,  puesto,  num_fax)

    Secretario* secretario1 = new Secretario("SJavier", "Irigoyen Matos", "4654423", "av.dsa 324", "3234532", 10000, 'a', 1, "313443524");
    Secretario* secretario2 = new Secretario("SDaniel s", "apellido", "78906423", "av.ttt 1111", "3234532", 20000, 'a',2, "313443524");
    Secretario* secretario3 = new Secretario("SFrancisco Javier", "lastmane", "4579389", "av.gytyry 123", "3234532", 30000, 'a', 1, "313443524");
    Secretario* secretario4 = new Secretario("SShirley", "Quijote Nunes", "9472834", "jr.dsa 336", "3234532", 40000, 'a',3, "313443524");
    Secretario* secretario5 = new Secretario("SLorena Jimenez", "Oh YEAH", "89372734", "jr.dasd 222", "3234532", 50000, 'a',1, "313443524");
    Secretario* secretario6 = new Secretario("SAndre Pedro", "qw we", "88273141", "jr.dasd 233", "3234532", 60000, 'a',1,"313443524");
    Secretario* secretario7 = new Secretario("SPier Pier", "qw we", "822344143", "ca.rwesda 775", "3234532", 80000, 'a', 3, "313443524");
    Secretario* secretario8 = new Secretario("SVictor Victorry", "qw we", "58283441", "ca.yrtye 4234", "3234532", 70000, 'a',2, "313443524");
    empleados.push_back(secretario1);
    empleados.push_back(secretario2);
    empleados.push_back(secretario3);
    empleados.push_back(secretario4);
    empleados.push_back(secretario5);
    empleados.push_back(secretario6);

    //jefe de zona = ( nombre,  apellidos,  dni,  direccion,  telefono,  salario, tipo, despacho, secretario,  carro, vendedores)


    int opcion;
    do {
        menu();
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion){

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
        case 4:{
            //Especificar su es vendedor o Jefe
            //Cambiar auto, agregar/eliminar clients,etc

        } break;
        case 5: {
            string d;
            cout << "Ingrese el DNI del empleado que desea eliminar: " << endl;
            cin >> d;
            for (int i = 0; i < empleados.size(); i++)
            {
                if (empleados[i]->getDni() == d)
                {
                    cout << "\nEliminado: " << empleados[i]->getNombre() <<" "<< empleados[i]->getApellidos()<<endl;
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
