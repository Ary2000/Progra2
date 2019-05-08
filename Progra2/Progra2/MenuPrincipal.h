#pragma once
#include "Simple_window.h"
#include "Graph.h"

void abrirArchivo() {
	cout << "Se abre archivo" << endl;
}


//void guardarArchivo() {
//	cout << "Se guarda el archivo" << endl;
//}
/*
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

void le() {
	cout << "Nice" << endl;
}

Callback leerTexto() {
	return Callback(le);
}

Callback salir() {
	return Callback(salirMenu);
}

class Procesar {
	//Simple_window * pWin;
public:
	Procesar() {
	};

	void ejecutar(string titulo) {
		//pWin = new Simple_window{ Point(100,100),600,400,titulo };
		//pWin->wait_for_button();
	}
};
*/

class MenuPrincipal {
public:
	Simple_window* pWin;

	MenuPrincipal() {

	};
	void ejecutar(){
		pWin = new Simple_window{ Point(100,100),600,400, "Menu Principal" };
		//Button abrir(Point(20, 10), 50, 25, "Abrir", Callback(abrirArchivo));
		//Button guardarB(Point(20, 50), 50, 25, "Guardar", Callback(abrirArchivo));
		//Button guardarC(Point(20, 100), 100, 25, "Guardar como", guardarC());
		//Button salir(Point(20, 150), 50, 25, "Salir", salir());
		//pWin->attach(abrir);
		//pWin->attach(guardar);
		//pWin->attach(guardarC);
		//pWin->attach(salir);
		pWin->wait_for_button();
	}
	
};

