#pragma once
#include "Simple_window.h"
#include "Graph.h"

using namespace std;
using namespace Graph_lib;

class MenuEliminar {
public:
	Simple_window* pWin;

	MenuEliminar() {
		pWin = new Simple_window(Point(100, 100), 300, 200, "Consultar");
		pWin->wait_for_button();
	}

};
