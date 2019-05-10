#include "MyForm.h"
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <sstream>
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;
using namespace Project2;    // Reemplazar Project1 por el nombre que se le haya dado al proyecto

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	MyForm form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);
}

MyForm::MyForm(void)
{
	InitializeComponent();
	groupBoxCaja->Hide();
	textBox6->Enabled = false;
	groupBoxDocumento->Hide();
}

Label^ MyForm::createLabel(String^ title, Drawing::Font^ font, int posx, int posy, int sizex, int sizey) {
	Label^ label = gcnew Label();
	label->AutoSize = true;
	label->Font = font;
	label->Location = Point(posx, posy);
	label->Size = Drawing::Size(sizex, sizey);
	label->Text = title;

	this->Controls->Add(label);

	return label;
}

Button^ MyForm::createButton(String ^ title, int posx, int posy, int sizex, int sizey) {
	Button^ button = gcnew Button;
	button->Location = Point(posx, posy);
	button->Size = Drawing::Size(sizex, sizey);
	button->Text = title;

	this->Controls->Add(button);

	return button;
}

void MyForm::buttonConsultar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Comunes
	groupBoxCaja->Show();
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	//Propios
	groupBoxCaja->Text = "Consultar";
	buttonConsul->Show();
	buttonLimpiar->Hide();
	buttonPrincipal->Hide();
	buttonCancelar->Show();
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
}

void MyForm::buttonInsertar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Comunes
	groupBoxCaja->Show();
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	//Propios
	groupBoxCaja->Text = "Insertar";
	buttonConsul->Hide();
	buttonLimpiar->Show();
	buttonPrincipal->Show();
	buttonPrincipal->Text = "Insertar";
	buttonCancelar->Show();
	textBox2->Enabled = true;
	textBox3->Enabled = true;
	textBox4->Enabled = true;
	textBox5->Enabled = true;
	buttonPrincipal->Click += gcnew System::EventHandler(this, &MyForm::buttonInsert_Click);
}

void MyForm::buttonEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Comunes
	groupBoxCaja->Show();
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	//Propios
	groupBoxCaja->Text = "Eliminar";
	buttonConsul->Show();
	buttonLimpiar->Hide();
	buttonPrincipal->Show();
	buttonPrincipal->Text = "Eliminar";

	//Window archivos
	groupBoxDocumento->Hide();

	//Window personas
	buttonCancelar->Show();
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
}

Void MyForm::buttonModificar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Comunes
	groupBoxCaja->Show();
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	//Propios
	groupBoxCaja->Text = "Modificar";
	buttonConsul->Show();
	buttonLimpiar->Show();
	buttonPrincipal->Text = "Modificar";
	buttonCancelar->Show();
}

Void MyForm::buttonAbrir_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	groupBoxDocumento->Show();
	groupBoxDocumento->Text = "Abrir documento";
	buttonEspecial->Text = "Abrir";
	label6->Text = "Archivo a abrir";
}

Void MyForm::buttonGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	groupBoxDocumento->Show();
	groupBoxDocumento->Text = "Guardar documento";
	buttonEspecial->Text = "Guardar";
	label6->Text = "Guardar archivo";
}

Void MyForm::buttonGuardarC_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxArchivo->Hide();
	groupBox2->Hide();
	groupBoxDocumento->Show();
	groupBoxDocumento->Text = "Guardar documento como";
	buttonEspecial->Text = "Guardar como";
	label6->Text = "Guardar como el archivo";
}

Void MyForm::buttonCance_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxDocumento->Text = "";
	groupBoxDocumento->Hide();
	groupBoxArchivo->Show();
	groupBox2->Show();
}

Void MyForm::buttonCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxCaja->Hide();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	groupBox2->Show();
	groupBoxArchivo->Show();
}

Void MyForm::buttonSalir_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

bool MyForm::revisarInt(String^ tira) {
	Int64 number;
	if (!Int64::TryParse(tira, number)) {
		return false;
	}
	return true;
}

bool MyForm::revisarTodoInt(String^ tira, int posicion) {
	if (tira->Length <= posicion) {
		return true;
	}
	else {
		if (tira[posicion] == 'a'|| tira[posicion] == 'b' || tira[posicion] == 'c' ||
			tira[posicion] == 'd' || tira[posicion] == 'e' || tira[posicion] == 'f' ||
			tira[posicion] == 'g' || tira[posicion] == 'h' || tira[posicion] == 'i' ||
			tira[posicion] == 'j' || tira[posicion] == 'k' || tira[posicion] == 'l' ||
			tira[posicion] == 'm' || tira[posicion] == 'n' || tira[posicion] == 'r' ||
			tira[posicion] == 'o' || tira[posicion] == 'p' || tira[posicion] == 'q' ||
			tira[posicion] == 'r' || tira[posicion] == 's' || tira[posicion] == 't' ||
			tira[posicion] == 'u' || tira[posicion] == 'v' || tira[posicion] == 'w' ||
			tira[posicion] == 'x' || tira[posicion] == 'y' || tira[posicion] == 'z' ||
			tira[posicion] == 'A' || tira[posicion] == 'B' || tira[posicion] == 'C' ||
			tira[posicion] == 'D' || tira[posicion] == 'E' || tira[posicion] == 'F' ||
			tira[posicion] == 'G' || tira[posicion] == 'H' || tira[posicion] == 'I' ||
			tira[posicion] == 'J' || tira[posicion] == 'K' || tira[posicion] == 'L' ||
			tira[posicion] == 'M' || tira[posicion] == 'N' || tira[posicion] == 'R' ||
			tira[posicion] == 'O' || tira[posicion] == 'P' || tira[posicion] == 'Q' ||
			tira[posicion] == 'R' || tira[posicion] == 'S' || tira[posicion] == 'T' ||
			tira[posicion] == 'U' || tira[posicion] == 'V' || tira[posicion] == 'W' ||
			tira[posicion] == 'X' || tira[posicion] == 'Y' || tira[posicion] == 'Z') {
			return revisarTodoInt(tira, ++posicion);
		}
		else {
			return false;
		}
	}
}

