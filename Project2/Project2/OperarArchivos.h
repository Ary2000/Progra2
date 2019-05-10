#pragma once
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include <fstream>
#include "Persona.h"

using namespace std;
class OperarArchivo
{
public:
	OperarArchivo() {}
	void limpiar(string nombre) {
		ofstream archivo;
		archivo.open(nombre);//crear archivo: (archivo.extencion, ios::out)
		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		archivo.close();
	}

	void crear(string nombre,vector<string> person, string eliminar) {
		//crear archivo desde 0(elimina el archivo anterior)
		//podria servir para guardar como
		ofstream archivo;
		string texto;
		int i;
		archivo.open(nombre);//crear archivo: (archivo.extencion, ios::out)

		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		for (i = 0; i < person.size() - 1; i++) {
			texto = person[i];
			if (texto != eliminar) {
				archivo << texto << endl;
			}
		}
		texto = person[i];
		if (texto != eliminar) {
			archivo << texto;
		}
		//archivo << "301158459;Ary-el;Duran;Ballestero" << endl;
		//archivo << "402460650;Isaac;Ortega;Arguedas"<<endl;//escribir en el archivo
		//archivo << "301158459;Ary-el;Duran;Ballestero" << endl;
		archivo.close();

	}

	void lectura(string nombre) {
		ifstream archivo;
		string texto;
		archivo.open(nombre);
		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		while (!archivo.eof()) {
			getline(archivo, texto);
			texto;
			cout << texto << endl;
			//cout << texto<<endl;

		}
		archivo.close();
	}

	void escritura(string nombre) {
		//al final del archivo
		string texto;
		ofstream archivo;
		archivo.open(nombre, ios::app);//aniadir texto
		if (archivo.fail()) {
			cout << "error al abrir el archivo" << endl;
			exit(1);
		}
		/*archivo << "201510481;Alberto;Rojas;Chacon" << endl;
		archivo << "301158459;Ary-el;Duran;Ballestero;20/6/2000" << endl;
		archivo << "402460650;Isaac;Ortega;Arguedas;27/3/2000" << endl;//escribir en el archivo
		archivo << "201510481;Alberto;Rojas;Chacon24/8/1995" << endl;
		archivo << "301450485;Allan;Chavarria;Villalobos;12/4/1985" << endl;
		archivo << "404670186;Luis;Suñiga;Calderon;24/7/1981" << endl;//escribir en el archivo*/
		archivo.close();
	}
	void borrar(string nombre, string borrar) {
		ifstream archivo;
		string texto;
		vector<string> linea;
		archivo.open(nombre);
		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		while (!archivo.eof()) {
			getline(archivo, texto);
			linea.push_back(texto);
			cout << texto << endl;
			//cout << texto<<endl;
		}
		archivo.close();
		crear(nombre, linea, borrar);
	}
	void remplasar(string nombre,string cambiar, string remplazo) {
		ifstream archivo;
		string texto;
		vector<string> linea;
		archivo.open(nombre);
		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		while (!archivo.eof()) {
			getline(archivo, texto);
			linea.push_back(texto);
			cout << texto << endl;
			//cout << texto<<endl;
		}
		archivo.close();
		ofstream archivoR;
		int i;
		archivoR.open(nombre);//crear archivo: (archivo.extencion, ios::out)

		if (archivoR.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		for (i = 0; i < linea.size() - 1; i++) {
			string texto = linea[i];
			if (texto != cambiar)
				archivoR << texto << endl;

			else
				archivoR << remplazo << endl;

		}
		texto = linea[i];
		if (texto != cambiar)
			archivoR << texto;

		else
			archivoR << remplazo;
		archivoR.close();
	}
	void agregarLinea(string nombre, string person, int line) {
		ifstream archivo;
		string texto;
		vector<string> linea;
		archivo.open(nombre);
		if (archivo.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		while (!archivo.eof()) {
			getline(archivo, texto);
			linea.push_back(texto);
			//cout << texto << endl;
			//cout << texto<<endl;
		}
		archivo.close();
		ofstream archivoR;
		if (line >= linea.size()) {
			archivoR.open(nombre, ios::app);//aniadir texto
			if (archivoR.fail()) {
				cout << "error al abrir el archivo" << endl;
				exit(1);
			}
			archivoR << person << endl;
		}
		int i;
		texto;
		archivoR.open(nombre);//crear archivo: (archivo.extencion, ios::out)
		if (archivoR.fail()) {
			cout << "No se pudo abrir el archivo" << endl;
			exit(1);
		}
		if (line == 0) {
			archivoR << person << endl;
			for (i = 0; i < linea.size() - 1; i++) {
				texto = linea[i];
				archivoR << texto << endl;
			}
			texto = linea[i];
			archivoR << texto;
			archivoR.close();
		}
		for (i = 0; i < linea.size() - 1; i++) {
			texto = linea[i];
			archivoR << texto << endl;
			if (line == i)
				archivoR << person << endl;
		}
		texto = linea[i];
		archivoR << texto;
		archivoR.close();
	}
	~OperarArchivo() {}

private:

};