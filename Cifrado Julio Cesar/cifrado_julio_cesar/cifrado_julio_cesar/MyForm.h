#pragma once
#include <string.h>
#include <string>
namespace cifrado_julio_cesar {

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
	private: System::Windows::Forms::TabControl^  tbCifrar;
	private: System::Windows::Forms::TabPage^  Cifrar;
	protected:

	private: System::Windows::Forms::TextBox^  txtResCif;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnCifrar;
	private: System::Windows::Forms::TextBox^  txtB;
	private: System::Windows::Forms::TextBox^  txtA;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtCifrar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  btnDescifrar;
	private: System::Windows::Forms::TextBox^  txtDescifrado;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtBDES;
	private: System::Windows::Forms::TextBox^  txtADES;
	private: System::Windows::Forms::TextBox^  txtDescifrarCifrado;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tbCifrar = (gcnew System::Windows::Forms::TabControl());
			this->Cifrar = (gcnew System::Windows::Forms::TabPage());
			this->txtResCif = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCifrar = (gcnew System::Windows::Forms::Button());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCifrar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDescifrar = (gcnew System::Windows::Forms::Button());
			this->txtDescifrado = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtBDES = (gcnew System::Windows::Forms::TextBox());
			this->txtADES = (gcnew System::Windows::Forms::TextBox());
			this->txtDescifrarCifrado = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tbCifrar->SuspendLayout();
			this->Cifrar->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tbCifrar
			// 
			this->tbCifrar->Controls->Add(this->Cifrar);
			this->tbCifrar->Controls->Add(this->tabPage2);
			this->tbCifrar->Location = System::Drawing::Point(0, 3);
			this->tbCifrar->Name = L"tbCifrar";
			this->tbCifrar->SelectedIndex = 0;
			this->tbCifrar->Size = System::Drawing::Size(716, 408);
			this->tbCifrar->TabIndex = 0;
			// 
			// Cifrar
			// 
			this->Cifrar->BackColor = System::Drawing::Color::LightGreen;
			this->Cifrar->Controls->Add(this->pictureBox1);
			this->Cifrar->Controls->Add(this->txtResCif);
			this->Cifrar->Controls->Add(this->label5);
			this->Cifrar->Controls->Add(this->btnCifrar);
			this->Cifrar->Controls->Add(this->txtB);
			this->Cifrar->Controls->Add(this->txtA);
			this->Cifrar->Controls->Add(this->label4);
			this->Cifrar->Controls->Add(this->label3);
			this->Cifrar->Controls->Add(this->label2);
			this->Cifrar->Controls->Add(this->txtCifrar);
			this->Cifrar->Controls->Add(this->label1);
			this->Cifrar->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cifrar->Location = System::Drawing::Point(4, 22);
			this->Cifrar->Name = L"Cifrar";
			this->Cifrar->Padding = System::Windows::Forms::Padding(3);
			this->Cifrar->Size = System::Drawing::Size(708, 382);
			this->Cifrar->TabIndex = 0;
			this->Cifrar->Text = L"Cifrado";
			this->Cifrar->Click += gcnew System::EventHandler(this, &MyForm::Cifrar_Click);
			// 
			// txtResCif
			// 
			this->txtResCif->Enabled = false;
			this->txtResCif->Location = System::Drawing::Point(32, 290);
			this->txtResCif->Multiline = true;
			this->txtResCif->Name = L"txtResCif";
			this->txtResCif->Size = System::Drawing::Size(302, 57);
			this->txtResCif->TabIndex = 16;
			this->txtResCif->TextChanged += gcnew System::EventHandler(this, &MyForm::txtResCif_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 15);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Texto Cifrado :";
			// 
			// btnCifrar
			// 
			this->btnCifrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCifrar.Image")));
			this->btnCifrar->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnCifrar->Location = System::Drawing::Point(124, 236);
			this->btnCifrar->Name = L"btnCifrar";
			this->btnCifrar->Size = System::Drawing::Size(98, 25);
			this->btnCifrar->TabIndex = 14;
			this->btnCifrar->Text = L"Cifrar";
			this->btnCifrar->UseVisualStyleBackColor = true;
			this->btnCifrar->Click += gcnew System::EventHandler(this, &MyForm::btnCifrar_Click);
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(264, 171);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(28, 23);
			this->txtB->TabIndex = 13;
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(60, 168);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(28, 23);
			this->txtA->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(232, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"B";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"CLAVES";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txtCifrar
			// 
			this->txtCifrar->Location = System::Drawing::Point(32, 45);
			this->txtCifrar->Multiline = true;
			this->txtCifrar->Name = L"txtCifrar";
			this->txtCifrar->Size = System::Drawing::Size(302, 57);
			this->txtCifrar->TabIndex = 8;
			this->txtCifrar->TextChanged += gcnew System::EventHandler(this, &MyForm::txtCifrar_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Inserte texto a cifrar :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Bisque;
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->btnDescifrar);
			this->tabPage2->Controls->Add(this->txtDescifrado);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->txtBDES);
			this->tabPage2->Controls->Add(this->txtADES);
			this->tabPage2->Controls->Add(this->txtDescifrarCifrado);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->ForeColor = System::Drawing::Color::Black;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(708, 382);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Descifrar";
			// 
			// btnDescifrar
			// 
			this->btnDescifrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDescifrar.Image")));
			this->btnDescifrar->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnDescifrar->Location = System::Drawing::Point(219, 248);
			this->btnDescifrar->Name = L"btnDescifrar";
			this->btnDescifrar->Size = System::Drawing::Size(91, 25);
			this->btnDescifrar->TabIndex = 9;
			this->btnDescifrar->Text = L"Descifrar";
			this->btnDescifrar->UseVisualStyleBackColor = true;
			this->btnDescifrar->Click += gcnew System::EventHandler(this, &MyForm::btnDescifrar_Click);
			// 
			// txtDescifrado
			// 
			this->txtDescifrado->Enabled = false;
			this->txtDescifrado->Location = System::Drawing::Point(84, 298);
			this->txtDescifrado->Multiline = true;
			this->txtDescifrado->Name = L"txtDescifrado";
			this->txtDescifrado->Size = System::Drawing::Size(305, 56);
			this->txtDescifrado->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(84, 282);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 15);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Texto Descifrado";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(339, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 15);
			this->label9->TabIndex = 6;
			this->label9->Text = L"B";
			// 
			// txtBDES
			// 
			this->txtBDES->Location = System::Drawing::Point(359, 190);
			this->txtBDES->Name = L"txtBDES";
			this->txtBDES->Size = System::Drawing::Size(30, 23);
			this->txtBDES->TabIndex = 5;
			// 
			// txtADES
			// 
			this->txtADES->Location = System::Drawing::Point(167, 187);
			this->txtADES->Name = L"txtADES";
			this->txtADES->Size = System::Drawing::Size(30, 23);
			this->txtADES->TabIndex = 4;
			// 
			// txtDescifrarCifrado
			// 
			this->txtDescifrarCifrado->Location = System::Drawing::Point(84, 59);
			this->txtDescifrarCifrado->Multiline = true;
			this->txtDescifrarCifrado->Name = L"txtDescifrarCifrado";
			this->txtDescifrarCifrado->Size = System::Drawing::Size(305, 59);
			this->txtDescifrarCifrado->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(147, 190);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 15);
			this->label8->TabIndex = 2;
			this->label8->Text = L"A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(239, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"CLAVES";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(81, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L" Texto a Descifrar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(337, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 89);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(26, 147);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 82);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 413);
			this->Controls->Add(this->tbCifrar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Trabajo Parcial";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tbCifrar->ResumeLayout(false);
			this->Cifrar->ResumeLayout(false);
			this->Cifrar->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		int getGCD(int a, int b)
		{
			int c;
			while (a != 0) { c = a; a = b%a; b = c; }
			return b;
		}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtCifrar_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnCifrar_Click(System::Object^  sender, System::EventArgs^  e) {
	int a, b;
	char* frase;
	frase = new char[txtCifrar->TextLength];
	sprintf(frase, "%s", txtCifrar->Text);
	/*sprintf(frase, "%s", txtDescifrarCifrado->Text);*/
	
	a = Convert::ToInt32(txtA->Text);
	b = Convert::ToInt32(txtB->Text);
	
	int tamano = strlen(frase);
	int *aux;
	char *aux2;
	aux = new int[tamano];
	aux2 = new char[tamano];

	if (getGCD(a, b) == 1 && getGCD(a,256)==1)
	{
		//hacemos todo el programa. 
		for (int i = 0; i < tamano; i++)
		{
			aux[i] = frase[i];
		}

		for (int i = 0; i < tamano; i++)
		{
			aux2[i] = (a*aux[i] + b) % 256;

		}
		char* khe = new char[tamano];
		khe = aux2;
		khe[tamano] = '\0';
		for (int i = 0; i < tamano; i++)
			txtResCif->Text = gcnew String(khe);

		txtDescifrarCifrado->Text = gcnew String(khe);

	}
	else
	{
		MessageBox::Show("Ingrese numeros viables para la operacion.");
	}

	


}
private: System::Void btnDescifrar_Click(System::Object^  sender, System::EventArgs^  e) {
	int a, b;
	char* frase2;
	frase2 = new char[txtDescifrarCifrado->TextLength];
	sprintf(frase2, "%s", txtDescifrarCifrado->Text);
	a = Convert::ToInt32(txtADES->Text);
	b = Convert::ToInt32(txtBDES->Text);

	int tamano = strlen(frase2);
	int w;//inverso modular de a.
	int *aux3 = new int[tamano];
	char *aux4 = new char[tamano];
	for (int x = 0; x < 100000; x++)
	{
		if ((a*x) % 256 == 1)
		{
				w= x;
			break;
		}
	}
	if (getGCD(a, b) == 1 && getGCD(a, 256) == 1)
	{
		for (int i = 0; i < tamano; i++)
		{
			aux3[i] = frase2[i];
			aux4[i] = ((aux3[i] - b)*w) % 256;//guarda el valor inicial en el aux 4.
		}
		char* khe2 = new char[tamano];
		khe2 = aux4;
		khe2[tamano] = '\0';
		for (int i = 0; i < tamano; i++)
			txtDescifrado->Text = gcnew String(khe2);

	}
	else
	{
		MessageBox::Show("Ingrese numeros viables para la operacion.");
	}



}
private: System::Void txtCifrar_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtResCif_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Cifrar_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
