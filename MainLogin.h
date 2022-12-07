#pragma once
#include "LoginForm.h"
#include "AdminLogin.h"
#include "AdminSignUp.h"
#include "UserSignUp.h"

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class MainLogin : public System::Windows::Forms::Form
	{
	public:
		MainLogin(void)
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
		~MainLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ AdminSignup;
	private: System::Windows::Forms::Button^ UserSignup;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainLogin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AdminSignup = (gcnew System::Windows::Forms::Button());
			this->UserSignup = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(389, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 172);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::DarkRed;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LoginButton->Location = System::Drawing::Point(127, 238);
			this->LoginButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(360, 77);
			this->LoginButton->TabIndex = 5;
			this->LoginButton->Text = L"Admin Login ";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MainLogin::LoginButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(127, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(360, 78);
			this->button1->TabIndex = 6;
			this->button1->Text = L"User Login\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainLogin::button1_Click);
			// 
			// AdminSignup
			// 
			this->AdminSignup->BackColor = System::Drawing::Color::DarkRed;
			this->AdminSignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->AdminSignup->Location = System::Drawing::Point(555, 238);
			this->AdminSignup->Name = L"AdminSignup";
			this->AdminSignup->Size = System::Drawing::Size(341, 77);
			this->AdminSignup->TabIndex = 7;
			this->AdminSignup->Text = L"Admin Signup";
			this->AdminSignup->UseVisualStyleBackColor = false;
			this->AdminSignup->Click += gcnew System::EventHandler(this, &MainLogin::AdminSignup_Click);
			// 
			// UserSignup
			// 
			this->UserSignup->BackColor = System::Drawing::Color::DarkRed;
			this->UserSignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->UserSignup->Location = System::Drawing::Point(555, 364);
			this->UserSignup->Name = L"UserSignup";
			this->UserSignup->Size = System::Drawing::Size(341, 70);
			this->UserSignup->TabIndex = 8;
			this->UserSignup->Text = L"User Signup";
			this->UserSignup->UseVisualStyleBackColor = false;
			this->UserSignup->Click += gcnew System::EventHandler(this, &MainLogin::UserSignup_Click);
			// 
			// MainLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(991, 525);
			this->Controls->Add(this->UserSignup);
			this->Controls->Add(this->AdminSignup);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MainLogin";
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {      //User Login
		LoginForm obj;
		this->Hide();
		obj.ShowDialog();
	}
    private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {   //Admin Login
		AdminLogin obj;
	    this->Hide();
	    obj.ShowDialog();
    }

	private: System::Void AdminSignup_Click(System::Object^ sender, System::EventArgs^ e) {  //Admin Signup
		AdminSignUp obj;
		this->Hide();
		obj.ShowDialog();
	}
	private: System::Void UserSignup_Click(System::Object^ sender, System::EventArgs^ e)	 {  //User Signup
		UserSignUp obj;
		this->Hide();
		obj.ShowDialog();
	}
};
}