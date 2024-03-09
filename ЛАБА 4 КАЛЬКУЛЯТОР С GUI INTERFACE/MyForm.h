#pragma once

namespace CalculatorCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_out;
	protected:


	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num6;




	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num9;


	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num0;


	private: System::Windows::Forms::Button^ but_clear;
	private: System::Windows::Forms::Button^ but_point;


	private: System::Windows::Forms::Button^ but_sign;
	private: System::Windows::Forms::Button^ but_erase;
	private: System::Windows::Forms::Button^ but_minus;



	private: System::Windows::Forms::Button^ but_plus;
	private: System::Windows::Forms::Button^ but_mul;
	private: System::Windows::Forms::Button^ but_div;
	private: System::Windows::Forms::Button^ but_res;

	private: float first_num;
	private: char user_action=' ';
	private: bool is_res=false;


	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_out = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->but_clear = (gcnew System::Windows::Forms::Button());
			this->but_point = (gcnew System::Windows::Forms::Button());
			this->but_sign = (gcnew System::Windows::Forms::Button());
			this->but_erase = (gcnew System::Windows::Forms::Button());
			this->but_minus = (gcnew System::Windows::Forms::Button());
			this->but_plus = (gcnew System::Windows::Forms::Button());
			this->but_mul = (gcnew System::Windows::Forms::Button());
			this->but_div = (gcnew System::Windows::Forms::Button());
			this->but_res = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_out
			// 
			this->label_out->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_out->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_out->Location = System::Drawing::Point(12, 22);
			this->label_out->Name = L"label_out";
			this->label_out->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label_out->Size = System::Drawing::Size(344, 40);
			this->label_out->TabIndex = 1;
			this->label_out->Text = L"0";
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num1->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(46, 174);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(64, 64);
			this->num1->TabIndex = 2;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num2->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(116, 174);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(64, 64);
			this->num2->TabIndex = 3;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num3->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(186, 174);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(64, 64);
			this->num3->TabIndex = 4;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num6->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(186, 244);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(64, 64);
			this->num6->TabIndex = 7;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num5->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(116, 244);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(64, 64);
			this->num5->TabIndex = 6;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num4->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(46, 244);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(64, 64);
			this->num4->TabIndex = 5;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num9->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(186, 314);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(64, 64);
			this->num9->TabIndex = 10;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num8->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(116, 314);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(64, 64);
			this->num8->TabIndex = 9;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num7->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(46, 314);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(64, 64);
			this->num7->TabIndex = 8;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num0->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(116, 384);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(64, 64);
			this->num0->TabIndex = 11;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &MyForm::But_num_click);
			// 
			// but_clear
			// 
			this->but_clear->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_clear->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_clear->Location = System::Drawing::Point(46, 104);
			this->but_clear->Name = L"but_clear";
			this->but_clear->Size = System::Drawing::Size(64, 64);
			this->but_clear->TabIndex = 12;
			this->but_clear->Text = L"C";
			this->but_clear->UseVisualStyleBackColor = false;
			this->but_clear->Click += gcnew System::EventHandler(this, &MyForm::but_clear_Click);
			// 
			// but_point
			// 
			this->but_point->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_point->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_point->Location = System::Drawing::Point(186, 384);
			this->but_point->Name = L"but_point";
			this->but_point->Size = System::Drawing::Size(64, 64);
			this->but_point->TabIndex = 13;
			this->but_point->Text = L",";
			this->but_point->UseVisualStyleBackColor = false;
			this->but_point->Click += gcnew System::EventHandler(this, &MyForm::but_point_Click);
			// 
			// but_sign
			// 
			this->but_sign->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_sign->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_sign->Location = System::Drawing::Point(116, 104);
			this->but_sign->Name = L"but_sign";
			this->but_sign->Size = System::Drawing::Size(64, 64);
			this->but_sign->TabIndex = 14;
			this->but_sign->Text = L"+/-";
			this->but_sign->UseVisualStyleBackColor = false;
			this->but_sign->Click += gcnew System::EventHandler(this, &MyForm::but_sign_Click);
			// 
			// but_erase
			// 
			this->but_erase->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_erase->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_erase->Location = System::Drawing::Point(186, 104);
			this->but_erase->Name = L"but_erase";
			this->but_erase->Size = System::Drawing::Size(64, 64);
			this->but_erase->TabIndex = 15;
			this->but_erase->Text = L"<";
			this->but_erase->UseVisualStyleBackColor = false;
			this->but_erase->Click += gcnew System::EventHandler(this, &MyForm::but_erase_Click);
			// 
			// but_minus
			// 
			this->but_minus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_minus->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_minus->Location = System::Drawing::Point(256, 174);
			this->but_minus->Name = L"but_minus";
			this->but_minus->Size = System::Drawing::Size(64, 64);
			this->but_minus->TabIndex = 16;
			this->but_minus->Text = L"-";
			this->but_minus->UseVisualStyleBackColor = false;
			this->but_minus->Click += gcnew System::EventHandler(this, &MyForm::but_minus_Click);
			// 
			// but_plus
			// 
			this->but_plus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_plus->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_plus->Location = System::Drawing::Point(256, 104);
			this->but_plus->Name = L"but_plus";
			this->but_plus->Size = System::Drawing::Size(64, 64);
			this->but_plus->TabIndex = 17;
			this->but_plus->Text = L"+";
			this->but_plus->UseVisualStyleBackColor = false;
			this->but_plus->Click += gcnew System::EventHandler(this, &MyForm::but_plus_Click);
			// 
			// but_mul
			// 
			this->but_mul->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_mul->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_mul->Location = System::Drawing::Point(256, 244);
			this->but_mul->Name = L"but_mul";
			this->but_mul->Size = System::Drawing::Size(64, 64);
			this->but_mul->TabIndex = 18;
			this->but_mul->Text = L"*";
			this->but_mul->UseVisualStyleBackColor = false;
			this->but_mul->Click += gcnew System::EventHandler(this, &MyForm::but_mul_Click);
			// 
			// but_div
			// 
			this->but_div->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_div->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_div->Location = System::Drawing::Point(256, 314);
			this->but_div->Name = L"but_div";
			this->but_div->Size = System::Drawing::Size(64, 64);
			this->but_div->TabIndex = 19;
			this->but_div->Text = L"/";
			this->but_div->UseVisualStyleBackColor = false;
			this->but_div->Click += gcnew System::EventHandler(this, &MyForm::but_div_Click);
			// 
			// but_res
			// 
			this->but_res->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->but_res->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_res->Location = System::Drawing::Point(256, 384);
			this->but_res->Name = L"but_res";
			this->but_res->Size = System::Drawing::Size(64, 64);
			this->but_res->TabIndex = 20;
			this->but_res->Text = L"=";
			this->but_res->UseVisualStyleBackColor = false;
			this->but_res->Click += gcnew System::EventHandler(this, &MyForm::but_res_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(368, 473);
			this->Controls->Add(this->but_res);
			this->Controls->Add(this->but_div);
			this->Controls->Add(this->but_mul);
			this->Controls->Add(this->but_plus);
			this->Controls->Add(this->but_minus);
			this->Controls->Add(this->but_erase);
			this->Controls->Add(this->but_sign);
			this->Controls->Add(this->but_point);
			this->Controls->Add(this->but_clear);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label_out);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Carculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void But_num_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->label_out->Text == "0"||is_res) {
			this->label_out->Text = button->Text;
			is_res = false;
		}
		else {
			this->label_out->Text = this->label_out->Text + button->Text;
		}
	}
     private: System::Void math_action(char action) {
		 this->first_num = System::Convert::ToDouble(this->label_out->Text);
		 this->user_action = action;
		 this->label_out->Text = "0";
	 }

private: System::Void but_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label_out->Text="0";
	this->first_num = 0;
	this->user_action = ' ';
	this->is_res = false;
}
private: System::Void but_sign_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->label_out->Text);
	num *= -1;
	this->label_out->Text=System::Convert::ToString(num);
}
private: System::Void but_erase_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void but_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void but_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void but_div_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void but_mul_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void but_point_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tx = this->label_out->Text;
	if (!tx->Contains(","))
		this->label_out->Text = tx + ",";
}

	private: System::Void but_res_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action != ' ') {
			float second = System::Convert::ToDouble(this->label_out->Text);
			float res = 0;
			switch (this->user_action) {
			case '+': res = this->first_num + second; break;
			case '-': res = this->first_num - second; break;
			case '*': res = this->first_num * second; break;
			case '/':if (second != 0) { res = this->first_num / second; } break;
			}
			this->is_res = true;
			this->label_out->Text = System::Convert::ToString(res);
		}
	}

};
}
