#pragma once
#include "Simple_window.h"
#include "Graph.h"

using namespace std;
using namespace Graph_lib;

void abrirArchivo() {
	cout << "Se abre archivo" << endl;
}

Callback ab() {
	return Callback(abrirArchivo);
}

void guardarArchivo() {
	cout << "Se guarda el archivo" << endl;
}

Callback guardar() {
	return Callback(guardarArchivo);
}

void guardarArchivoComo() {
	cout << "Se guarda el archivo como" << endl;
}

Callback guardarC() {
	return Callback(guardarArchivoComo);
}

void salirMenu() {
	cout << "Se sale del menu" << endl;
}

Callback salir() {
	return Callback(salirMenu);
}

void consultarArchivo() {
	cout << "Consultar archivo" << endl;
}

Callback consultar() {
	return Callback(consultarArchivo);
}

void insertarArchivo() {
	cout << "Insertar Archivo" << endl;
}

Callback insertar() {
	return Callback(insertarArchivo);
}

void eliminarArchivo() {
	cout << "Eliminar archivo" << endl;
}

Callback eliminar() {
	return Callback(eliminarArchivo);
}

void modificarArchivo() {
	cout << "Modificar Archivo" << endl;
}

Callback modificar() {
	return Callback(modificarArchivo);
}

class MenuPrincipal {
public:
	Simple_window* pWin;

	MenuPrincipal() {
		pWin = new Simple_window(Point(100, 100), 300, 200, "Menu Principal");
		Button abrir(Point(20, 10), 50, 25, "Abrir", ab());
		Button guardar(Point(20, 50), 50, 25, "Guardar", guardar());
		Button guardarC(Point(20, 100), 100, 25, "Guardar como", guardarC());
		Button salir(Point(20, 150), 50, 25, "Salir", salir());
		Button consultar(Point(50, 10), 50, 25, "Consultar", consultar());
		Button insertar(Point(50, 50), 50, 25, "Insertar", insertar());
		Button eliminar(Point(50, 100), 50, 25, "Eliminar", eliminar());
		Button modificar(Point(50, 150), 50, 25, "Modificar", modificar());
		pWin->attach(abrir);
		pWin->attach(guardar);
		pWin->attach(guardarC);
		pWin->attach(salir);
		pWin->attach(consultar);
		pWin->attach(insertar);
		pWin->attach(eliminar);
		pWin->attach(modificar);
		pWin->wait_for_button();
	}
};