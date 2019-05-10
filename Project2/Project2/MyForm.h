#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxArchivo;
	private: System::Windows::Forms::Button^  buttonSalir;
	private: System::Windows::Forms::Button^  buttonGuardarC;
	private: System::Windows::Forms::Button^  buttonGuardar;
	private: System::Windows::Forms::Button^  buttonAbrir;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  buttonModificar;
	private: System::Windows::Forms::Button^  buttonEliminar;
	private: System::Windows::Forms::Button^  buttonInsertar;
	private: System::Windows::Forms::Button^  buttonConsultar;
	private: System::Windows::Forms::GroupBox^  groupBoxCaja;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  buttonCancelar;
	private: System::Windows::Forms::Button^  buttonPrincipal;
	private: System::Windows::Forms::Button^  buttonLimpiar;
	private: System::Windows::Forms::Button^  buttonConsul;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBoxDocumento;
	private: System::Windows::Forms::Button^  buttonCance;
	private: System::Windows::Forms::Button^  buttonEspecial;
	private: System::Windows::Forms::TextBox^  textBoxDocumento;
	private: System::Windows::Forms::Label^  label6;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxArchivo = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->buttonGuardarC = (gcnew System::Windows::Forms::Button());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->buttonAbrir = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonModificar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonInsertar = (gcnew System::Windows::Forms::Button());
			this->buttonConsultar = (gcnew System::Windows::Forms::Button());
			this->groupBoxCaja = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonPrincipal = (gcnew System::Windows::Forms::Button());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonConsul = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxDocumento = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCance = (gcnew System::Windows::Forms::Button());
			this->buttonEspecial = (gcnew System::Windows::Forms::Button());
			this->textBoxDocumento = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxArchivo->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxCaja->SuspendLayout();
			this->groupBoxDocumento->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxArchivo
			// 
			this->groupBoxArchivo->Controls->Add(this->buttonSalir);
			this->groupBoxArchivo->Controls->Add(this->buttonGuardarC);
			this->groupBoxArchivo->Controls->Add(this->buttonGuardar);
			this->groupBoxArchivo->Controls->Add(this->buttonAbrir);
			this->groupBoxArchivo->Location = System::Drawing::Point(13, 13);
			this->groupBoxArchivo->Name = L"groupBoxArchivo";
			this->groupBoxArchivo->Size = System::Drawing::Size(179, 285);
			this->groupBoxArchivo->TabIndex = 0;
			this->groupBoxArchivo->TabStop = false;
			this->groupBoxArchivo->Text = L"Archivo";
			// 
			// buttonSalir
			// 
			this->buttonSalir->Location = System::Drawing::Point(47, 226);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(75, 23);
			this->buttonSalir->TabIndex = 3;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &MyForm::buttonSalir_Click);
			// 
			// buttonGuardarC
			// 
			this->buttonGuardarC->Location = System::Drawing::Point(46, 153);
			this->buttonGuardarC->Name = L"buttonGuardarC";
			this->buttonGuardarC->Size = System::Drawing::Size(84, 23);
			this->buttonGuardarC->TabIndex = 2;
			this->buttonGuardarC->Text = L"Guardar como";
			this->buttonGuardarC->UseVisualStyleBackColor = true;
			this->buttonGuardarC->Click += gcnew System::EventHandler(this, &MyForm::buttonGuardarC_Click);
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->Location = System::Drawing::Point(47, 96);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(75, 23);
			this->buttonGuardar->TabIndex = 1;
			this->buttonGuardar->Text = L"Guardar";
			this->buttonGuardar->UseVisualStyleBackColor = true;
			this->buttonGuardar->Click += gcnew System::EventHandler(this, &MyForm::buttonGuardar_Click);
			// 
			// buttonAbrir
			// 
			this->buttonAbrir->Location = System::Drawing::Point(47, 32);
			this->buttonAbrir->Name = L"buttonAbrir";
			this->buttonAbrir->Size = System::Drawing::Size(75, 23);
			this->buttonAbrir->TabIndex = 0;
			this->buttonAbrir->Text = L"Abrir";
			this->buttonAbrir->UseVisualStyleBackColor = true;
			this->buttonAbrir->Click += gcnew System::EventHandler(this, &MyForm::buttonAbrir_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonModificar);
			this->groupBox2->Controls->Add(this->buttonEliminar);
			this->groupBox2->Controls->Add(this->buttonInsertar);
			this->groupBox2->Controls->Add(this->buttonConsultar);
			this->groupBox2->Location = System::Drawing::Point(222, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(191, 285);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Personas";
			// 
			// buttonModificar
			// 
			this->buttonModificar->Location = System::Drawing::Point(58, 226);
			this->buttonModificar->Name = L"buttonModificar";
			this->buttonModificar->Size = System::Drawing::Size(75, 23);
			this->buttonModificar->TabIndex = 3;
			this->buttonModificar->Text = L"Modificar";
			this->buttonModificar->UseVisualStyleBackColor = true;
			this->buttonModificar->Click += gcnew System::EventHandler(this, &MyForm::buttonModificar_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(58, 153);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(75, 23);
			this->buttonEliminar->TabIndex = 2;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &MyForm::buttonEliminar_Click);
			// 
			// buttonInsertar
			// 
			this->buttonInsertar->Location = System::Drawing::Point(58, 96);
			this->buttonInsertar->Name = L"buttonInsertar";
			this->buttonInsertar->Size = System::Drawing::Size(75, 23);
			this->buttonInsertar->TabIndex = 1;
			this->buttonInsertar->Text = L"Insertar";
			this->buttonInsertar->UseVisualStyleBackColor = true;
			this->buttonInsertar->Click += gcnew System::EventHandler(this, &MyForm::buttonInsertar_Click);
			// 
			// buttonConsultar
			// 
			this->buttonConsultar->Location = System::Drawing::Point(58, 32);
			this->buttonConsultar->Name = L"buttonConsultar";
			this->buttonConsultar->Size = System::Drawing::Size(75, 23);
			this->buttonConsultar->TabIndex = 0;
			this->buttonConsultar->Text = L"Consultar";
			this->buttonConsultar->UseVisualStyleBackColor = true;
			this->buttonConsultar->Click += gcnew System::EventHandler(this, &MyForm::buttonConsultar_Click);
			// 
			// groupBoxCaja
			// 
			this->groupBoxCaja->Controls->Add(this->textBox6);
			this->groupBoxCaja->Controls->Add(this->buttonCancelar);
			this->groupBoxCaja->Controls->Add(this->buttonPrincipal);
			this->groupBoxCaja->Controls->Add(this->buttonLimpiar);
			this->groupBoxCaja->Controls->Add(this->buttonConsul);
			this->groupBoxCaja->Controls->Add(this->textBox5);
			this->groupBoxCaja->Controls->Add(this->textBox4);
			this->groupBoxCaja->Controls->Add(this->textBox3);
			this->groupBoxCaja->Controls->Add(this->textBox2);
			this->groupBoxCaja->Controls->Add(this->textBox1);
			this->groupBoxCaja->Controls->Add(this->label5);
			this->groupBoxCaja->Controls->Add(this->label4);
			this->groupBoxCaja->Controls->Add(this->label3);
			this->groupBoxCaja->Controls->Add(this->label2);
			this->groupBoxCaja->Controls->Add(this->label1);
			this->groupBoxCaja->Location = System::Drawing::Point(13, 333);
			this->groupBoxCaja->Name = L"groupBoxCaja";
			this->groupBoxCaja->Size = System::Drawing::Size(400, 285);
			this->groupBoxCaja->TabIndex = 3;
			this->groupBoxCaja->TabStop = false;
			this->groupBoxCaja->Text = L"Caja";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(0, 265);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(400, 20);
			this->textBox6->TabIndex = 14;
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(310, 221);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(75, 23);
			this->buttonCancelar->TabIndex = 13;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &MyForm::buttonCancelar_Click);
			// 
			// buttonPrincipal
			// 
			this->buttonPrincipal->Location = System::Drawing::Point(229, 221);
			this->buttonPrincipal->Name = L"buttonPrincipal";
			this->buttonPrincipal->Size = System::Drawing::Size(75, 23);
			this->buttonPrincipal->TabIndex = 12;
			this->buttonPrincipal->Text = L"Principal";
			this->buttonPrincipal->UseVisualStyleBackColor = true;
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(147, 221);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
			this->buttonLimpiar->TabIndex = 11;
			this->buttonLimpiar->Text = L"Limpiar";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			// 
			// buttonConsul
			// 
			this->buttonConsul->Location = System::Drawing::Point(303, 37);
			this->buttonConsul->Name = L"buttonConsul";
			this->buttonConsul->Size = System::Drawing::Size(75, 23);
			this->buttonConsul->TabIndex = 10;
			this->buttonConsul->Text = L"Consultar";
			this->buttonConsul->UseVisualStyleBackColor = true;
			this->buttonConsul->Click += gcnew System::EventHandler(this, &MyForm::buttonConsul_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 184);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(150, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 146);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(231, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(231, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(231, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fecha de Nacimiento";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Segundo Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Primer Apellido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cédula";
			// 
			// groupBoxDocumento
			// 
			this->groupBoxDocumento->Controls->Add(this->buttonCance);
			this->groupBoxDocumento->Controls->Add(this->buttonEspecial);
			this->groupBoxDocumento->Controls->Add(this->textBoxDocumento);
			this->groupBoxDocumento->Controls->Add(this->label6);
			this->groupBoxDocumento->Location = System::Drawing::Point(449, 13);
			this->groupBoxDocumento->Name = L"groupBoxDocumento";
			this->groupBoxDocumento->Size = System::Drawing::Size(402, 285);
			this->groupBoxDocumento->TabIndex = 4;
			this->groupBoxDocumento->TabStop = false;
			this->groupBoxDocumento->Text = L"Documento";
			// 
			// buttonCance
			// 
			this->buttonCance->Location = System::Drawing::Point(302, 244);
			this->buttonCance->Name = L"buttonCance";
			this->buttonCance->Size = System::Drawing::Size(75, 23);
			this->buttonCance->TabIndex = 3;
			this->buttonCance->Text = L"Cancelar";
			this->buttonCance->UseVisualStyleBackColor = true;
			this->buttonCance->Click += gcnew System::EventHandler(this, &MyForm::buttonCance_Click);
			// 
			// buttonEspecial
			// 
			this->buttonEspecial->Location = System::Drawing::Point(22, 244);
			this->buttonEspecial->Name = L"buttonEspecial";
			this->buttonEspecial->Size = System::Drawing::Size(82, 23);
			this->buttonEspecial->TabIndex = 2;
			this->buttonEspecial->Text = L"Especial";
			this->buttonEspecial->UseVisualStyleBackColor = true;
			// 
			// textBoxDocumento
			// 
			this->textBoxDocumento->Location = System::Drawing::Point(22, 99);
			this->textBoxDocumento->Name = L"textBoxDocumento";
			this->textBoxDocumento->Size = System::Drawing::Size(355, 20);
			this->textBoxDocumento->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Archivo especial";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(863, 630);
			this->Controls->Add(this->groupBoxDocumento);
			this->Controls->Add(this->groupBoxCaja);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBoxArchivo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBoxArchivo->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBoxCaja->ResumeLayout(false);
			this->groupBoxCaja->PerformLayout();
			this->groupBoxDocumento->ResumeLayout(false);
			this->groupBoxDocumento->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Artibutos
		private:
			Label^ createLabel(String^ title, Drawing::Font^ font, int posx, int posy, int sizex, int sizey);
			Button^ createButton(String ^ title, int posx, int posy, int sizex, int sizey);
			bool revisarInt(String^ tira);
			bool revisarTodoInt(String^ tira, int posicion);
			bool revisarFechaN(String^ tira);
	private: System::Void buttonConsultar_Click(System::Object^  sender, System::EventArgs^  e);
			
private: System::Void buttonInsertar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonEliminar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonModificar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonAbrir_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonGuardar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonGuardarC_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonCance_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonCancelar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonSalir_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonConsul_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonInsert_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonModifi_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void buttonBorr_Click(System::Object^  sender, System::EventArgs^  e);
};
}
