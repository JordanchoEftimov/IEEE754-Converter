#pragma once
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <bitset>
#include <locale>
#include <iostream>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(353, 31);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(386, 43);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Floating Point Converter";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(335, 145);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(426, 21);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Претставување на број во формат со единечна прецизност";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(335, 174);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(352, 21);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Претворање на број од единечна прецизност во";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(381, 110);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ве молиме изберете една од понудените опции";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(357, 198);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"бинарен и декаден";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(335, 246);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(440, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(505, 290);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Конвертирај";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 357);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(280, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"1. Знак (0 за позитивен, 1 за негативен):";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(800, 353);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"X";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::Red;
			this->textBox3->Location = System::Drawing::Point(720, 385);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Number not inserted";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(283, 389);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"2. Експонент:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(283, 423);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"3. Мантиса:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(283, 540);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"6. Бројот претставен бинарно:";
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::Red;
			this->textBox4->Location = System::Drawing::Point(720, 537);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 16;
			this->textBox4->Text = L"Number not inserted";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(521, 459);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(331, 22);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"Number not inserted";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(575, 420);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(277, 22);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"Number not inserted";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(282, 577);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(210, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"7. Бројот претставен декадно:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(16, 11);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 15);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Made by : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 31);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 15);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Jordancho Eftimov";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 49);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 15);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Angela Dimitrova";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(283, 501);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(249, 17);
			this->label12->TabIndex = 23;
			this->label12->Text = L"5. Хексадецимална репрезентација:";
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(671, 498);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 22);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"Number not inserted";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(283, 462);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(231, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"4. Бројот претставен во IEE754 e:";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::Red;
			this->textBox8->Location = System::Drawing::Point(720, 574);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(132, 22);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"Number not inserted";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 629);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"IEE754 Floating Point Converter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Insert a number";
		textBox1->ForeColor = Color::Gray;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Insert binary number";
		textBox1->ForeColor = Color::Gray;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::cin.imbue(std::locale(""));
		std::cout.imbue(std::locale(""));
		if (textBox1->TextLength == 0 || textBox1->Text == "Insert decimal number" ||
			textBox1->Text == "Insert binary number") {
			MessageBox::Show("The text field is empty!", "Error!",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			//Jocka
			if (radioButton1->Checked) {
				String^ in = textBox1->Text;

				bool flag = false;
				bool found_once = false;

				if (in[0] != '-' && in[0] != '+' && !isdigit(in[0])) {
					flag = true;
				}
				for (int i = 1; i < in->Length; i++) {
					if (found_once && (in[i] == ',' || in[i] == '.')) {
						flag = true;
					}
					if (!found_once && (in[i] == ',' || in[i] == '.')) {
						found_once = true;
					}
					else if (!isdigit(in[i])) {
						flag = true;
					}
				}
				if (in->Length > 12) {
					MessageBox::Show("Maximum input length exceeded!", "Invalid input",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (flag) {
					MessageBox::Show("Please insert a valid number!", "Invalid number",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					textBox8->Text = in;
					textBox8->ForeColor = Color::Black;

					float number = (float)System::Convert::ToDouble(in);
					float tempNumber = number;
					String^ binaryRepresentation;
					if (number < 0) {
						tempNumber = number * (double)-1;
						binaryRepresentation += "-";
					}

					int integerPart = tempNumber;
					float fractionalPart = tempNumber - integerPart;

					char b[100];
					int indexBits = 0;
					while (integerPart) {
						b[indexBits++] = integerPart % 2;
						integerPart /= 2;
					}

					int lengthBinary = indexBits;

					for (int i = lengthBinary - 1; i >= 0; i--) {
						binaryRepresentation += System::Convert::ToString(b[i]);
					}

					if (fractionalPart != 0) {
						binaryRepresentation += ",";
						indexBits = 0;
						while (indexBits < 10) {
							fractionalPart *= 2;
							int toAdd = (int)fractionalPart;
							b[indexBits++] = toAdd;
							if (fractionalPart == 1.0) {
								break;
							}
							fractionalPart -= toAdd;
						}

						lengthBinary = indexBits;
						for (int i = 0; i < lengthBinary; i++) {
							binaryRepresentation += System::Convert::ToString(b[i]);
						}
					}

					textBox4->Text = binaryRepresentation;
					textBox4->ForeColor = Color::Black;

					int* temp = (int*)&number;
					bitset<32> allbits(*temp);

					char array[32];

					for (int i = 0; i < allbits.size(); i++) {
						array[i] = allbits[i];
					}

					int int_array[32];

					for (int i = allbits.size() - 1; i >= 0; i--) {
						int_array[i] = array[i];
					}

					String^ bits = "";
					for (int i = allbits.size() - 1; i >= 0; i--) {
						bits += int_array[i];
					}

					textBox5->Text = bits;
					textBox5->ForeColor = Color::Black;

					String^ sign = System::Convert::ToString(int_array[31]);
					textBox2->Text = sign;
					textBox2->ForeColor = Color::Black;

					String^ exponent = "";
					for (int i = 30; i > 22; i--) {
						exponent += int_array[i];
					}

					textBox3->Text = exponent;
					textBox3->ForeColor = Color::Black;

					String^ mantisa = "";
					for (int i = 22; i >= 0; i--) {
						mantisa += int_array[i];
					}

					textBox6->Text = mantisa;
					textBox6->ForeColor = Color::Black;

					String^ hexa = "0x";
					unsigned long int decimal = 0;
					for (int i = 0; i < allbits.size(); i++) {
						decimal += int_array[i] * pow(2, i);
					}

					char hex[8];
					int i = 0;
					while (decimal) {
						int remainder = decimal % 16;
						if (remainder < 10) {
							hex[i++] = System::Convert::ToChar(remainder + 48);
						}
						else {
							hex[i++] = System::Convert::ToChar(remainder + 55);
						}
						decimal /= 16;
					}

					for (int i = 7; i >= 0; i--) {
						hexa += System::Convert::ToChar(hex[i]);
					}

					textBox7->Text = hexa;
					textBox7->ForeColor = Color::Black;
				}
			}

			//Angela
			if (radioButton2->Checked) {
				String^ in = textBox1->Text;
				//Jocka
				bool notBinary = false;

				for (int i = 0; i < in->Length; i++) {
					if (in[i] != '0' && in[i] != '1')
						notBinary = true;
				}

				if (notBinary) {
					MessageBox::Show("Please insert a valid binary string!", "Invalid binary string",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else if (in->Length != 32) {
					MessageBox::Show("Please insert exactly 32 bits!", "Invalid number of bits",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				//Angela
				else {
					textBox5->Text = in;
					textBox5->ForeColor = Color::Black;
					int n = in->Length;
					int* number = new int[n];
					for (int i = 0; i < n; i++) {
						number[i] = in[i] - '0';
					}

					//Jocka
					String^ hexRepresentation = "0x";
					unsigned long long int decNumber = 0;
					int powerRaised = 0;
					for (int i = n - 1; i >= 0; --i) {
						decNumber += number[i] * pow(2, powerRaised++);
					}

					char hex[8];
					int i = 0;
					while (decNumber) {
						int remainder = decNumber % 16;
						if (remainder < 10) {
							hex[i++] = System::Convert::ToChar(remainder + 48);
						}
						else {
							hex[i++] = System::Convert::ToChar(remainder + 55);
						}
						decNumber /= 16;
					}

					for (int i = 7; i >= 0; i--) {
						hexRepresentation += System::Convert::ToChar(hex[i]);
					}

					textBox7->Text = hexRepresentation;
					textBox7->ForeColor = Color::Black;

					//Angela
					String^ sign = System::Convert::ToString(number[0]);
					textBox2->Text = sign;
					textBox2->ForeColor = Color::Black;

					String^ exponent = "";
					int exp_decimal = 0;
					for (int i = 1; i < 9; i++) {
						exponent += System::Convert::ToString(number[i]);
					}
					textBox3->Text = exponent;
					textBox3->ForeColor = Color::Black;


					int mantisa_array[23];
					for (int i = 9; i < n; i++) {
						mantisa_array[i - 9] = number[i];
					}

					String^ mantisa_string = "";
					for (int i = 0; i < 23; i++) {
						mantisa_string += System::Convert::ToString(mantisa_array[i]);
					}
					textBox6->Text = mantisa_string;
					textBox6->ForeColor = Color::Black;


					int power = 0;
					for (int i = 8; i > 0; i--) {
						exp_decimal += number[i] * pow(2, power++);
					}
					exp_decimal = exp_decimal - 127;

					double mantisa = 0;
					int exp = -1;
					for (int i = 9; i < 33; i++) {
						mantisa = mantisa + (number[i] * pow(10, exp--));
					}
					mantisa = mantisa + 1;

					double kraen_rez = mantisa * pow(10, exp_decimal);

					String^ result_binary = "";
					if (number[0]) {
						result_binary += "-";
					}
					result_binary += System::Convert::ToString(kraen_rez);

					textBox4->Text = result_binary;
					textBox4->ForeColor = Color::Black;

					//kolku cifri ima pred zapirkata!
					int k = 0;
					double rez_binary = kraen_rez;
					while (rez_binary >= 1) {
						rez_binary = rez_binary * pow(10, -1);
						k++;
					}

					//Conversion to int
					int rez_converted = Convert::ToInt64(kraen_rez);
					//Convert ti string 
					String^ rez = System::Convert::ToString(rez_converted);

					//Prefrlanje na celiot del od brojot vo niza int
					//nzia1 e niza od int pred zapirkata
					int* niza1 = new int[k];
					for (int i = 0; i < k; i++) {
						niza1[i] = rez[i] - 48;
					}

					//Conversion to string
					String^ decimals = System::Convert::ToString(kraen_rez);

					//Popolnuvanje na niza2
					int broj[23];
					int j = 0;
					int flag = 0;
					int br_decimali = 0;
					for (int i = 0; i < decimals->Length; i++) {
						if (flag) {
							broj[j++] = decimals[i] - 48;
							br_decimali++;
						}
						if (decimals[i] == ',') {
							flag = 1;
						}
					}
					for (int i = br_decimali; i < 23; i++) {
						broj[i] = 0;
					}

					//pretvoranje vo decimalen!
					int v = k - 1;
					int cel_del = 0;//celio del pred zapirkata!!!
					for (int i = 0; i < k; i++) {
						niza1[i] = niza1[i] * pow(2, v--);
						cel_del += niza1[i];
					}

					v = -1;
					float decimalen_del = 0;
					float niza2[23];
					for (int i = 0; i < br_decimali; i++) {
						niza2[i] = broj[i] * pow(2, v--);
						decimalen_del += niza2[i];
					}

					double decimalen = cel_del + decimalen_del;

					String^ dec = "";
					if (number[0]) {
						dec += "-";
					}

					dec += System::Convert::ToString(decimalen);

					textBox8->Text = dec;
					textBox8->ForeColor = Color::Black;

					delete[] niza1;
					delete[] number;
				}
			}
		}
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->ForeColor = Color::Black;
		textBox1->Text = "";
	}
	};
}