Void MyForm::buttonConsul_Click(System::Object^  sender, System::EventArgs^  e) {
	bool revisar = revisarInt(textBox1->Text);
	if (!revisar) {
		textBox6->Text = "Cédula Inválida";
	}
	else {
		//Aqui se pasan los datos
		int x = 20;
	}
}





Void MyForm::buttonInsert_Click(System::Object^  sender, System::EventArgs^  e) {
	bool revisarNombre = revisarTodoInt(textBox2->Text, 0);
	bool revisarPApellido = revisarTodoInt(textBox3->Text, 0);
	bool revisarSApellido = revisarTodoInt(textBox4->Text, 0);
	bool revisarFecha = revisarFechaN(textBox5->Text);
	if (!revisarNombre || !revisarPApellido || !revisarSApellido || !revisarFecha) {
		textBox6->Text == "Datos no aceptables";
	}
	else {
		std::string cedula = textBox1->Text->Copy;
		//Aqui se añade la funcion que inserta el usuario
	}

}

Void MyForm::buttonBorr_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string cedula = textBox1->Text->Copy;
	//Aqui se añade la funcion que que borra el usuario
}


Void MyForm::buttonModifi_Click(System::Object^  sender, System::EventArgs^  e) {
	bool revisarNombre = revisarTodoInt(textBox2->Text, 0);
	bool revisarPApellido = revisarTodoInt(textBox3->Text, 0);
	bool revisarSApellido = revisarTodoInt(textBox4->Text, 0);
	bool revisarFecha = revisarFechaN(textBox5->Text);
	if (!revisarNombre || !revisarPApellido || !revisarSApellido || !revisarFecha) {
		textBox6->Text == "Datos no aceptables";
	}
	else {
		std::string cedula = textBox1->Text->Copy;
		//Aqui se añade la funcion que que modifica el usuario
	}

}

bool MyForm::revisarFechaN(String^ tira) {
	if (tira->Length != 10) { return false; }
	if (tira[0] != '0' && tira[0] != '1' && tira[0] != '2' && tira[0] != '3') { return false; }
	if (tira[1] != '0' && tira[1] != '1' && tira[1] != '2' && tira[1] != '3' &&
		tira[1] != '4' && tira[1] != '5' && tira[1] != '6' && tira[1] != '7' &&
		tira[1] != '8' && tira[1] != '9') {
		return false;
	}
	if (tira[2] != '/') { return false; }
	if (tira[3] != '0' && tira[3] != '1' ) {
		return false;
	}
	if (tira[4] != '0' && tira[4] != '1' && tira[4] != '2' && tira[4] != '3' &&
		tira[4] != '4' && tira[4] != '5' && tira[4] != '6' && tira[4] != '7' &&
		tira[4] != '8' && tira[4] != '9') {
		return false;
	}
	if (tira[5] != '/') { return false; }
	if (tira[6] != '0' && tira[6] != '1' && tira[6] != '2' && tira[6] != '3' &&
		tira[6] != '4' && tira[6] != '5' && tira[6] != '6' && tira[6] != '7' &&
		tira[6] != '8' && tira[6] != '9') {
		return false;
	}
	if (tira[7] != '0' && tira[7] != '1' && tira[7] != '2' && tira[7] != '3' &&
		tira[7] != '4' && tira[7] != '5' && tira[7] != '6' && tira[7] != '7' &&
		tira[7] != '8' && tira[7] != '9') {
		return false;
	}
	if (tira[8] != '0' && tira[8] != '1' && tira[8] != '2' && tira[8] != '3' &&
		tira[8] != '4' && tira[8] != '5' && tira[8] != '6' && tira[8] != '7' &&
		tira[8] != '8' && tira[8] != '9') {
		return false;
	}
	if (tira[9] != '0' && tira[9] != '1' && tira[9] != '2' && tira[9] != '3' &&
		tira[9] != '4' && tira[9] != '5' && tira[9] != '6' && tira[9] != '7' &&
		tira[9] != '8' && tira[9] != '9') {
		return false;
	}
	if (tira[0] == '3') {
		if (tira[1] != '0' && tira[1] != '1') {
			return false;
		}
	}
	if (tira[3] == '1') {
		if (tira[4] != '0' && tira[4] != '1' && tira[4] != '2') {
			return false;
		}
	}
	if (tira[6] == '2') {
		if (tira[7] != '0') { return false; }
		if (tira[8] != '0' && tira[8] != '1') { return false; }
	}
	return true;
}