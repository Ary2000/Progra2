#pragma once

namespace Project1 {

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  buttonAbrir;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  Personas;
	private: System::Windows::Forms::GroupBox^  Modificar;
	private: System::Windows::Forms::Button^  buttonModificar;
	private: System::Windows::Forms::Button^  buttonEliminar;
	private: System::Windows::Forms::Button^  buttonInsertar;
	private: System::Windows::Forms::Button^  buttonConsultar;













	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  buttonCancelar;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  buttonLimpiar;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label20;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonAbrir = (gcnew System::Windows::Forms::Button());
			this->Personas = (gcnew System::Windows::Forms::GroupBox());
			this->buttonModificar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonInsertar = (gcnew System::Windows::Forms::Button());
			this->buttonConsultar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->Personas->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->buttonAbrir);
			this->groupBox1->Location = System::Drawing::Point(13, 322);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(149, 263);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Archivo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(38, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Guardar como";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonAbrir
			// 
			this->buttonAbrir->Location = System::Drawing::Point(38, 41);
			this->buttonAbrir->Name = L"buttonAbrir";
			this->buttonAbrir->Size = System::Drawing::Size(75, 23);
			this->buttonAbrir->TabIndex = 0;
			this->buttonAbrir->Text = L"Abrir";
			this->buttonAbrir->UseVisualStyleBackColor = true;
			// 
			// Personas
			// 
			this->Personas->Controls->Add(this->buttonModificar);
			this->Personas->Controls->Add(this->buttonEliminar);
			this->Personas->Controls->Add(this->buttonInsertar);
			this->Personas->Controls->Add(this->buttonConsultar);
			this->Personas->Location = System::Drawing::Point(168, 322);
			this->Personas->Name = L"Personas";
			this->Personas->Size = System::Drawing::Size(168, 263);
			this->Personas->TabIndex = 1;
			this->Personas->TabStop = false;
			this->Personas->Text = L"Personas";
			// 
			// buttonModificar
			// 
			this->buttonModificar->Location = System::Drawing::Point(46, 214);
			this->buttonModificar->Name = L"buttonModificar";
			this->buttonModificar->Size = System::Drawing::Size(75, 23);
			this->buttonModificar->TabIndex = 3;
			this->buttonModificar->Text = L"Modificar";
			this->buttonModificar->UseVisualStyleBackColor = true;
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(46, 157);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(75, 23);
			this->buttonEliminar->TabIndex = 2;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			// 
			// buttonInsertar
			// 
			this->buttonInsertar->Location = System::Drawing::Point(46, 100);
			this->buttonInsertar->Name = L"buttonInsertar";
			this->buttonInsertar->Size = System::Drawing::Size(75, 23);
			this->buttonInsertar->TabIndex = 1;
			this->buttonInsertar->Text = L"Insertar";
			this->buttonInsertar->UseVisualStyleBackColor = true;
			// 
			// buttonConsultar
			// 
			this->buttonConsultar->Location = System::Drawing::Point(46, 41);
			this->buttonConsultar->Name = L"buttonConsultar";
			this->buttonConsultar->Size = System::Drawing::Size(75, 23);
			this->buttonConsultar->TabIndex = 0;
			this->buttonConsultar->Text = L"Consultar";
			this->buttonConsultar->UseVisualStyleBackColor = true;
			this->buttonConsultar->Click += gcnew System::EventHandler(this, &MyForm::buttonConsultar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonLimpiar);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->buttonCancelar);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Location = System::Drawing::Point(351, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(323, 285);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Insertar";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(155, 233);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Insertar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(236, 233);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(75, 23);
			this->buttonCancelar->TabIndex = 12;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(2, 262);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(321, 20);
			this->textBox7->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(125, 183);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(105, 20);
			this->textBox8->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Fecha de Nacimiento";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(125, 144);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(186, 20);
			this->textBox9->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Segundo Apellido";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(125, 102);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(186, 20);
			this->textBox10->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 105);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Primer Apellido";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(125, 63);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(186, 20);
			this->textBox11->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Nombre";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(236, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Consultar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(125, 21);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(103, 20);
			this->textBox12->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Cédula";
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(74, 233);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
			this->buttonLimpiar->TabIndex = 14;
			this->buttonLimpiar->Text = L"Limpiar";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(13, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(323, 285);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Insertar";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			//groupBox3->Hide();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(155, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Insertar";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(236, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Cancelar";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(2, 262);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(321, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Fecha de Nacimiento";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Segundo Apellido";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(125, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(186, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Primer Apellido";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(125, 63);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(186, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nombre";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(236, 19);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Consultar";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(125, 21);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(103, 20);
			this->textBox6->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Cédula";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Location = System::Drawing::Point(351, 303);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(323, 285);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Eliminar";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(74, 233);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Limpiar";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(155, 233);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Eliminar";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(236, 233);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Cancelar";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(2, 262);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(321, 20);
			this->textBox13->TabIndex = 11;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(125, 183);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(105, 20);
			this->textBox14->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Fecha de Nacimiento";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(125, 144);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(186, 20);
			this->textBox15->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 147);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 13);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Segundo Apellido";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(125, 102);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(186, 20);
			this->textBox16->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(76, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Primer Apellido";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(125, 63);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(186, 20);
			this->textBox17->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Nombre";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(236, 19);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Consultar";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(125, 21);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(103, 20);
			this->textBox18->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(8, 30);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Cédula";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->textBox19);
			this->groupBox5->Controls->Add(this->textBox20);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBox21);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->textBox22);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->textBox23);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->button17);
			this->groupBox5->Controls->Add(this->textBox24);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Location = System::Drawing::Point(13, 591);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(323, 285);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Modificar";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(74, 233);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 14;
			this->button14->Text = L"Limpiar";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(155, 233);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 13;
			this->button15->Text = L"Modificar";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(236, 233);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 12;
			this->button16->Text = L"Cancelar";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(2, 262);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(321, 20);
			this->textBox19->TabIndex = 11;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(125, 183);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(105, 20);
			this->textBox20->TabIndex = 10;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 186);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(108, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Fecha de Nacimiento";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(125, 144);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(186, 20);
			this->textBox21->TabIndex = 8;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 147);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(90, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Segundo Apellido";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(125, 102);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(186, 20);
			this->textBox22->TabIndex = 6;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 105);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 13);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Primer Apellido";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(125, 63);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(186, 20);
			this->textBox23->TabIndex = 4;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 66);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(44, 13);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Nombre";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(236, 19);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Consultar";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(125, 21);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(103, 20);
			this->textBox24->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 30);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(40, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Cédula";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 1061);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Personas);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->Personas->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//Atributos
		Label^ createLabel(String^ title, Drawing::Font^ font, int posx, int posy, int sizex, int sizey);
		Button^ createButton(String^ title, int posx, int posy, int sizex, int sizey);
		TextBox^ createTextBox(int posx, int posy, int sizex, int sizey);
		GroupBox^ createGroupBox(int posx, int posy, int sizex, int sizey, String^ titulo);


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void buttonConsultar_Click(System::Object^  sender, System::EventArgs^  e);
//Boton consultar
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
//Boton insertar
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
