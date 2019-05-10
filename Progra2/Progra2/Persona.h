#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;

class Persona {
	string nombre;
	string apellido1;
	string apellido2;
	string cedula;
	string date;
public:
	Persona() {}
	Persona(string c, string n, string a1, string a2, string b) {
		cedula = c;
		nombre = n;
		apellido1 = a1;
		apellido2 = a2;
		date = b;
	}
	string toString() {
		string salida;
		salida = cedula + ";" + nombre + ";" + apellido1 + ";" + apellido2 + ";" + date;
		//cout << salida;
		return salida;
	}
	void setDatos(string csv) {
		string persona = csv;
		string test;
		int found, i = 0;
		//while (i!=9) {
		found = persona.find(";");
		for (int j = 0; j < found; j++) {
			cedula += persona[j];
		}
		persona.erase(0, found + 1);
		//i++;
		cout << cedula << endl;
		//}
		found = persona.find(";");
		for (int j = 0; j < found; j++) {
			nombre += persona[j];
		}
		persona.erase(0, found + 1);
		//i++;
		cout << nombre << endl;

		found = persona.find(";");
		for (int j = 0; j < found; j++) {
			apellido1 += persona[j];
		}
		persona.erase(0, found + 1);
		//i++;
		cout << apellido1 << endl;

		found = persona.find(";");
		for (int j = 0; j < found; j++) {
			apellido2 += persona[j];
		}
		cout << apellido2 << endl;
		persona.erase(0, found + 1);
		date = persona;
		cout << date << endl;
	}
};