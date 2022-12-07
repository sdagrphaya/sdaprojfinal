#pragma once

#include "Main.h"
#include "UserHomePage.h"
#include <msclr\marshal_cppstd.h>

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserSignUp
	/// </summary>
	public ref class UserSignUp : public System::Windows::Forms::Form
	{
	public:
		UserSignUp(void)
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
		~UserSignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ UserSignUpPhoneNumber;
	protected:

	private: System::Windows::Forms::TextBox^ UserSignUpAddress;
	protected:

	private: System::Windows::Forms::TextBox^ UserSignUpName;

	private: System::Windows::Forms::TextBox^ UserSignUpPassword;

	private: System::Windows::Forms::TextBox^ UserSignUpUsername;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Button^ Signup;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserSignUp::typeid));
			this->UserSignUpPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->UserSignUpAddress = (gcnew System::Windows::Forms::TextBox());
			this->UserSignUpName = (gcnew System::Windows::Forms::TextBox());
			this->UserSignUpPassword = (gcnew System::Windows::Forms::TextBox());
			this->UserSignUpUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Signup = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// UserSignUpPhoneNumber
			// 
			this->UserSignUpPhoneNumber->Location = System::Drawing::Point(529, 369);
			this->UserSignUpPhoneNumber->Name = L"UserSignUpPhoneNumber";
			this->UserSignUpPhoneNumber->Size = System::Drawing::Size(254, 26);
			this->UserSignUpPhoneNumber->TabIndex = 25;
			// 
			// UserSignUpAddress
			// 
			this->UserSignUpAddress->Location = System::Drawing::Point(529, 327);
			this->UserSignUpAddress->Name = L"UserSignUpAddress";
			this->UserSignUpAddress->Size = System::Drawing::Size(254, 26);
			this->UserSignUpAddress->TabIndex = 24;
			// 
			// UserSignUpName
			// 
			this->UserSignUpName->Location = System::Drawing::Point(529, 283);
			this->UserSignUpName->Name = L"UserSignUpName";
			this->UserSignUpName->Size = System::Drawing::Size(254, 26);
			this->UserSignUpName->TabIndex = 23;
			// 
			// UserSignUpPassword
			// 
			this->UserSignUpPassword->Location = System::Drawing::Point(529, 234);
			this->UserSignUpPassword->Name = L"UserSignUpPassword";
			this->UserSignUpPassword->PasswordChar = '*';
			this->UserSignUpPassword->Size = System::Drawing::Size(254, 26);
			this->UserSignUpPassword->TabIndex = 22;
			// 
			// UserSignUpUsername
			// 
			this->UserSignUpUsername->Location = System::Drawing::Point(529, 193);
			this->UserSignUpUsername->Name = L"UserSignUpUsername";
			this->UserSignUpUsername->Size = System::Drawing::Size(254, 26);
			this->UserSignUpUsername->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(301, 403);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 32);
			this->label6->TabIndex = 19;
			this->label6->Text = L"VehicleList: ";
			this->label6->Click += gcnew System::EventHandler(this, &UserSignUp::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(301, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 32);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(301, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 32);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(301, 362);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 32);
			this->label3->TabIndex = 16;
			this->label3->Text = L"PhoneNumber:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(301, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Password: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(301, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 32);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Username: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(362, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(417, 146);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// Signup
			// 
			this->Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Signup->Location = System::Drawing::Point(307, 549);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(472, 78);
			this->Signup->TabIndex = 30;
			this->Signup->Text = L"SignUp";
			this->Signup->UseVisualStyleBackColor = true;
			this->Signup->Click += gcnew System::EventHandler(this, &UserSignUp::Signup_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mercedes", L"BMW", L"Mehran", L"Audi" });
			this->comboBox1->Location = System::Drawing::Point(529, 410);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(254, 28);
			this->comboBox1->TabIndex = 31;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserSignUp::comboBox1_SelectedIndexChanged);
			// 
			// UserSignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1110, 691);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Signup);
			this->Controls->Add(this->UserSignUpPhoneNumber);
			this->Controls->Add(this->UserSignUpAddress);
			this->Controls->Add(this->UserSignUpName);
			this->Controls->Add(this->UserSignUpPassword);
			this->Controls->Add(this->UserSignUpUsername);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UserSignUp";
			this->Text = L"UserSignUp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Signup_Click(System::Object^ sender, System::EventArgs^ e) {
	UserHomePage obj;
	String^ ausername = UserSignUpUsername->Text;
	String^ apass = UserSignUpPassword->Text;
	String^ aname = UserSignUpName->Text;
	String^ aAddress = UserSignUpAddress->Text;
	String^ aPhone = UserSignUpPhoneNumber->Text;
	String^ uVehicle = comboBox1->SelectedItem->ToString();

	std::string userEmail = msclr::interop::marshal_as<std::string>(ausername);
	std::string UserPassword = msclr::interop::marshal_as<std::string>(apass);
	std::string UserName = msclr::interop::marshal_as<std::string>(aname);
	std::string UserAdd = msclr::interop::marshal_as<std::string>(aAddress);
	std::string UserPh = msclr::interop::marshal_as<std::string>(aPhone);
	std::string UserVehicle = msclr::interop::marshal_as<std::string>(uVehicle);
	int t;
	if (UserVehicle == "Mercedes")
		t = 1;
	else if (UserVehicle == "BMW")
		t = 2;
	else if (UserVehicle == "Mehran")
		t = 3;
	else
		t = 4;
	string s;
	if (currentuser.Signup(UserName, UserAdd, UserPh, userEmail, UserPassword, t)){
		this->Hide();
		MessageBox::Show("Sign Up Successful");
		obj.ShowDialog();
	}
	else {
		MessageBox::Show("Username already exists.");
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
