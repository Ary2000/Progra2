
#include "Simple_window.h" 
#include "Graph.h"
#include "menu.h"

using namespace Graph_lib;
using namespace std;

void abrirA() {
	cout << "Abrir archivo" << endl;
}

void guardarA() {
	cout << "Guardar archivo" << endl;
}

void guardarC() {
	cout << "Guardar como" << endl;
}

void salirP() {
	cout << "Salir" << endl;
}

void consultar() {
	cout << "Consultar" << endl;
}

void insertar() {
	cout << "Insertar" << endl;
}

void eliminar() {
	cout << "Eliminar" << endl;
}

void modificar() {
	cout << "Modificar" << endl;
}

int main() {
	Simple_window* menuPrincipal;
	menuPrincipal = new Simple_window(Point(100, 100), 300, 200, "Menu Principal");
	Button botonArchivo(Point(20, 20), 100, 20, "Abrir", Callback(abrirA));
	Button guardarArchivo(Point(20, 70), 100, 20, "Guardar", Callback(guardarA));
	Button guardarCArchivo(Point(20, 120), 100, 20, "Guardar como", Callback(guardarC));
	Button salir(Point(20, 170), 100, 20, "Salir", Callback(salirP));
	Button consultarPersona(Point(150, 20), 100, 20, "Consultar", Callback(consultar));
	Button insertarPersona(Point(150, 70), 100, 20, "Insertar", Callback(insertar));
	Button eliminarPersona(Point(150, 120), 100, 20, "Eliminar", Callback(eliminar));
	Button modificarPersona(Point(150, 170), 100, 20, "Modificar", Callback(modificar));
	menuPrincipal->attach(botonArchivo);
	menuPrincipal->attach(guardarArchivo);
	menuPrincipal->attach(guardarCArchivo);
	menuPrincipal->attach(salir);
	menuPrincipal->attach(consultarPersona);
	menuPrincipal->attach(insertarPersona);
	menuPrincipal->attach(eliminarPersona);
	menuPrincipal->attach(modificarPersona);
	menuPrincipal->wait_for_button();
}

