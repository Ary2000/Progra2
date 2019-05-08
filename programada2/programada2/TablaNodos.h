#pragma once
#include "Simple_window.h" 
#include "Graph.h"
#include <string>
#include <vector>

using namespace Graph_lib;
typedef Graph_lib::Line * PLinea;
typedef Graph_lib::Text * numeros;
typedef Graph_lib::Rectangle * Pnodo;
typedef Graph_lib::Circle * Sig;
//typedef Graph_lib::Point * punto;

class TablaNodos {
	Simple_window * pWin;
	vector<PLinea> v;
	vector<numeros> intHeap;
	vector<Pnodo> nodos;
	vector<Pnodo> mNodos;
	vector<Sig> bola;
	vector<Point> puntos;
public:
	TablaNodos() {
	};

	void ejecutar(string titulo, vector<int> numero, vector<string> valor, vector<string> instrucciones) {
		pWin = new Simple_window{ Point(100,100),650,400,titulo };
		Graph_lib::Rectangle r(Point(10, 10), 630, 380);
		r.set_color(Color::white);
		r.set_fill_color(Color::white);
		pWin->attach(r);
		v.push_back(new Graph_lib::Line{ Point(20,110), Point(630, 110) });
		v.push_back(new Graph_lib::Line{ Point(20, 210), Point(630, 210) });
		v.push_back(new Graph_lib::Line{ Point(20, 300), Point(630, 300) });
		v.push_back(new Graph_lib::Line{ Point(20, 20), Point(630, 20) });
		v.push_back(new Graph_lib::Line{ Point(20, 20), Point(20, 380) });
		v.push_back(new Graph_lib::Line{ Point(107, 20), Point(107, 380) });
		v.push_back(new Graph_lib::Line{ Point(194, 20), Point(194, 380) });
		v.push_back(new Graph_lib::Line{ Point(281, 20), Point(281, 380) });
		v.push_back(new Graph_lib::Line{ Point(368, 20), Point(368, 380) });
		v.push_back(new Graph_lib::Line{ Point(455, 20), Point(455, 380) });
		v.push_back(new Graph_lib::Line{ Point(542, 20), Point(542, 380) });
		v.push_back(new Graph_lib::Line{ Point(630, 20), Point(630, 380) });
		v.push_back(new Graph_lib::Line{ Point(20,380), Point(630, 380) });

		intHeap.push_back(new Graph_lib::Text(Point(25, 35), "1"));//1
		intHeap.push_back(new Graph_lib::Text(Point(112, 35), "2"));//1
		intHeap.push_back(new Graph_lib::Text(Point(199, 35), "3"));//1
		intHeap.push_back(new Graph_lib::Text(Point(286, 35), "4"));//1
		intHeap.push_back(new Graph_lib::Text(Point(373, 35), "5"));//1
		intHeap.push_back(new Graph_lib::Text(Point(460, 35), "6"));//1
		intHeap.push_back(new Graph_lib::Text(Point(547, 35), "7"));//1
		intHeap.push_back(new Graph_lib::Text(Point(25, 135), "8"));//1
		intHeap.push_back(new Graph_lib::Text(Point(112, 135), "9"));//1
		intHeap.push_back(new Graph_lib::Text(Point(199, 135), "10"));//1
		intHeap.push_back(new Graph_lib::Text(Point(286, 135), "11"));//1
		intHeap.push_back(new Graph_lib::Text(Point(373, 135), "12"));//1
		intHeap.push_back(new Graph_lib::Text(Point(460, 135), "13"));//1
		intHeap.push_back(new Graph_lib::Text(Point(547, 135), "14"));//1
		intHeap.push_back(new Graph_lib::Text(Point(25, 235), "15"));//1
		intHeap.push_back(new Graph_lib::Text(Point(112, 235), "16"));//1
		intHeap.push_back(new Graph_lib::Text(Point(199, 235), "17"));//1
		intHeap.push_back(new Graph_lib::Text(Point(286, 235), "18"));//1
		intHeap.push_back(new Graph_lib::Text(Point(373, 235), "19"));//1
		intHeap.push_back(new Graph_lib::Text(Point(460, 235), "20"));//1
		intHeap.push_back(new Graph_lib::Text(Point(547, 235), "21"));//1
		intHeap.push_back(new Graph_lib::Text(Point(25, 320), "22"));//1
		intHeap.push_back(new Graph_lib::Text(Point(112, 320), "23"));//1
		intHeap.push_back(new Graph_lib::Text(Point(199, 320), "24"));//1
		intHeap.push_back(new Graph_lib::Text(Point(286, 320), "25"));//1
		intHeap.push_back(new Graph_lib::Text(Point(373, 320), "26"));//1
		intHeap.push_back(new Graph_lib::Text(Point(460, 320), "27"));//1
		intHeap.push_back(new Graph_lib::Text(Point(547, 320), "28"));//1

		nodos.push_back(new Graph_lib::Rectangle(Point(35, 50), 55, 30));//1
		nodos.push_back(new Graph_lib::Rectangle(Point(122, 50), 55, 30));//2
		nodos.push_back(new Graph_lib::Rectangle(Point(209, 50), 55, 30));//3
		nodos.push_back(new Graph_lib::Rectangle(Point(296, 50), 55, 30));//4
		nodos.push_back(new Graph_lib::Rectangle(Point(383, 50), 55, 30));//5
		nodos.push_back(new Graph_lib::Rectangle(Point(470, 50), 55, 30));//6
		nodos.push_back(new Graph_lib::Rectangle(Point(557, 50), 55, 30));//7
		nodos.push_back(new Graph_lib::Rectangle(Point(35, 150), 55, 30));//1
		nodos.push_back(new Graph_lib::Rectangle(Point(122, 150), 55, 30));//2
		nodos.push_back(new Graph_lib::Rectangle(Point(209, 150), 55, 30));//3
		nodos.push_back(new Graph_lib::Rectangle(Point(296, 150), 55, 30));//4
		nodos.push_back(new Graph_lib::Rectangle(Point(383, 150), 55, 30));//5
		nodos.push_back(new Graph_lib::Rectangle(Point(470, 150), 55, 30));//6
		nodos.push_back(new Graph_lib::Rectangle(Point(557, 150), 55, 30));//7
		nodos.push_back(new Graph_lib::Rectangle(Point(35, 245), 55, 30));//1
		nodos.push_back(new Graph_lib::Rectangle(Point(122, 245), 55, 30));//2
		nodos.push_back(new Graph_lib::Rectangle(Point(209, 245), 55, 30));//3
		nodos.push_back(new Graph_lib::Rectangle(Point(296, 245), 55, 30));//4
		nodos.push_back(new Graph_lib::Rectangle(Point(383, 245), 55, 30));//5
		nodos.push_back(new Graph_lib::Rectangle(Point(470, 245), 55, 30));//6
		nodos.push_back(new Graph_lib::Rectangle(Point(557, 245), 55, 30));//7
		nodos.push_back(new Graph_lib::Rectangle(Point(35, 325), 55, 30));//1
		nodos.push_back(new Graph_lib::Rectangle(Point(122, 325), 55, 30));//2
		nodos.push_back(new Graph_lib::Rectangle(Point(209, 325), 55, 30));//3
		nodos.push_back(new Graph_lib::Rectangle(Point(296, 325), 55, 30));//4
		nodos.push_back(new Graph_lib::Rectangle(Point(383, 325), 55, 30));//5
		nodos.push_back(new Graph_lib::Rectangle(Point(470, 325), 55, 30));//6
		nodos.push_back(new Graph_lib::Rectangle(Point(557, 325), 55, 30));//7

		mNodos.push_back(new Graph_lib::Rectangle(Point(35, 50), 28, 30));//1
		mNodos.push_back(new Graph_lib::Rectangle(Point(122, 50), 28, 30));//2
		mNodos.push_back(new Graph_lib::Rectangle(Point(209, 50), 28, 30));//3
		mNodos.push_back(new Graph_lib::Rectangle(Point(296, 50), 28, 30));//4
		mNodos.push_back(new Graph_lib::Rectangle(Point(383, 50), 28, 30));//5
		mNodos.push_back(new Graph_lib::Rectangle(Point(470, 50), 28, 30));//6
		mNodos.push_back(new Graph_lib::Rectangle(Point(557, 50), 28, 30));//7
		mNodos.push_back(new Graph_lib::Rectangle(Point(35, 150), 28, 30));//1
		mNodos.push_back(new Graph_lib::Rectangle(Point(122, 150), 28, 30));//2
		mNodos.push_back(new Graph_lib::Rectangle(Point(209, 150), 28, 30));//3
		mNodos.push_back(new Graph_lib::Rectangle(Point(296, 150), 28, 30));//4
		mNodos.push_back(new Graph_lib::Rectangle(Point(383, 150), 28, 30));//5
		mNodos.push_back(new Graph_lib::Rectangle(Point(470, 150), 28, 30));//6
		mNodos.push_back(new Graph_lib::Rectangle(Point(557, 150), 28, 30));//7
		mNodos.push_back(new Graph_lib::Rectangle(Point(35, 245), 28, 30));//1
		mNodos.push_back(new Graph_lib::Rectangle(Point(122, 245), 28, 30));//2
		mNodos.push_back(new Graph_lib::Rectangle(Point(209, 245), 28, 30));//3
		mNodos.push_back(new Graph_lib::Rectangle(Point(296, 245), 28, 30));//4
		mNodos.push_back(new Graph_lib::Rectangle(Point(383, 245), 28, 30));//5
		mNodos.push_back(new Graph_lib::Rectangle(Point(470, 245), 28, 30));//6
		mNodos.push_back(new Graph_lib::Rectangle(Point(557, 245), 28, 30));//7
		mNodos.push_back(new Graph_lib::Rectangle(Point(35, 325), 28, 30));//1
		mNodos.push_back(new Graph_lib::Rectangle(Point(122, 325), 28, 30));//2
		mNodos.push_back(new Graph_lib::Rectangle(Point(209, 325), 28, 30));//3
		mNodos.push_back(new Graph_lib::Rectangle(Point(296, 325), 28, 30));//4
		mNodos.push_back(new Graph_lib::Rectangle(Point(383, 325), 28, 30));//5
		mNodos.push_back(new Graph_lib::Rectangle(Point(470, 325), 28, 30));//6
		mNodos.push_back(new Graph_lib::Rectangle(Point(557, 325), 28, 30));//7

		bola.push_back(new Graph_lib::Circle(Point(76, 65), 10));//1
		bola.push_back(new Graph_lib::Circle(Point(163, 65), 10));//2
		bola.push_back(new Graph_lib::Circle(Point(250, 65), 10));//3
		bola.push_back(new Graph_lib::Circle(Point(337, 65), 10));//4
		bola.push_back(new Graph_lib::Circle(Point(424, 65), 10));//5
		bola.push_back(new Graph_lib::Circle(Point(511, 65), 10));//6
		bola.push_back(new Graph_lib::Circle(Point(598, 65), 10));//7
		bola.push_back(new Graph_lib::Circle(Point(76, 165), 10));//1
		bola.push_back(new Graph_lib::Circle(Point(163, 165), 10));//2
		bola.push_back(new Graph_lib::Circle(Point(250, 165), 10));//3
		bola.push_back(new Graph_lib::Circle(Point(337, 165), 10));//4
		bola.push_back(new Graph_lib::Circle(Point(424, 165), 10));//5
		bola.push_back(new Graph_lib::Circle(Point(511, 165), 10));//6
		bola.push_back(new Graph_lib::Circle(Point(598, 165), 10));//7
		bola.push_back(new Graph_lib::Circle(Point(76, 260), 10));//1
		bola.push_back(new Graph_lib::Circle(Point(163, 260), 10));//2
		bola.push_back(new Graph_lib::Circle(Point(250, 260), 10));//3
		bola.push_back(new Graph_lib::Circle(Point(337, 260), 10));//4
		bola.push_back(new Graph_lib::Circle(Point(424, 260), 10));//5
		bola.push_back(new Graph_lib::Circle(Point(511, 260), 10));//6
		bola.push_back(new Graph_lib::Circle(Point(598, 260), 10));//7
		bola.push_back(new Graph_lib::Circle(Point(76, 340), 10));//1
		bola.push_back(new Graph_lib::Circle(Point(163, 340), 10));//2
		bola.push_back(new Graph_lib::Circle(Point(250, 340), 10));//3
		bola.push_back(new Graph_lib::Circle(Point(337, 340), 10));//4
		bola.push_back(new Graph_lib::Circle(Point(424, 340), 10));//5
		bola.push_back(new Graph_lib::Circle(Point(511, 340), 10));//6
		bola.push_back(new Graph_lib::Circle(Point(598, 340), 10));//7

		for (int pos = 0; pos < instrucciones.size(); pos++) {
			for (int posY = 0; posY < instrucciones.size(); posY++) {
				string revision = instrucciones[pos];
				revision.append("->sig");
				if (revision == instrucciones[posY]) {
					int posicionX;
					int posicionY;
					int nuevaPosY;
					if (pos == 0 || pos == 7 || pos == 14 || pos == 21) {
						posicionX = 76;
						if (pos == 0) {
							posicionY = 76;
						}
						else if (pos == 7) {
							posicionY = 165;
						}
						else if (pos == 14) {
							posicionY = 260;
						}
						else if (pos == 21) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 5;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 1 || pos == 8 || pos == 15 || pos == 22) {
						posicionX = 163;
						if (pos == 1) {
							posicionY = 76;
						}
						else if (pos == 8) {
							posicionY = 165;
						}
						else if (pos == 15) {
							posicionY = 260;
						}
						else if (pos == 22) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 10;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 2 || pos == 9 || pos == 16 || pos == 23) {
						posicionX = 250;
						if (pos == 2) {
							posicionY = 76;
						}
						else if (pos == 9) {
							posicionY = 165;
						}
						else if (pos == 16) {
							posicionY = 260;
						}
						else if (pos == 23) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 15;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 3 || pos == 10 || pos == 17 || pos == 24) {
						posicionX = 337;
						if (pos == 3) {
							posicionY = 76;
						}
						else if (pos == 10) {
							posicionY = 165;
						}
						else if (pos == 17) {
							posicionY = 260;
						}
						else if (pos == 24) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 20;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 4 || pos == 11 || pos == 18 || pos == 25) {
						posicionX = 424;
						if (pos == 4) {
							posicionY = 76;
						}
						else if (pos == 11) {
							posicionY = 165;
						}
						else if (pos == 18) {
							posicionY = 260;
						}
						else if (pos == 25) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 25;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 5 || pos == 12 || pos == 19 || pos == 26) {
						posicionX = 511;
						if (pos == 5) {
							posicionY = 76;
						}
						else if (pos == 12) {
							posicionY = 165;
						}
						else if (pos == 19) {
							posicionY = 260;
						}
						else if (pos == 26) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 30;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					else if (pos == 6 || pos == 13 || pos == 20 || pos == 27) {
						posicionX = 598;
						if (pos == 6) {
							posicionY = 76;
						}
						else if (pos == 13) {
							posicionY = 165;
						}
						else if (pos == 20) {
							posicionY = 260;
						}
						else if (pos == 27) {
							posicionY = 340;
						}
						nuevaPosY = posicionY - 35;
						v.push_back(new Graph_lib::Line{ Point(posicionX, posicionY), Point(posicionX, nuevaPosY) });
					}
					int sigPosY;
					if (posY == 0 || posY == 7 || posY == 14 || posY == 21) {
						if (posY == 0) { sigPosY = 50; }
						else if (posY == 7) { sigPosY =150; }
						else if (posY == 14) { sigPosY = 245; }
						else if (posY == 21) { sigPosY =325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(20, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(20, sigPosY - 10), Point(20, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(20, sigPosY), Point(35, sigPosY) });
					}
					else if (posY == 1 || posY == 8 || posY == 15 || posY == 22) {
						if (posY == 1) { sigPosY = 50; }
						else if (posY == 8) { sigPosY = 150; }
						else if (posY == 15) { sigPosY = 245; }
						else if (posY == 22) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(110, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(110, sigPosY - 10), Point(110, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(110, sigPosY), Point(122, sigPosY) });
						/*
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(110, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(110, nuevaPosY), Point(110, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(110, sigPosY - 10), Point(122, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(122, sigPosY - 10), Point(122, sigPosY) });
					*/
					}
					else if (posY == 2 || posY == 9 || posY == 16 || posY == 23) {
						if (posY == 2) { sigPosY = 50; }
						else if (posY == 9) { sigPosY = 150; }
						else if (posY == 16) { sigPosY = 245; }
						else if (posY == 23) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(190, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(190, sigPosY - 10), Point(190, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(190, sigPosY), Point(209, sigPosY) });
						/*
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(190, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(190, nuevaPosY), Point(190, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(190, sigPosY - 10), Point(209, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(209, sigPosY - 10), Point(209, sigPosY) });
					*/
					}
					else if (posY == 3 || posY == 10 || posY == 17 || posY == 24) {
						if (posY == 3) { sigPosY = 50; }
						else if (posY == 10) { sigPosY = 150; }
						else if (posY == 17) { sigPosY = 245; }
						else if (posY == 24) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(280, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(280, nuevaPosY), Point(280, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(280, sigPosY - 10), Point(296, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(296, sigPosY), Point(296, sigPosY) });
					}
					else if (posY == 4 || posY == 11 || posY == 18 || posY == 25) {
						if (posY == 4) { sigPosY = 50; }
						else if (posY == 11) { sigPosY = 150; }
						else if (posY == 18) { sigPosY = 245; }
						else if (posY == 25) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(370, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(370, sigPosY - 10), Point(370, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(370, sigPosY), Point(383, sigPosY) });
					}
					else if (posY == 5 || posY == 12 || posY == 19 || posY == 26) {
						if (posY == 5) { sigPosY = 50; }
						else if (posY == 12) { sigPosY = 150; }
						else if (posY == 19) { sigPosY = 245; }
						else if (posY == 26) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(445, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(445, sigPosY - 10), Point(445, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(445, sigPosY), Point(470, sigPosY) });
					}
					else if (posY == 6 || posY == 13 || posY == 20 || posY == 27) {
						if (posY == 6) { sigPosY = 50; }
						else if (posY == 13) { sigPosY = 150; }
						else if (posY == 20) { sigPosY = 245; }
						else if (posY == 27) { sigPosY = 325; }
						v.push_back(new Graph_lib::Line{ Point(posicionX, nuevaPosY), Point(posicionX + 10, nuevaPosY) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, nuevaPosY), Point(posicionX + 10, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(posicionX + 10, sigPosY - 10), Point(530, sigPosY - 10) });
						v.push_back(new Graph_lib::Line{ Point(530, sigPosY - 10), Point(530, sigPosY) });
						v.push_back(new Graph_lib::Line{ Point(530, sigPosY), Point(557, sigPosY) });
					}
				}
			}
		}


		for (int i = 0; i < v.size(); i++) {
			pWin->attach(*v[i]);
		}
		for (int a = 0; a < intHeap.size(); a++) {
			pWin->attach(*intHeap[a]);
		}
		getNodo(numero);
		getValNodo(numero, valor);
		/*for (int j = 0; j < nodos.size(); j++) {
			Pnodo n;
			n = nodos[j];
			n->set_fill_color(Color::yellow);
			pWin->attach(*n);
		}
		for (int x = 0; x < mNodos.size(); x++) {
			Pnodo m;
			m = mNodos[x];
			m->set_fill_color(Color::dark_green);
			pWin->attach(*m);
			//pWin->attach(*mNodos[x]);
		}
		for (int y = 0; y < bola.size(); y++) {
			Sig c;
			c = bola[y];
			c->set_fill_color(Color::blue);
			pWin->attach(*c);
			//pWin->attach(*bola[y]);
		}*/

		

		pWin->wait_for_button();
	}
	/*Ppunto getPuntos(int x) {
		return puntos[x];
	}*/
	/*void generateNodo(int punto) {
		Ppunto pl;
		pl=getPuntos(punto);
		Graph_lib::Rectangle nodo(pl, 50, 380);
	}*/
	void getNodo(vector<int> numero) {
		for (int i = 0; i < numero.size(); i++) {
			Pnodo n;
			n = nodos[numero[i]];
			n->set_fill_color(Color::yellow);
			pWin->attach(*n);
			Pnodo m;
			m = mNodos[numero[i]];
			m->set_fill_color(Color::dark_green);
			pWin->attach(*m);
			Sig c;
			c = bola[numero[i]];
			c->set_fill_color(Color::blue);
			pWin->attach(*c);
		}
	}
	void getValNodo(vector<int> numero, vector<string> valor) {
		puntos.push_back(Point(40, 68));//1
		puntos.push_back(Point(127, 68));//2
		puntos.push_back(Point(214, 68));//3
		puntos.push_back(Point(301, 68));//4
		puntos.push_back(Point(388, 68));//5
		puntos.push_back(Point(475, 68));//6
		puntos.push_back(Point(562, 68));//7
		puntos.push_back(Point(40, 168));//1
		puntos.push_back(Point(127, 168));//2
		puntos.push_back(Point(214, 168));//3
		puntos.push_back(Point(301, 168));//4
		puntos.push_back(Point(388, 168));//5
		puntos.push_back(Point(475, 168));//6
		puntos.push_back(Point(562, 168));//7
		puntos.push_back(Point(301, 263));//1
		puntos.push_back(Point(127, 263));//2
		puntos.push_back(Point(214, 263));//3
		puntos.push_back(Point(301, 263));//4
		puntos.push_back(Point(388, 263));//5
		puntos.push_back(Point(475, 263));//6
		puntos.push_back(Point(562, 263));//7
		puntos.push_back(Point(40, 343));//1
		puntos.push_back(Point(127, 343));//2
		puntos.push_back(Point(214, 343));//3
		puntos.push_back(Point(301, 343));//4
		puntos.push_back(Point(388, 343));//5
		puntos.push_back(Point(475, 343));//6
		puntos.push_back(Point(562, 340));//7
		for (int i = 0; i < numero.size(); i++) {
			int num = numero[i];
			Point p = puntos[num];
			//for (int j = 0; j < valor.size(); j++) {
				string val = valor[i];
				numeros m= new Graph_lib::Text(p, val);//1
				pWin->attach(*m);
				//delete m;
			//}
		}
	}
	~TablaNodos() {
		delete pWin;
		for (int i = 0; i < v.size(); i++) {
			delete v[i];
		}
		for (int a = 0; a < intHeap.size(); a++) {
			delete intHeap[a];
		}
		for (int j = 0; j < nodos.size(); j++) {
			delete nodos[j];
		}
		for (int x = 0; x < mNodos.size(); x++) {
			delete mNodos[x];
		}
		for (int y = 0; y < nodos.size(); y++) {
			delete bola[y];
		}

	}
};