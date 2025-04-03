#pragma once
#include<string>
#include <msclr\marshal_cppstd.h>
#include<iostream>


namespace ipmoi {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: double first_zub_width = 0;
	private: double second_zub_width = 0;
	private: double third_zub_width = 0;
	private: double first_zub_heigh = 0;
	private: double second_zub_heigh = 0;
	private: double third_zub_heigh = 0;
	private: double a;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 20);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(691, 313);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(65, 317);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(303, 317);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(490, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(458, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 21);
			this->button1->TabIndex = 6;
			this->button1->Text = L"расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(216, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(431, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(644, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(245, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"введите расстояние между клыками    ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"передний резец";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(285, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"боковой резец";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(563, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"клык";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 406);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"ПРОГРАММА ДЛЯ РАСЧЕТА ИДЕАЛЬНОЙ ПРОПОРЦИИ РАЗМЕРА ФРОНТОВОЙ ГРУППЫ ЗУБОВ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion






private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	char r[12]{'0','1','2','3','4','5','6','7','8','9',',','.'};
	bool u = true;


	std::string t = msclr::interop::marshal_as<std::string>(textBox1->Text);


	
	if (empty(t)) {
		a = 0;
	}
	else {
		for (int i = 0; i < size(t); i++) {
			switch (t[i])
			{
			case '0':
				break;
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			case '5':
				break;
			case '6':
				break;
			case '7':
				break;
			case '8':
				break;
			case '9':
				break;
			case ',':
				break;
			case '.':
				t[i] = ',';
				break;
			default:
				t.erase(i, 1);
				if (i == 0) {
				}
				else{ i = i - 1; }
				
				break;
			}
		}
		
		//std::cout << t;
		String^ str2 = gcnew String(t.c_str());
		a = System::Convert::ToDouble(str2);

	}

	first_zub_width = a / 4;
	second_zub_width = first_zub_width / 1.618033;
	third_zub_width = second_zub_width / 1.618033;
	
	
	first_zub_heigh = first_zub_width / 0.75;
	second_zub_heigh = second_zub_width / 0.75;
	third_zub_heigh = (third_zub_width*2) / 0.75;



	this->label1->Text = System::Convert::ToString(first_zub_width);
	this->label2->Text = System::Convert::ToString(second_zub_width);
	this->label3->Text = System::Convert::ToString(third_zub_width);



	this->label4->Text = System::Convert::ToString(first_zub_heigh);
	this->label5->Text = System::Convert::ToString(second_zub_heigh);
	this->label6->Text = System::Convert::ToString(third_zub_heigh);



}
};
}
