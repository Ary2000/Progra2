#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace Project1;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);

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

Button^ MyForm::createButton(String^ title, int posx, int posy, int sizex, int sizey) {
	Button^ button = gcnew Button();
	button->Location = Point(posx, posy);
	button->Size = Drawing::Size(sizex, sizey);
	button->Text = title;

	//this->Controls->Add(button);

	return button;
}

TextBox^ MyForm::createTextBox(int posx, int posy, int sizex, int sizey) {
	TextBox^ textBox = gcnew TextBox();
	textBox->Location = Point(posx, posy);
	textBox->Size = Drawing::Size(sizex, sizey);

	//this->Controls->Add(textBox);

	return textBox;
}

GroupBox^ MyForm::createGroupBox(int posx, int posy, int sizex, int sizey, String^ titulo) {
	GroupBox^ groupBox = gcnew GroupBox();
	groupBox->Location = Point(posx, posy);
	groupBox->Size = Drawing::Size(sizex, sizey);
	groupBox->Text = titulo;

	return groupBox;
}

