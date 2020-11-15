#pragma once
#include <iostream>
#include "FIguraMorgen.h"
#include "ferz.h"
#include "Peshka.h"
#include "SlonSlawaMarlow.h"

namespace b1t112o22x25912o {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RadioButton^ PESHKA;
	private: System::Windows::Forms::RadioButton^ FERZ;
	private: System::Windows::Forms::RadioButton^ SLON;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ PX;
	private: System::Windows::Forms::TextBox^ PY;
	private: System::Windows::Forms::TextBox^ FX;
	private: System::Windows::Forms::TextBox^ FY;
	private: System::Windows::Forms::TextBox^ SX;
	private: System::Windows::Forms::TextBox^ SY;
	private: System::Windows::Forms::Label^ res;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PESHKA = (gcnew System::Windows::Forms::RadioButton());
			this->FERZ = (gcnew System::Windows::Forms::RadioButton());
			this->SLON = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PX = (gcnew System::Windows::Forms::TextBox());
			this->PY = (gcnew System::Windows::Forms::TextBox());
			this->FX = (gcnew System::Windows::Forms::TextBox());
			this->FY = (gcnew System::Windows::Forms::TextBox());
			this->SX = (gcnew System::Windows::Forms::TextBox());
			this->SY = (gcnew System::Windows::Forms::TextBox());
			this->res = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PESHKA
			// 
			this->PESHKA->AutoSize = true;
			this->PESHKA->Location = System::Drawing::Point(187, 39);
			this->PESHKA->Name = L"PESHKA";
			this->PESHKA->Size = System::Drawing::Size(73, 21);
			this->PESHKA->TabIndex = 1;
			this->PESHKA->TabStop = true;
			this->PESHKA->Text = L"Пешка";
			this->PESHKA->UseVisualStyleBackColor = true;
			// 
			// FERZ
			// 
			this->FERZ->AutoSize = true;
			this->FERZ->Location = System::Drawing::Point(482, 39);
			this->FERZ->Name = L"FERZ";
			this->FERZ->Size = System::Drawing::Size(72, 21);
			this->FERZ->TabIndex = 2;
			this->FERZ->TabStop = true;
			this->FERZ->Text = L"Ферзь";
			this->FERZ->UseVisualStyleBackColor = true;
			this->FERZ->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// SLON
			// 
			this->SLON->AutoSize = true;
			this->SLON->Location = System::Drawing::Point(806, 39);
			this->SLON->Name = L"SLON";
			this->SLON->Size = System::Drawing::Size(62, 21);
			this->SLON->TabIndex = 3;
			this->SLON->TabStop = true;
			this->SLON->Text = L"Слон";
			this->SLON->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Star Jedi_Cyrillic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(289, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(500, 99);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// PX
			// 
			this->PX->Location = System::Drawing::Point(160, 78);
			this->PX->Name = L"PX";
			this->PX->Size = System::Drawing::Size(116, 22);
			this->PX->TabIndex = 5;
			// 
			// PY
			// 
			this->PY->Location = System::Drawing::Point(160, 106);
			this->PY->Name = L"PY";
			this->PY->Size = System::Drawing::Size(116, 22);
			this->PY->TabIndex = 6;
			// 
			// FX
			// 
			this->FX->Location = System::Drawing::Point(461, 78);
			this->FX->Name = L"FX";
			this->FX->Size = System::Drawing::Size(116, 22);
			this->FX->TabIndex = 7;
			// 
			// FY
			// 
			this->FY->Location = System::Drawing::Point(461, 106);
			this->FY->Name = L"FY";
			this->FY->Size = System::Drawing::Size(116, 22);
			this->FY->TabIndex = 8;
			// 
			// SX
			// 
			this->SX->Location = System::Drawing::Point(782, 78);
			this->SX->Name = L"SX";
			this->SX->Size = System::Drawing::Size(116, 22);
			this->SX->TabIndex = 9;
			// 
			// SY
			// 
			this->SY->Location = System::Drawing::Point(782, 106);
			this->SY->Name = L"SY";
			this->SY->Size = System::Drawing::Size(116, 22);
			this->SY->TabIndex = 10;
			// 
			// res
			// 
			this->res->AutoSize = true;
			this->res->Font = (gcnew System::Drawing::Font(L"Ninja Naruto", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->res->Location = System::Drawing::Point(121, 200);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(108, 27);
			this->res->TabIndex = 11;
			this->res->Text = L"Result:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"VCR OSD Mono [RUS by Daymarius]", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(406, 467);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ХУЙЛО БАТАЛОВ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(440, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"x";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(440, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(761, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"x";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(761, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"y";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 537);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->res);
			this->Controls->Add(this->SY);
			this->Controls->Add(this->SX);
			this->Controls->Add(this->FY);
			this->Controls->Add(this->FX);
			this->Controls->Add(this->PY);
			this->Controls->Add(this->PX);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SLON);
			this->Controls->Add(this->FERZ);
			this->Controls->Add(this->PESHKA);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int px3 = Convert::ToInt32(PX->Text);
	int py3 = Convert::ToInt32(PY->Text);
	int fx3 = Convert::ToInt32(FX->Text);
	int fy3 = Convert::ToInt32(FY->Text);
	int sx3 = Convert::ToInt32(SX->Text);
	int sy3 = Convert::ToInt32(SY->Text);
	int a;
	Peshka p1(px3, py3);
	ferz f1(fx3, fy3);
	SlonSlawaMarlow s1(sx3, sy3);
	FIguraMorgen f(px3, py3, sx3, sy3, fx3,fy3);
	if (PESHKA->Checked)
	{
		a = f.take(1);
		if (a == 11)
			res->Text = " ест слона и ферзя";
		if (a == 10)
			res->Text = " ест слона";
		if (a == 2)
			res->Text = " ест ферзя";
		if(a==0)
			res->Text = " никого не ест ";
	}
	if (SLON->Checked)
	{
		a = f.take(2);
		if (a == 11)
			res->Text = " ест пешку и ферзя";
		if (a == 10)
			res->Text = " ест пешку";
		if (a == 2)
			res->Text = " ест ферзя";
		if (a == 0)
			res->Text = " никого не ест ";
	}
	if (FERZ->Checked)
	{
		a = f.take(3);
		if (a == 11)
			res->Text = " ест слона и пешку";
		if (a == 10)
			res->Text = " ест слона";
		if (a == 2)
			res->Text = " ест пешку";
		if (a == 0)
			res->Text = " никого не ест ";
	}


}
};
}
