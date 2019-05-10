#pragma once

using namespace std;

template <class T>
class lista {
public:
	typedef class Nodo* link;
	lista();
	void insert(T x);
	~lista();

private:
	link primero;
	struct Nodo
	{
		T elemento;
		link sig;
		Nodo(T x) :elemento{ x }, sig{ 0 }{}
	};
};

template<class T>
inline lista<T>::lista() {
}

template<class T>
inline void lista<T>::insert(T x) {
	if (primero == 0)
		primero = new Nodo(x);
	else {
		link p = primero;
		while (p->sig)
		{
			p = p->sig;
		}
		p - sig = new Nodo(x)
	}
}

template<class T>
inline lista<T>::~lista() {
	while (primero) {
		link p = primero;
		delete primero;
		primero = p;
	}
}