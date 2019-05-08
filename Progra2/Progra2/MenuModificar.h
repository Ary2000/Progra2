#pragma once
#include "Simple_window.h"
#include "Graph.h"

using namespace std;
using namespace Graph_lib;

class MenuModificar {
public:
	Simple_window* pWin;

	MenuModificar() {
		pWin = new Simple_window(Point(100, 100), 300, 200, "Consultar");
		pWin->wait_for_button();
	}

};