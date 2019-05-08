#include "MyForm.h"

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
}

void MyForm::buttonEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
	//Comunes
	groupBoxCaja->Show();

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

	//Propios
	groupBoxCaja->Text = "Modificar";
	buttonConsul->Show();
	buttonLimpiar->Show();
	buttonPrincipal->Text = "Modificar";
	buttonCancelar->Show();
}

Void MyForm::buttonAbrir_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDocumento->Show();
	buttonEspecial->Text = "Abrir";
	label6->Text = "Archivo a abrir";
}

Void MyForm::buttonGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDocumento->Show();
	buttonEspecial->Text = "Guardar";
	label6->Text = "Guardar archivo";
}

Void MyForm::buttonGuardarC_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDocumento->Show();
	buttonEspecial->Text = "Guardar como";
	label6->Text = "Guardar como el archivo";
}

Void MyForm::buttonCance_Click(System::Object^  sender, System::EventArgs^  e) {
	textBoxDocumento->Text = "";
	groupBoxDocumento->Hide();
}