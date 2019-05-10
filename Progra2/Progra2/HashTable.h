#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Persona.h"

#define SIZE 1000 // Never can be less than value in main


class Hashtable {
public:
	Hashtable();
	void agregarPersona(int i, Persona p);
	Persona obtenerPersona(int key);
	int hashf(const char* v, int M);
	~Hashtable();

private:
	int keys[SIZE];
	Persona values[SIZE];
	//vector< Lista<Personas> > l;
};

Hashtable::Hashtable() {
}

inline void Hashtable::agregarPersona(int i, Persona p) {
	if (this->keys[i] == NULL) {
		values[i] = p;
	}
	else {
		cout << "ERROR! ERROR! Collision detected!!!\n";
	}
}

inline Persona Hashtable::obtenerPersona(int key) {
	return values[key];
}

inline int Hashtable::hashf(const char * v, int M)
{
	int s = 0;
	int a = 127;
	for (; *v != 0; v++) {
		s = (a*s + *v) % M;
	}
	return s;
}

Hashtable::~Hashtable() {
}
